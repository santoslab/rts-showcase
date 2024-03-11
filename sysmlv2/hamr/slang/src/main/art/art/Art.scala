// #Sireum

package art

import org.sireum._
import art.scheduling.Scheduler

object Art {

  @range(min = 0, max = 14, index = T) class BridgeId

  @range(min = 0, max = 75, index = T) class PortId

  @range(min = 0, max = 37, index = T) class ConnectionId

  type Time = S64 // Z might be too small after transpiling

  val numComponents: Z = 15
  val numPorts: Z = 76
  val numConnections: Z = 38

  val logTitle: String = "Art"

  val bridges: MSZ[Option[Bridge]] = MS.create(numComponents, None[Bridge]())
  val ports: MS[Art.PortId, Option[UPort]] = MS.create[Art.PortId, Option[UPort]](numPorts, None[UPort]())
  val connections: MS[Art.PortId, IS[Art.ConnectionId, Art.PortId]] = MS.create[Art.PortId, IS[Art.ConnectionId, Art.PortId]](numPorts, IS())

  // Note on transpiling:
  // ports and connections are not touched/transpiled when targeting seL4. Bridges
  // are isolated when transpiling so BridgeId.Max could be 0, but changing Min/Max is
  // not currently supported by the transpiler so instead bridges is defined as an MSZ
  // so that that its size can be set to 1 and thus reduce stack space requirements


  @pure def bridge(bridgeId: Art.BridgeId): Bridge = {
    return bridges(bridgeId.toZ).get
  }

  @pure def port(p: Art.PortId): UPort = {
    return ports(p).get
  }

  def register(bridge: Bridge): Unit = {
    bridges(bridge.id.toZ) = Some(bridge)
    bridge.dispatchProtocol match {
      case DispatchPropertyProtocol.Periodic(period) =>
        ArtNative.logInfo(logTitle, s"Registered component: ${bridge.name} (periodic: $period)")
      case DispatchPropertyProtocol.Sporadic(min) =>
        ArtNative.logInfo(logTitle, s"Registered component: ${bridge.name} (sporadic: $min)")
    }

    def r(uports: ISZ[UPort]): Unit = {
      for (port <- uports) {
        ports(port.id) = Some(port)
        /* transpiler does not emit an extractor for matches in nested functions
        port.mode match {
          case PortMode.DataIn => ArtNative.logInfo(logTitle, s"- Registered port: ${port.name} (data in)")
          case PortMode.DataOut => ArtNative.logInfo(logTitle, s"- Registered port: ${port.name} (data out)")
          case PortMode.EventIn => ArtNative.logInfo(logTitle, s"- Registered port: ${port.name} (event in)")
          case PortMode.EventOut => ArtNative.logInfo(logTitle, s"- Registered port: ${port.name} (event out)")
        }
        */
        val typ: String = if (port.mode == PortMode.DataIn) "(data in)" else if (port.mode == PortMode.DataOut) "(data out)" else if (port.mode == PortMode.EventOut) "(event out)" else if (port.mode == PortMode.EventIn) "(event in)" else "(infeasible)"
        ArtNative.logInfo(logTitle, s"- Registered port: ${port.name} $typ")
      }
    }

    r(bridge.ports.dataIns)
    r(bridge.ports.dataOuts)
    r(bridge.ports.eventIns)
    r(bridge.ports.eventOuts)
  }

