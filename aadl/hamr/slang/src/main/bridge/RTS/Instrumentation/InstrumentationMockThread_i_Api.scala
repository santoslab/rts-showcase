// #Sireum

package RTS.Instrumentation

import org.sireum._
import art._
import RTS._

@sig trait InstrumentationMockThread_i_Api {
  def id: Art.BridgeId
  def unit1_temperatureLogic_channel1_Id : Art.PortId
  def unit1_temperatureLogic_channel2_Id : Art.PortId
  def unit1_temperatureLogic_channel3_Id : Art.PortId
  def unit1_temperatureLogic_channel4_Id : Art.PortId
  def unit1_pressureLogic_channel1_Id : Art.PortId
  def unit1_pressureLogic_channel2_Id : Art.PortId
  def unit1_pressureLogic_channel3_Id : Art.PortId
  def unit1_pressureLogic_channel4_Id : Art.PortId
  def unit1_saturationLogic_channel1_Id : Art.PortId
  def unit1_saturationLogic_channel2_Id : Art.PortId
  def unit1_saturationLogic_channel3_Id : Art.PortId
  def unit1_saturationLogic_channel4_Id : Art.PortId
  def unit2_temperatureLogic_channel1_Id : Art.PortId
  def unit2_temperatureLogic_channel2_Id : Art.PortId
  def unit2_temperatureLogic_channel3_Id : Art.PortId
  def unit2_temperatureLogic_channel4_Id : Art.PortId
  def unit2_pressureLogic_channel1_Id : Art.PortId
  def unit2_pressureLogic_channel2_Id : Art.PortId
  def unit2_pressureLogic_channel3_Id : Art.PortId
  def unit2_pressureLogic_channel4_Id : Art.PortId
  def unit2_saturationLogic_channel1_Id : Art.PortId
  def unit2_saturationLogic_channel2_Id : Art.PortId
  def unit2_saturationLogic_channel3_Id : Art.PortId
  def unit2_saturationLogic_channel4_Id : Art.PortId

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_temperatureLogic_channel1: Base_Types.Boolean = $

