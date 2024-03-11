// #Sireum

package RTS.Actuation

import org.sireum._
import RTS._
import RTS.util.Container

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

// containers for the pre and post state values of ports and state variables

@sig trait CoincidenceLogic_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_PreState_Container extends Container {
  def api_ports_channel1: B
  def api_ports_channel2: B
  def api_ports_channel3: B
  def api_ports_channel4: B
}

// container for incoming ports
@datatype class CoincidenceLogic_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_PreState_Container_P (
  val api_ports_channel1: B,
  val api_ports_channel2: B,
  val api_ports_channel3: B,
  val api_ports_channel4: B) extends CoincidenceLogic_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_PreState_Container

// container for incoming ports and state variables
@datatype class CoincidenceLogic_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_PreState_Container_PS (
  val api_ports_channel1: B,
  val api_ports_channel2: B,
  val api_ports_channel3: B,
  val api_ports_channel4: B) extends CoincidenceLogic_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_PreState_Container

@sig trait CoincidenceLogic_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_PostState_Container extends Container {
  def api_ports_actuate: B
}

// container for outgoing ports
@datatype class CoincidenceLogic_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_PostState_Container_P (
  val api_ports_actuate: B) extends CoincidenceLogic_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_PostState_Container

// container for outgoing ports and state variables
@datatype class CoincidenceLogic_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_PostState_Container_PS (
  val api_ports_actuate: B) extends CoincidenceLogic_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_PostState_Container