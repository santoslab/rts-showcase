// #Sireum

package art

import org.sireum._
import art.DispatchPropertyProtocol.{Periodic, Sporadic}
import org.sireum.S64._

object ArtSlangMessage {
  val UNSET_TIME: Art.Time = s64"-1"
}

@datatype class ArtSlangMessage(data: DataContent,

                                srcPortId: Art.PortId,
                                dstPortId: Option[Art.PortId],

                                // when putValue was called by producer
                                putValueTimestamp: Art.Time,

                                // when sendOutput transferred message from out port var of producer
                                sendOutputTimestamp: Art.Time,

                                // when message arrived via transport layer
                                dstArrivalTimestamp: Art.Time,

                                // when receiveInput transferred message to in port vars of consumer
                                receiveInputTimestamp: Art.Time
                               )

object ArtNativeSlang {

  var inInfrastructurePorts: Map[Z, ArtSlangMessage] = Map.empty
  var outInfrastructurePorts: Map[Z, ArtSlangMessage] = Map.empty
  var inPortVariables: Map[Z, ArtSlangMessage] = Map.empty
  var outPortVariables: Map[Z, ArtSlangMessage] = Map.empty

  def shouldDispatch(bridgeId: Art.BridgeId): B = {
    assert(Art.bridges(bridgeId.toZ).nonEmpty, s"Bridge ${bridgeId} does not exist")

    Art.bridges(bridgeId.toZ).get.dispatchProtocol match {
      case DispatchPropertyProtocol.Periodic(_) => return T
      case DispatchPropertyProtocol.Sporadic(minRate) =>

        val eventIns = Art.bridges(bridgeId.toZ).get.ports.eventIns

        var hasEvents = F
        // transpiler workaround -- doesn't support .exists
        for (e <- eventIns) {
          if (inInfrastructurePorts.contains(e.id.toZ)) {
            hasEvents = T
          }
        }
        return hasEvents
    }
  }

  // transpiler friendly comparator
  def lt(a: art.UPort, b: art.UPort): B = { // reverse sort
    val r: B = (a, b) match {
      // sorting function to make prioritized sequence of event port ids
      //   compare p1 to p2  (p1 represents the port to process earlier, i.e., should have priority)
      case (p1: UrgentPortProto, p2: UrgentPortProto) =>
        // if p1 has a strictly less urgency it comes after p2
        if (p1.urgency < p2.urgency) F
        // if p1 has a strictly greater urgency, it comes before p2
        else if (p1.urgency > p2.urgency) T
        // if p1 and p2 have the same urgency, the ordering is determined by arrival timestamps
        else inInfrastructurePorts.get(p1.id.toZ).get.dstArrivalTimestamp < inInfrastructurePorts.get(p2.id.toZ).get.dstArrivalTimestamp
      case (_: UrgentPortProto, _: PortProto) => T // urgent ports take precedence
      case (_: PortProto, _: UrgentPortProto) => F // urgent ports take precedence
      case (p1: PortProto, p2: PortProto) =>
        inInfrastructurePorts.get(p1.id.toZ).get.dstArrivalTimestamp < inInfrastructurePorts.get(p2.id.toZ).get.dstArrivalTimestamp
    }
    return r
  }

  // transpiler friendly sort
  def sort(ports: ISZ[UPort]): ISZ[UPort] = {
    def insert(p: UPort, sorted: ISZ[UPort]): ISZ[UPort] = {
      if (sorted.isEmpty) {
        return ISZ[UPort](p)
      }
      else {
        if (lt(sorted(0), p)) {
          return sorted(0) +: insert(p, ops.ISZOps(sorted).tail)
        }
        else {
          return p +: sorted
        }
      }
    }

    if (ports.isEmpty) {
      return ports
    }
    else {
      val sorted = sort(ops.ISZOps(ports).tail)
      return insert(ports(0), sorted)
    }
  }

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    val ret: DispatchStatus = Art.bridges(bridgeId.toZ).get.dispatchProtocol match {
      case Periodic(_) => TimeTriggered()
      case Sporadic(_) =>
        // get ids for non-empty input event ports
        val uports: ISZ[UPort] =
          for (p <- Art.bridges(bridgeId.toZ).get.ports.eventIns if inInfrastructurePorts.get(p.id.toZ).nonEmpty) yield p

        if (uports.isEmpty) {
          halt(s"Unexpected: shouldDispatch() should have returned true in order to get here, however the incoming event ports are empty for bridge id ${bridgeId}")
        }

        val urgentFifo = sort(uports)
        EventTriggered(for (p <- urgentFifo) yield p.id)
    }
    return ret
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // remove any old events from previous dispatch
    for (portId <- eventPortIds if inPortVariables.contains(portId.toZ)) {
      inPortVariables = inPortVariables - ((portId.toZ, inPortVariables.get(portId.toZ).get))
    }