  def put_unit1_temperatureLogic_channel1(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_temperatureLogic_channel1),
      Ensures(
        unit1_temperatureLogic_channel1 == value
      )
    )
    Spec {
      unit1_temperatureLogic_channel1 = value
    }

    Art.putValue(unit1_temperatureLogic_channel1_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_temperatureLogic_channel2: Base_Types.Boolean = $

  def put_unit1_temperatureLogic_channel2(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_temperatureLogic_channel2),
      Ensures(
        unit1_temperatureLogic_channel2 == value
      )
    )
    Spec {
      unit1_temperatureLogic_channel2 = value
    }

    Art.putValue(unit1_temperatureLogic_channel2_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_temperatureLogic_channel3: Base_Types.Boolean = $

  def put_unit1_temperatureLogic_channel3(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_temperatureLogic_channel3),
      Ensures(
        unit1_temperatureLogic_channel3 == value
      )
    )
    Spec {
      unit1_temperatureLogic_channel3 = value
    }

    Art.putValue(unit1_temperatureLogic_channel3_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_temperatureLogic_channel4: Base_Types.Boolean = $

  def put_unit1_temperatureLogic_channel4(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_temperatureLogic_channel4),
      Ensures(
        unit1_temperatureLogic_channel4 == value
      )
    )
    Spec {
      unit1_temperatureLogic_channel4 = value
    }

    Art.putValue(unit1_temperatureLogic_channel4_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_pressureLogic_channel1: Base_Types.Boolean = $

  def put_unit1_pressureLogic_channel1(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_pressureLogic_channel1),
      Ensures(
        unit1_pressureLogic_channel1 == value
      )
    )
    Spec {
      unit1_pressureLogic_channel1 = value
    }

    Art.putValue(unit1_pressureLogic_channel1_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_pressureLogic_channel2: Base_Types.Boolean = $

  def put_unit1_pressureLogic_channel2(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_pressureLogic_channel2),
      Ensures(
        unit1_pressureLogic_channel2 == value
      )
    )
    Spec {
      unit1_pressureLogic_channel2 = value
    }

    Art.putValue(unit1_pressureLogic_channel2_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_pressureLogic_channel3: Base_Types.Boolean = $

  def put_unit1_pressureLogic_channel3(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_pressureLogic_channel3),
      Ensures(
        unit1_pressureLogic_channel3 == value
      )
    )
    Spec {
      unit1_pressureLogic_channel3 = value
    }

    Art.putValue(unit1_pressureLogic_channel3_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_pressureLogic_channel4: Base_Types.Boolean = $

  def put_unit1_pressureLogic_channel4(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_pressureLogic_channel4),
      Ensures(
        unit1_pressureLogic_channel4 == value
      )
    )
    Spec {
      unit1_pressureLogic_channel4 = value
    }

    Art.putValue(unit1_pressureLogic_channel4_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_saturationLogic_channel1: Base_Types.Boolean = $

  def put_unit1_saturationLogic_channel1(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_saturationLogic_channel1),
      Ensures(
        unit1_saturationLogic_channel1 == value
      )
    )
    Spec {
      unit1_saturationLogic_channel1 = value
    }

    Art.putValue(unit1_saturationLogic_channel1_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_saturationLogic_channel2: Base_Types.Boolean = $

  def put_unit1_saturationLogic_channel2(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_saturationLogic_channel2),
      Ensures(
        unit1_saturationLogic_channel2 == value
      )
    )
    Spec {
      unit1_saturationLogic_channel2 = value
    }

    Art.putValue(unit1_saturationLogic_channel2_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_saturationLogic_channel3: Base_Types.Boolean = $

  def put_unit1_saturationLogic_channel3(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_saturationLogic_channel3),
      Ensures(
        unit1_saturationLogic_channel3 == value
      )
    )
    Spec {
      unit1_saturationLogic_channel3 = value
    }

    Art.putValue(unit1_saturationLogic_channel3_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit1_saturationLogic_channel4: Base_Types.Boolean = $

  def put_unit1_saturationLogic_channel4(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit1_saturationLogic_channel4),
      Ensures(
        unit1_saturationLogic_channel4 == value
      )
    )
    Spec {
      unit1_saturationLogic_channel4 = value
    }

    Art.putValue(unit1_saturationLogic_channel4_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_temperatureLogic_channel1: Base_Types.Boolean = $

  def put_unit2_temperatureLogic_channel1(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_temperatureLogic_channel1),
      Ensures(
        unit2_temperatureLogic_channel1 == value
      )
    )
    Spec {
      unit2_temperatureLogic_channel1 = value
    }

    Art.putValue(unit2_temperatureLogic_channel1_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_temperatureLogic_channel2: Base_Types.Boolean = $

  def put_unit2_temperatureLogic_channel2(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_temperatureLogic_channel2),
      Ensures(
        unit2_temperatureLogic_channel2 == value
      )
    )
    Spec {
      unit2_temperatureLogic_channel2 = value
    }

    Art.putValue(unit2_temperatureLogic_channel2_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_temperatureLogic_channel3: Base_Types.Boolean = $

  def put_unit2_temperatureLogic_channel3(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_temperatureLogic_channel3),
      Ensures(
        unit2_temperatureLogic_channel3 == value
      )
    )
    Spec {
      unit2_temperatureLogic_channel3 = value
    }

    Art.putValue(unit2_temperatureLogic_channel3_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_temperatureLogic_channel4: Base_Types.Boolean = $

  def put_unit2_temperatureLogic_channel4(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_temperatureLogic_channel4),
      Ensures(
        unit2_temperatureLogic_channel4 == value
      )
    )
    Spec {
      unit2_temperatureLogic_channel4 = value
    }

    Art.putValue(unit2_temperatureLogic_channel4_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_pressureLogic_channel1: Base_Types.Boolean = $

  def put_unit2_pressureLogic_channel1(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_pressureLogic_channel1),
      Ensures(
        unit2_pressureLogic_channel1 == value
      )
    )
    Spec {
      unit2_pressureLogic_channel1 = value
    }

    Art.putValue(unit2_pressureLogic_channel1_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_pressureLogic_channel2: Base_Types.Boolean = $

  def put_unit2_pressureLogic_channel2(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_pressureLogic_channel2),
      Ensures(
        unit2_pressureLogic_channel2 == value
      )
    )
    Spec {
      unit2_pressureLogic_channel2 = value
    }

    Art.putValue(unit2_pressureLogic_channel2_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_pressureLogic_channel3: Base_Types.Boolean = $

  def put_unit2_pressureLogic_channel3(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_pressureLogic_channel3),
      Ensures(
        unit2_pressureLogic_channel3 == value
      )
    )
    Spec {
      unit2_pressureLogic_channel3 = value
    }

    Art.putValue(unit2_pressureLogic_channel3_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_pressureLogic_channel4: Base_Types.Boolean = $

  def put_unit2_pressureLogic_channel4(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_pressureLogic_channel4),
      Ensures(
        unit2_pressureLogic_channel4 == value
      )
    )
    Spec {
      unit2_pressureLogic_channel4 = value
    }

    Art.putValue(unit2_pressureLogic_channel4_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_saturationLogic_channel1: Base_Types.Boolean = $

  def put_unit2_saturationLogic_channel1(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_saturationLogic_channel1),
      Ensures(
        unit2_saturationLogic_channel1 == value
      )
    )
    Spec {
      unit2_saturationLogic_channel1 = value
    }

    Art.putValue(unit2_saturationLogic_channel1_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_saturationLogic_channel2: Base_Types.Boolean = $

  def put_unit2_saturationLogic_channel2(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_saturationLogic_channel2),
      Ensures(
        unit2_saturationLogic_channel2 == value
      )
    )
    Spec {
      unit2_saturationLogic_channel2 = value
    }

    Art.putValue(unit2_saturationLogic_channel2_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_saturationLogic_channel3: Base_Types.Boolean = $

  def put_unit2_saturationLogic_channel3(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_saturationLogic_channel3),
      Ensures(
        unit2_saturationLogic_channel3 == value
      )
    )
    Spec {
      unit2_saturationLogic_channel3 = value
    }

    Art.putValue(unit2_saturationLogic_channel3_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var unit2_saturationLogic_channel4: Base_Types.Boolean = $

  def put_unit2_saturationLogic_channel4(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(unit2_saturationLogic_channel4),
      Ensures(
        unit2_saturationLogic_channel4 == value
      )
    )
    Spec {
      unit2_saturationLogic_channel4 = value
    }

    Art.putValue(unit2_saturationLogic_channel4_Id, Base_Types.Boolean_Payload(value))
  }

  def logInfo(msg: String): Unit = {
    Art.logInfo(id, msg)
  }

  def logDebug(msg: String): Unit = {
    Art.logDebug(id, msg)
  }

  def logError(msg: String): Unit = {
    Art.logError(id, msg)
  }
}

