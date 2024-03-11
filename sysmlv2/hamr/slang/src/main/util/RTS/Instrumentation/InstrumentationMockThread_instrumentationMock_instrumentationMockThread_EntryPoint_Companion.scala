// #Sireum

package RTS.Instrumentation

import org.sireum._
import art._
import RTS._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

object InstrumentationMockThread_instrumentationMock_instrumentationMockThread_EntryPoint_Companion {

  var last_api_ports_unit1_temperatureLogic_channel1: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_temperatureLogic_channel1.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_temperatureLogic_channel1.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_temperatureLogic_channel1: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_temperatureLogic_channel1_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_temperatureLogic_channel1 = Some(value)
        return value
      case _ if last_api_ports_unit1_temperatureLogic_channel1.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_temperatureLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_temperatureLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_temperatureLogic_channel1.get
    }
  }
  var last_api_ports_unit1_temperatureLogic_channel2: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_temperatureLogic_channel2.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_temperatureLogic_channel2.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_temperatureLogic_channel2: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_temperatureLogic_channel2_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_temperatureLogic_channel2 = Some(value)
        return value
      case _ if last_api_ports_unit1_temperatureLogic_channel2.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_temperatureLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_temperatureLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_temperatureLogic_channel2.get
    }
  }
  var last_api_ports_unit1_temperatureLogic_channel3: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_temperatureLogic_channel3.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_temperatureLogic_channel3.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_temperatureLogic_channel3: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_temperatureLogic_channel3_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_temperatureLogic_channel3 = Some(value)
        return value
      case _ if last_api_ports_unit1_temperatureLogic_channel3.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_temperatureLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_temperatureLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_temperatureLogic_channel3.get
    }
  }
  var last_api_ports_unit1_temperatureLogic_channel4: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_temperatureLogic_channel4.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_temperatureLogic_channel4.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_temperatureLogic_channel4: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_temperatureLogic_channel4_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_temperatureLogic_channel4 = Some(value)
        return value
      case _ if last_api_ports_unit1_temperatureLogic_channel4.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_temperatureLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_temperatureLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_temperatureLogic_channel4.get
    }
  }
  var last_api_ports_unit1_pressureLogic_channel1: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_pressureLogic_channel1.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_pressureLogic_channel1.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_pressureLogic_channel1: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_pressureLogic_channel1_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_pressureLogic_channel1 = Some(value)
        return value
      case _ if last_api_ports_unit1_pressureLogic_channel1.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_pressureLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_pressureLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_pressureLogic_channel1.get
    }
  }
  var last_api_ports_unit1_pressureLogic_channel2: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_pressureLogic_channel2.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_pressureLogic_channel2.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_pressureLogic_channel2: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_pressureLogic_channel2_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_pressureLogic_channel2 = Some(value)
        return value
      case _ if last_api_ports_unit1_pressureLogic_channel2.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_pressureLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_pressureLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_pressureLogic_channel2.get
    }
  }
  var last_api_ports_unit1_pressureLogic_channel3: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_pressureLogic_channel3.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_pressureLogic_channel3.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_pressureLogic_channel3: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_pressureLogic_channel3_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_pressureLogic_channel3 = Some(value)
        return value
      case _ if last_api_ports_unit1_pressureLogic_channel3.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_pressureLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_pressureLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_pressureLogic_channel3.get
    }
  }
  var last_api_ports_unit1_pressureLogic_channel4: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_pressureLogic_channel4.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_pressureLogic_channel4.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_pressureLogic_channel4: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_pressureLogic_channel4_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_pressureLogic_channel4 = Some(value)
        return value
      case _ if last_api_ports_unit1_pressureLogic_channel4.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_pressureLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_pressureLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_pressureLogic_channel4.get
    }
  }
  var last_api_ports_unit1_saturationLogic_channel1: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_saturationLogic_channel1.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_saturationLogic_channel1.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_saturationLogic_channel1: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_saturationLogic_channel1_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_saturationLogic_channel1 = Some(value)
        return value
      case _ if last_api_ports_unit1_saturationLogic_channel1.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_saturationLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_saturationLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_saturationLogic_channel1.get
    }
  }
  var last_api_ports_unit1_saturationLogic_channel2: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_saturationLogic_channel2.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_saturationLogic_channel2.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_saturationLogic_channel2: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_saturationLogic_channel2_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_saturationLogic_channel2 = Some(value)
        return value
      case _ if last_api_ports_unit1_saturationLogic_channel2.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_saturationLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_saturationLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_saturationLogic_channel2.get
    }
  }
  var last_api_ports_unit1_saturationLogic_channel3: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_saturationLogic_channel3.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_saturationLogic_channel3.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_saturationLogic_channel3: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_saturationLogic_channel3_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_saturationLogic_channel3 = Some(value)
        return value
      case _ if last_api_ports_unit1_saturationLogic_channel3.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_saturationLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_saturationLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_saturationLogic_channel3.get
    }
  }
  var last_api_ports_unit1_saturationLogic_channel4: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit1_saturationLogic_channel4.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit1_saturationLogic_channel4.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit1_saturationLogic_channel4: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit1_saturationLogic_channel4_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit1_saturationLogic_channel4 = Some(value)
        return value
      case _ if last_api_ports_unit1_saturationLogic_channel4.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit1_saturationLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit1_saturationLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit1_saturationLogic_channel4.get
    }
  }
  var last_api_ports_unit2_temperatureLogic_channel1: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_temperatureLogic_channel1.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_temperatureLogic_channel1.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_temperatureLogic_channel1: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_temperatureLogic_channel1_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_temperatureLogic_channel1 = Some(value)
        return value
      case _ if last_api_ports_unit2_temperatureLogic_channel1.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_temperatureLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_temperatureLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_temperatureLogic_channel1.get
    }
  }
  var last_api_ports_unit2_temperatureLogic_channel2: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_temperatureLogic_channel2.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_temperatureLogic_channel2.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_temperatureLogic_channel2: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_temperatureLogic_channel2_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_temperatureLogic_channel2 = Some(value)
        return value
      case _ if last_api_ports_unit2_temperatureLogic_channel2.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_temperatureLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_temperatureLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_temperatureLogic_channel2.get
    }
  }
  var last_api_ports_unit2_temperatureLogic_channel3: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_temperatureLogic_channel3.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_temperatureLogic_channel3.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_temperatureLogic_channel3: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_temperatureLogic_channel3_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_temperatureLogic_channel3 = Some(value)
        return value
      case _ if last_api_ports_unit2_temperatureLogic_channel3.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_temperatureLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_temperatureLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_temperatureLogic_channel3.get
    }
  }
  var last_api_ports_unit2_temperatureLogic_channel4: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_temperatureLogic_channel4.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_temperatureLogic_channel4.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_temperatureLogic_channel4: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_temperatureLogic_channel4_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_temperatureLogic_channel4 = Some(value)
        return value
      case _ if last_api_ports_unit2_temperatureLogic_channel4.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_temperatureLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_temperatureLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_temperatureLogic_channel4.get
    }
  }
  var last_api_ports_unit2_pressureLogic_channel1: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_pressureLogic_channel1.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_pressureLogic_channel1.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_pressureLogic_channel1: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_pressureLogic_channel1_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_pressureLogic_channel1 = Some(value)
        return value
      case _ if last_api_ports_unit2_pressureLogic_channel1.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_pressureLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_pressureLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_pressureLogic_channel1.get
    }
  }
  var last_api_ports_unit2_pressureLogic_channel2: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_pressureLogic_channel2.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_pressureLogic_channel2.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_pressureLogic_channel2: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_pressureLogic_channel2_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_pressureLogic_channel2 = Some(value)
        return value
      case _ if last_api_ports_unit2_pressureLogic_channel2.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_pressureLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_pressureLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_pressureLogic_channel2.get
    }
  }
  var last_api_ports_unit2_pressureLogic_channel3: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_pressureLogic_channel3.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_pressureLogic_channel3.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_pressureLogic_channel3: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_pressureLogic_channel3_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_pressureLogic_channel3 = Some(value)
        return value
      case _ if last_api_ports_unit2_pressureLogic_channel3.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_pressureLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_pressureLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_pressureLogic_channel3.get
    }
  }
  var last_api_ports_unit2_pressureLogic_channel4: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_pressureLogic_channel4.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_pressureLogic_channel4.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_pressureLogic_channel4: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_pressureLogic_channel4_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_pressureLogic_channel4 = Some(value)
        return value
      case _ if last_api_ports_unit2_pressureLogic_channel4.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_pressureLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_pressureLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_pressureLogic_channel4.get
    }
  }
  var last_api_ports_unit2_saturationLogic_channel1: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_saturationLogic_channel1.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_saturationLogic_channel1.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_saturationLogic_channel1: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_saturationLogic_channel1_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_saturationLogic_channel1 = Some(value)
        return value
      case _ if last_api_ports_unit2_saturationLogic_channel1.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_saturationLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_saturationLogic_channel1.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_saturationLogic_channel1.get
    }
  }
  var last_api_ports_unit2_saturationLogic_channel2: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_saturationLogic_channel2.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_saturationLogic_channel2.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_saturationLogic_channel2: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_saturationLogic_channel2_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_saturationLogic_channel2 = Some(value)
        return value
      case _ if last_api_ports_unit2_saturationLogic_channel2.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_saturationLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_saturationLogic_channel2.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_saturationLogic_channel2.get
    }
  }
  var last_api_ports_unit2_saturationLogic_channel3: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_saturationLogic_channel3.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_saturationLogic_channel3.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_saturationLogic_channel3: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_saturationLogic_channel3_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_saturationLogic_channel3 = Some(value)
        return value
      case _ if last_api_ports_unit2_saturationLogic_channel3.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_saturationLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_saturationLogic_channel3.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_saturationLogic_channel3.get
    }
  }
  var last_api_ports_unit2_saturationLogic_channel4: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_unit2_saturationLogic_channel4.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_unit2_saturationLogic_channel4.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_unit2_saturationLogic_channel4: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_instrumentationMock_instrumentationMockThread.operational_api.ports_unit2_saturationLogic_channel4_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_unit2_saturationLogic_channel4 = Some(value)
        return value
      case _ if last_api_ports_unit2_saturationLogic_channel4.isEmpty =>
        assert(F, "No value found on outgoing data port ports_unit2_saturationLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_unit2_saturationLogic_channel4.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_unit2_saturationLogic_channel4.get
    }
  }
  var preStateContainer_wL: Option[InstrumentationMockThread_instrumentationMock_instrumentationMockThread_PreState_Container_PS] = None()

  def pre_initialise(): Unit = {
    // assume/require contracts cannot refer to incoming ports or
    // state variables so nothing to do here
  }

  def post_initialise(): Unit = {
    // block the component while its post-state values are retrieved
    val postStateContainer_wL =
      InstrumentationMockThread_instrumentationMock_instrumentationMockThread_PostState_Container_PS(
        api_ports_unit1_pressureLogic_channel1 = get_api_ports_unit1_pressureLogic_channel1,
        api_ports_unit1_pressureLogic_channel2 = get_api_ports_unit1_pressureLogic_channel2,
        api_ports_unit1_pressureLogic_channel3 = get_api_ports_unit1_pressureLogic_channel3,
        api_ports_unit1_pressureLogic_channel4 = get_api_ports_unit1_pressureLogic_channel4,
        api_ports_unit1_saturationLogic_channel1 = get_api_ports_unit1_saturationLogic_channel1,
        api_ports_unit1_saturationLogic_channel2 = get_api_ports_unit1_saturationLogic_channel2,
        api_ports_unit1_saturationLogic_channel3 = get_api_ports_unit1_saturationLogic_channel3,
        api_ports_unit1_saturationLogic_channel4 = get_api_ports_unit1_saturationLogic_channel4,
        api_ports_unit1_temperatureLogic_channel1 = get_api_ports_unit1_temperatureLogic_channel1,
        api_ports_unit1_temperatureLogic_channel2 = get_api_ports_unit1_temperatureLogic_channel2,
        api_ports_unit1_temperatureLogic_channel3 = get_api_ports_unit1_temperatureLogic_channel3,
        api_ports_unit1_temperatureLogic_channel4 = get_api_ports_unit1_temperatureLogic_channel4,
        api_ports_unit2_pressureLogic_channel1 = get_api_ports_unit2_pressureLogic_channel1,
        api_ports_unit2_pressureLogic_channel2 = get_api_ports_unit2_pressureLogic_channel2,
        api_ports_unit2_pressureLogic_channel3 = get_api_ports_unit2_pressureLogic_channel3,
        api_ports_unit2_pressureLogic_channel4 = get_api_ports_unit2_pressureLogic_channel4,
        api_ports_unit2_saturationLogic_channel1 = get_api_ports_unit2_saturationLogic_channel1,
        api_ports_unit2_saturationLogic_channel2 = get_api_ports_unit2_saturationLogic_channel2,
        api_ports_unit2_saturationLogic_channel3 = get_api_ports_unit2_saturationLogic_channel3,
        api_ports_unit2_saturationLogic_channel4 = get_api_ports_unit2_saturationLogic_channel4,
        api_ports_unit2_temperatureLogic_channel1 = get_api_ports_unit2_temperatureLogic_channel1,
        api_ports_unit2_temperatureLogic_channel2 = get_api_ports_unit2_temperatureLogic_channel2,
        api_ports_unit2_temperatureLogic_channel3 = get_api_ports_unit2_temperatureLogic_channel3,
        api_ports_unit2_temperatureLogic_channel4 = get_api_ports_unit2_temperatureLogic_channel4)

    // the rest can now be performed via a different thread
    RTS.runtimemonitor.RuntimeMonitor.observeInitialisePostState(Arch.rts_instrumentationMock_instrumentationMockThread.id, RTS.runtimemonitor.ObservationKind.rts_instrumentationMock_instrumentationMockThread_postInit, postStateContainer_wL)
  }

  def pre_compute(): Unit = {
    // block the component while its pre-state values are retrieved
    preStateContainer_wL = Some(
      InstrumentationMockThread_instrumentationMock_instrumentationMockThread_PreState_Container_PS())

    // the rest can now be performed via a different thread
    RTS.runtimemonitor.RuntimeMonitor.observeComputePreState(Arch.rts_instrumentationMock_instrumentationMockThread.id, RTS.runtimemonitor.ObservationKind.rts_instrumentationMock_instrumentationMockThread_preCompute, preStateContainer_wL.asInstanceOf[Option[art.DataContent]])
  }

  def post_compute(): Unit = {
    // block the component while its post-state values are retrieved
    val postStateContainer_wL =
      InstrumentationMockThread_instrumentationMock_instrumentationMockThread_PostState_Container_PS(
        api_ports_unit1_pressureLogic_channel1 = get_api_ports_unit1_pressureLogic_channel1,
        api_ports_unit1_pressureLogic_channel2 = get_api_ports_unit1_pressureLogic_channel2,
        api_ports_unit1_pressureLogic_channel3 = get_api_ports_unit1_pressureLogic_channel3,
        api_ports_unit1_pressureLogic_channel4 = get_api_ports_unit1_pressureLogic_channel4,
        api_ports_unit1_saturationLogic_channel1 = get_api_ports_unit1_saturationLogic_channel1,
        api_ports_unit1_saturationLogic_channel2 = get_api_ports_unit1_saturationLogic_channel2,
        api_ports_unit1_saturationLogic_channel3 = get_api_ports_unit1_saturationLogic_channel3,
        api_ports_unit1_saturationLogic_channel4 = get_api_ports_unit1_saturationLogic_channel4,
        api_ports_unit1_temperatureLogic_channel1 = get_api_ports_unit1_temperatureLogic_channel1,
        api_ports_unit1_temperatureLogic_channel2 = get_api_ports_unit1_temperatureLogic_channel2,
        api_ports_unit1_temperatureLogic_channel3 = get_api_ports_unit1_temperatureLogic_channel3,
        api_ports_unit1_temperatureLogic_channel4 = get_api_ports_unit1_temperatureLogic_channel4,
        api_ports_unit2_pressureLogic_channel1 = get_api_ports_unit2_pressureLogic_channel1,
        api_ports_unit2_pressureLogic_channel2 = get_api_ports_unit2_pressureLogic_channel2,
        api_ports_unit2_pressureLogic_channel3 = get_api_ports_unit2_pressureLogic_channel3,
        api_ports_unit2_pressureLogic_channel4 = get_api_ports_unit2_pressureLogic_channel4,
        api_ports_unit2_saturationLogic_channel1 = get_api_ports_unit2_saturationLogic_channel1,
        api_ports_unit2_saturationLogic_channel2 = get_api_ports_unit2_saturationLogic_channel2,
        api_ports_unit2_saturationLogic_channel3 = get_api_ports_unit2_saturationLogic_channel3,
        api_ports_unit2_saturationLogic_channel4 = get_api_ports_unit2_saturationLogic_channel4,
        api_ports_unit2_temperatureLogic_channel1 = get_api_ports_unit2_temperatureLogic_channel1,
        api_ports_unit2_temperatureLogic_channel2 = get_api_ports_unit2_temperatureLogic_channel2,
        api_ports_unit2_temperatureLogic_channel3 = get_api_ports_unit2_temperatureLogic_channel3,
        api_ports_unit2_temperatureLogic_channel4 = get_api_ports_unit2_temperatureLogic_channel4)

    // the rest can now be performed via a different thread
    RTS.runtimemonitor.RuntimeMonitor.observeComputePrePostState(Arch.rts_instrumentationMock_instrumentationMockThread.id, RTS.runtimemonitor.ObservationKind.rts_instrumentationMock_instrumentationMockThread_postCompute, preStateContainer_wL.asInstanceOf[Option[art.DataContent]], postStateContainer_wL)
  }
}