    // transfer received data/events from the infrastructure ports to the port variables
    for (portId <- eventPortIds) {
      inInfrastructurePorts.get(portId.toZ) match {
        case Some(data) =>
          inInfrastructurePorts = inInfrastructurePorts - ((portId.toZ, data))
          inPortVariables = inPortVariables + (portId.toZ ~> data(receiveInputTimestamp = Art.time()))
        case _ =>
      }
    }
    for (portId <- dataPortIds) {
      inInfrastructurePorts.get(portId.toZ) match {
        case Some(data) =>
          inPortVariables = inPortVariables + (portId.toZ ~> data)
        case _ =>
      }
    }
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    // wrap the Art.DataContent value into an ArtMessage with time stamps
    outPortVariables = outPortVariables + (portId.toZ ~>
      ArtSlangMessage(data = data, srcPortId = portId, putValueTimestamp = Art.time(),
        dstPortId = None(), sendOutputTimestamp = ArtSlangMessage.UNSET_TIME, dstArrivalTimestamp = ArtSlangMessage.UNSET_TIME, receiveInputTimestamp = ArtSlangMessage.UNSET_TIME))
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    // To return the value of the port to the application code, project
    // out the actual payload value (v.data) from ArtMessage (which includes timestamps, etc.)
    // to Art.DataContent (the "top"/union data type supported by Art.
    // The projecting preserves the option of structure of ArtMessage value.
    if (inPortVariables.contains(portId.toZ)) {
      return Some(inPortVariables.get(portId.toZ).get.data)
    } else {
      return None()
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    for (srcPortId <- eventPortIds ++ dataPortIds) {
      outPortVariables.get(srcPortId.toZ) match {
        case Some(msg) => {

          // move payload from out port port variables to the out infrastructure ports
          outInfrastructurePorts = outInfrastructurePorts + (srcPortId.toZ ~> msg)
          outPortVariables = outPortVariables - ((srcPortId.toZ, msg))

          // simulate sending msg via transport middleware
          for (dstPortId <- Art.connections(srcPortId)) {
            val _msg = msg(dstPortId = Some(dstPortId), sendOutputTimestamp = Art.time())

            // send via middleware

            inInfrastructurePorts = inInfrastructurePorts + (dstPortId.toZ ~>
              _msg(dstArrivalTimestamp = Art.time()))
          }

          // payload delivered so remove it from out infrastructure port
          outInfrastructurePorts = outInfrastructurePorts - ((srcPortId.toZ, msg))
        }
        case _ =>
      }
    }
    // could clear outPortVariables for passed in portids but not strictly necessary
  }

  /**
   * Returns the value of an in infrastructure port.
   *
   * @param portId the id of the INPUT port to return a value from
   * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
   */
  def observeInInfrastructurePort(portId: Art.PortId): Option[DataContent] = {
    // right now, with event data port queues limited to size one, there is no difference in the logic
    // between how data ports are treated, and how event/event data ports are treated.
    Art.port(portId).mode match {
      case PortMode.DataIn =>
        inInfrastructurePorts.get(portId.toZ) match {
          case Some(value) => return Some(value.data)
          case _ => return None()
        }
      case PortMode.EventIn =>
        inInfrastructurePorts.get(portId.toZ) match {
          case Some(value) => return Some(value.data)
          case _ => return None()
        }
      case _ => {
        assert(false, "expecting in port")
        return None()
      }
    }
  }

  /**
   * Returns the value of an infrastructure out port.
   *
   * @param portId the id of the OUTPUT port to return a value from
   * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
   */
  def observeOutInfrastructurePort(portId: Art.PortId): Option[DataContent] = {
    // note: would be changed when we refactor to support event queues of size > 1
    outInfrastructurePorts.get(portId.toZ) match {
      case Some(value) => return Some(value.data)
      case _ => return None()
    }
  }

  /**
   * Returns the value of an application in port.
   *
   * @param portId the id of the INPUT port to return a value from
   * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
   */
  def observeInPortVariable(portId: Art.PortId): Option[DataContent] = {
    // right now, with event data port queues limited to size one, there is no difference in the logic
    // between how data ports are treated, and how event/event data ports are treated.
    Art.port(portId).mode match {
      case PortMode.DataIn =>
        inPortVariables.get(portId.toZ) match {
          case Some(value) => return Some(value.data)
          case _ => return None()
        }
      case PortMode.EventIn =>
        inPortVariables.get(portId.toZ) match {
          case Some(value) => return Some(value.data)
          case _ => return None()
        }
      case _ => {
        assert(false, "expecting in port")
        return None()
      }
    }
  }

  /**
     * Returns the value of an application out port.
     *
     * @param portId the id of the OUTPUT port to return a value from
     * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
     */
  def observeOutPortVariable(portId: Art.PortId): Option[DataContent] = {
    // note: would be changed when we refactor to support event queues of size > 1
    outPortVariables.get(portId.toZ) match {
      case Some(value) => return Some(value.data)
      case _ => return None()
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    eprint(title)
    eprint(": ")
    eprintln(msg)
  }

  def logError(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }


  def setUpSystemState(): Unit = {
    // probably nothing to do here
  }

  def tearDownSystemState(): Unit = {
    // probably nothing to do here
  }


  def initializePhase(): Unit = {
    // probably nothing to do here
  }

  def computePhase(): Unit = {
    // probably nothing to do here
  }

  def finalizePhase(): Unit = {
    // probably nothing to do here
  }


  def time(): Art.Time = {
    return Process.time()
  }
}

@ext(name = "art.ArtNative_Ext") object Process {
  def time(): Art.Time = $
}