  // can't find definition in the standard ??
  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = { // DISPATCH_STATUS
    return ArtNative.dispatchStatus(bridgeId)
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = { // RECEIVE_INPUT
    ArtNative.receiveInput(eventPortIds, dataPortIds)
  }

  def putValue(portId: PortId, data: DataContent): Unit = { // PUT_VALUE
    ArtNative.putValue(portId, data)
  }

  def getValue(portId: PortId): Option[DataContent] = { // GET_VALUE
    return ArtNative.getValue(portId)
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = { // SEND_OUTPUT
    ArtNative.sendOutput(eventPortIds, dataPortIds)
  }

  /** The seL4 platform doesn't use the bridges data structure and its
    * version of the loggers ignore the 'title' parameter. Not pattern matching
    * here as that adds an Option to the stack which increases the stack size.
    */
  def logInfo(bridgeId: Art.BridgeId, msg: String): Unit = {
    if (bridges(bridgeId.toZ).nonEmpty) {
      ArtNative.logInfo(bridges(bridgeId.toZ).get.name, msg)
    } else {
      ArtNative.logInfo("", msg)
    }
  }

  def logError(bridgeId: Art.BridgeId, msg: String): Unit = {
    if (bridges(bridgeId.toZ).nonEmpty) {
      ArtNative.logError(bridges(bridgeId.toZ).get.name, msg)
    } else {
      ArtNative.logError("", msg)
    }
  }

  def logDebug(bridgeId: Art.BridgeId, msg: String): Unit = {
    if (bridges(bridgeId.toZ).nonEmpty) {
      ArtNative.logDebug(bridges(bridgeId.toZ).get.name, msg)
    } else {
      ArtNative.logDebug("", msg)
    }
  }

  def connect(from: UPort, to: UPort): Unit = {
    connections(from.id) = connections(from.id) :+ to.id
    ArtNative.logInfo(logTitle, s"Connected ports: ${from.name} -> ${to.name}")
  }

  // JH: Refactor
  // Define explicit assemble phase (to support both test and execution modes)
  def assemble(system: ArchitectureDescription): Unit = {
    for (component <- system.components) {
      register(component)
    }

    for (connection <- system.connections) {
      connect(connection.from, connection.to)
    }
  }

  def run(system: ArchitectureDescription,
          scheduler: Scheduler): Unit = {

    assemble(system)

    setUpArchitecture()
    setUpPlatform()
    setUpSystemState(scheduler)

    initializePhase(scheduler)
    computePhase(scheduler)
    finalizePhase(scheduler)

    tearDownSystemState()
    tearDownPlatform()
    tearDownArchitecture()
  }

  def initializePhase(scheduler: Scheduler): Unit = {
    ArtNative.initializePhase()
    scheduler.initializationPhase()
  }

  def computePhase(scheduler: Scheduler): Unit = {
    ArtNative.computePhase()
    scheduler.computePhase()
  }

  def finalizePhase(scheduler: Scheduler): Unit = {
    ArtNative.finalizePhase()
    scheduler.finalizePhase()
  }

  def setUpArchitecture(): Unit = {}

  def tearDownArchitecture(): Unit = {}

  def setUpPlatform(): Unit = {}

  def tearDownPlatform(): Unit = {}

  def setUpSystemState(scheduler: Scheduler): Unit = {
    ArtNative.setUpSystemState()
    scheduler.initialize()
  }

  def tearDownSystemState(): Unit = {
    ArtNative.tearDownSystemState()
  }

  def time(): Time = {
    return ArtNative.time()
  }

  /////////////
  // TESTING //
  /////////////

  /**
   * Clears any existing ports and bridges, then sets up ports/bridges for the next test.
   *
   * Automatically called by BridgeTestSuite before each test.
   */
  def initTest(bridge: Bridge): Unit = {
    // remove all bridges
    for (i <- bridges.indices) {
      bridges(i) = None()
    }

    // remove all connections
    for (i <- connections.indices) {
      connections(i) = IS()
    }

    // remove all ports
    for (i <- ports.indices) {
      ports(i) = None()
    }

    // register bridge passed to this method
    register(bridge)

    // call ArtNative to reset the state of the specific thread component
    ArtNative.initTest(bridge)
  }

  /**
  * Executes a component (identified by bridge) Initialize Entry Point (application code)
  * for the purposes of unit testing.
  *
  * This infrastructure method is called with automatically generated unit testing support code.
  * The developer-facing version of this method (called by a developer unit test)
  * provided by the unit testing support code hides the bridge argument.  The bridge
  * value is retrieved from the testing infrastructure code before passing the call
  * through to this method.
  */
  def testInitialise(bridge: Bridge): Unit = {
    ArtNative.testInitialise(bridge)
  }

  /**
   * Executes a component (identified by bridge) Compute Entry Point (application code)
   * for the purposes of unit testing.
   *
   * This infrastructure method is called with automatically generated unit testing support code.
   * The developer-facing version of this method (called by a developer unit test)
   * provided by the unit testing support code hides the bridge argument.  The bridge
   * value is retrieved from the testing infrastructure code before passing the call
   * through to this method.
   */
  def testCompute(bridge: Bridge): Unit = {
    ArtNative.testCompute(bridge)
  }


  def finalizeTest(bridge: Bridge): Unit = {
    ArtNative.finalizeTest(bridge)
  }

  // JH: Refactored
  //   add system test capability
  def initSystemTest(system: ArchitectureDescription,
                     scheduler: Scheduler): Unit = {
    // remove all bridges
    for (i <- bridges.indices) {
      bridges(i) = None()
    }

    // remove all connections
    for (i <- connections.indices) {
      connections(i) = IS()
    }

    // remove all ports
    for (i <- ports.indices) {
      ports(i) = None()
    }
    // It seems to me that it might be best to do this once and for all (not for every test) as it is really
    // a static description of the model that will not be changing.
    assemble(system)

    // let ArtNative reset itself as well
    ArtNative.initSystemTest(scheduler)
  }

  //  def executeSystemTest(): Unit = {
  //    ArtNative.executeTest()
  //  }

  // JH: Refactored
  //   add system test capability
  def finalizeSystemTest(): Unit = {
    ArtNative.finalizeSystemTest()
  }

  def releaseOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    ArtNative.releaseOutput(eventPortIds, dataPortIds)
  }

  def manuallyClearOutput(): Unit = {
    ArtNative.manuallyClearOutput()
  }

  def insertInInfrastructurePort(dstPortId: Art.PortId, data: DataContent): Unit = {
    ArtNative.insertInInfrastructurePort(dstPortId, data)
  }

  def observeInInfrastructurePort(portId: Art.PortId): Option[DataContent] = {
    return ArtNative.observeInInfrastructurePort(portId)
  }

  def observeOutInfrastructurePort(portId: Art.PortId): Option[DataContent] = {
    return ArtNative.observeOutInfrastructurePort(portId)
  }

  def observeInPortVariable(portId: Art.PortId): Option[DataContent] = {
    return ArtNative.observeInPortVariable(portId)
  }

  def observeOutPortVariable(portId: Art.PortId): Option[DataContent] = {
    return ArtNative.observeOutPortVariable(portId)
  }
}
