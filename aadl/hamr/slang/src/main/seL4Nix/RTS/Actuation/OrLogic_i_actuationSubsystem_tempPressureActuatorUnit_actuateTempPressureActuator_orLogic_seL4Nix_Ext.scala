package RTS.Actuation

import org.sireum._
import art._

object OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_seL4Nix_Ext {
  def channel1_IsEmpty(): B = halt("stub")

  def channel1_Receive(): Option[DataContent] = halt("stub")

  def channel2_IsEmpty(): B = halt("stub")

  def channel2_Receive(): Option[DataContent] = halt("stub")

  def actuate_Send(d: DataContent): Unit = halt("stub")
}