@datatype class InstrumentationMockThread_i_Initialization_Api (
  val id: Art.BridgeId,
  val unit1_temperatureLogic_channel1_Id : Art.PortId,
  val unit1_temperatureLogic_channel2_Id : Art.PortId,
  val unit1_temperatureLogic_channel3_Id : Art.PortId,
  val unit1_temperatureLogic_channel4_Id : Art.PortId,
  val unit1_pressureLogic_channel1_Id : Art.PortId,
  val unit1_pressureLogic_channel2_Id : Art.PortId,
  val unit1_pressureLogic_channel3_Id : Art.PortId,
  val unit1_pressureLogic_channel4_Id : Art.PortId,
  val unit1_saturationLogic_channel1_Id : Art.PortId,
  val unit1_saturationLogic_channel2_Id : Art.PortId,
  val unit1_saturationLogic_channel3_Id : Art.PortId,
  val unit1_saturationLogic_channel4_Id : Art.PortId,
  val unit2_temperatureLogic_channel1_Id : Art.PortId,
  val unit2_temperatureLogic_channel2_Id : Art.PortId,
  val unit2_temperatureLogic_channel3_Id : Art.PortId,
  val unit2_temperatureLogic_channel4_Id : Art.PortId,
  val unit2_pressureLogic_channel1_Id : Art.PortId,
  val unit2_pressureLogic_channel2_Id : Art.PortId,
  val unit2_pressureLogic_channel3_Id : Art.PortId,
  val unit2_pressureLogic_channel4_Id : Art.PortId,
  val unit2_saturationLogic_channel1_Id : Art.PortId,
  val unit2_saturationLogic_channel2_Id : Art.PortId,
  val unit2_saturationLogic_channel3_Id : Art.PortId,
  val unit2_saturationLogic_channel4_Id : Art.PortId) extends InstrumentationMockThread_i_Api

@datatype class InstrumentationMockThread_i_Operational_Api (
  val id: Art.BridgeId,
  val unit1_temperatureLogic_channel1_Id : Art.PortId,
  val unit1_temperatureLogic_channel2_Id : Art.PortId,
  val unit1_temperatureLogic_channel3_Id : Art.PortId,
  val unit1_temperatureLogic_channel4_Id : Art.PortId,
  val unit1_pressureLogic_channel1_Id : Art.PortId,
  val unit1_pressureLogic_channel2_Id : Art.PortId,
  val unit1_pressureLogic_channel3_Id : Art.PortId,
  val unit1_pressureLogic_channel4_Id : Art.PortId,
  val unit1_saturationLogic_channel1_Id : Art.PortId,
  val unit1_saturationLogic_channel2_Id : Art.PortId,
  val unit1_saturationLogic_channel3_Id : Art.PortId,
  val unit1_saturationLogic_channel4_Id : Art.PortId,
  val unit2_temperatureLogic_channel1_Id : Art.PortId,
  val unit2_temperatureLogic_channel2_Id : Art.PortId,
  val unit2_temperatureLogic_channel3_Id : Art.PortId,
  val unit2_temperatureLogic_channel4_Id : Art.PortId,
  val unit2_pressureLogic_channel1_Id : Art.PortId,
  val unit2_pressureLogic_channel2_Id : Art.PortId,
  val unit2_pressureLogic_channel3_Id : Art.PortId,
  val unit2_pressureLogic_channel4_Id : Art.PortId,
  val unit2_saturationLogic_channel1_Id : Art.PortId,
  val unit2_saturationLogic_channel2_Id : Art.PortId,
  val unit2_saturationLogic_channel3_Id : Art.PortId,
  val unit2_saturationLogic_channel4_Id : Art.PortId) extends InstrumentationMockThread_i_Api {

}
