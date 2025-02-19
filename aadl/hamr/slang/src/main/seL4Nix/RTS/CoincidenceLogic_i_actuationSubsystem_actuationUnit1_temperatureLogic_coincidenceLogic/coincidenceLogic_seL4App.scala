// #Sireum

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

package RTS.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic

import org.sireum._
import art._
import art.Art.BridgeId._
import art.Art.PortId._
import art.DispatchPropertyProtocol._
import art.PortMode._
import RTS._
import RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_seL4Nix

object coincidenceLogic_seL4App extends App {

  val coincidenceLogicBridge : RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge = {
    val channel1 = Port[Base_Types.Boolean] (id = portId"0", name = "RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_channel1", mode = DataIn)
    val channel2 = Port[Base_Types.Boolean] (id = portId"1", name = "RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_channel2", mode = DataIn)
    val channel3 = Port[Base_Types.Boolean] (id = portId"2", name = "RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_channel3", mode = DataIn)
    val channel4 = Port[Base_Types.Boolean] (id = portId"3", name = "RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_channel4", mode = DataIn)
    val actuate = Port[Base_Types.Boolean] (id = portId"4", name = "RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_actuate", mode = DataOut)

    RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge(
      id = bridgeId"0",
      name = "RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      channel1 = channel1,
      channel2 = channel2,
      channel3 = channel3,
      channel4 = channel4,
      actuate = actuate
    )
  }

  val entryPoints: Bridge.EntryPoints = coincidenceLogicBridge.entryPoints
  val noData: Option[DataContent] = None()

  // channel1: In DataPort Base_Types.Boolean
  val channel1_id: Art.PortId = coincidenceLogicBridge.channel1.id
  var channel1_port: Option[DataContent] = noData

  // channel2: In DataPort Base_Types.Boolean
  val channel2_id: Art.PortId = coincidenceLogicBridge.channel2.id
  var channel2_port: Option[DataContent] = noData

  // channel3: In DataPort Base_Types.Boolean
  val channel3_id: Art.PortId = coincidenceLogicBridge.channel3.id
  var channel3_port: Option[DataContent] = noData

  // channel4: In DataPort Base_Types.Boolean
  val channel4_id: Art.PortId = coincidenceLogicBridge.channel4.id
  var channel4_port: Option[DataContent] = noData

  // actuate: Out DataPort Base_Types.Boolean
  val actuate_id: Art.PortId = coincidenceLogicBridge.actuate.id
  var actuate_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == channel1_id) {
      return channel1_port
    } else if(portId == channel2_id) {
      return channel2_port
    } else if(portId == channel3_id) {
      return channel3_port
    } else if(portId == channel4_id) {
      return channel4_port
    } else {
      halt(s"Unexpected: coincidenceLogic.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    channel1_port = CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_seL4Nix.channel1_Receive()

    channel2_port = CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_seL4Nix.channel2_Receive()

    channel3_port = CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_seL4Nix.channel3_Receive()

    channel4_port = CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_seL4Nix.channel4_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == actuate_id) {
      actuate_port = Some(data)
    } else {
      halt(s"Unexpected: coincidenceLogic.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(actuate_port.nonEmpty) {
      CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_seL4Nix.actuate_Send(actuate_port.get)
      actuate_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    // nothing to do - CAmkES is responsible for initialization
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(portId"0", Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(portId"0", None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Boolean_Payload(Base_Types.Boolean_example()))
      printDataContent(Base_Types.Integer_Payload(Base_Types.Integer_example()))
      printDataContent(Base_Types.Integer_8_Payload(Base_Types.Integer_8_example()))
      printDataContent(Base_Types.Integer_16_Payload(Base_Types.Integer_16_example()))
      printDataContent(Base_Types.Integer_32_Payload(Base_Types.Integer_32_example()))
      printDataContent(Base_Types.Integer_64_Payload(Base_Types.Integer_64_example()))
      printDataContent(Base_Types.Unsigned_8_Payload(Base_Types.Unsigned_8_example()))
      printDataContent(Base_Types.Unsigned_16_Payload(Base_Types.Unsigned_16_example()))
      printDataContent(Base_Types.Unsigned_32_Payload(Base_Types.Unsigned_32_example()))
      printDataContent(Base_Types.Unsigned_64_Payload(Base_Types.Unsigned_64_example()))
      printDataContent(Base_Types.Float_Payload(Base_Types.Float_example()))
      printDataContent(Base_Types.Float_32_Payload(Base_Types.Float_32_example()))
      printDataContent(Base_Types.Float_64_Payload(Base_Types.Float_64_example()))
      printDataContent(Base_Types.Character_Payload(Base_Types.Character_example()))
      printDataContent(Base_Types.String_Payload(Base_Types.String_example()))
      printDataContent(art.Empty())

      RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_initialization_api.get.logInfo("")
      RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_initialization_api.get.logDebug("")
      RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_initialization_api.get.logError("")
      RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_operational_api.get.logInfo("")
      RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_operational_api.get.logDebug("")
      RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_operational_api.get.logError("")
      val apiUsage_channel1: Option[Base_Types.Boolean] = RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_operational_api.get.get_channel1()
      val apiUsage_channel2: Option[Base_Types.Boolean] = RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_operational_api.get.get_channel2()
      val apiUsage_channel3: Option[Base_Types.Boolean] = RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_operational_api.get.get_channel3()
      val apiUsage_channel4: Option[Base_Types.Boolean] = RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_operational_api.get.get_channel4()
      RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_initialization_api.get.put_actuate(Base_Types.Boolean_example())
      RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.c_operational_api.get.put_actuate(Base_Types.Boolean_example())
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(coincidenceLogicBridge.name)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(coincidenceLogicBridge.name)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(coincidenceLogicBridge.name)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}
