package RTS

import org.sireum._
import art.Art
import art.scheduling.static._

// This file will not be overwritten so is safe to edit

class SystemTests extends SystemTestSuite {

  // note: this is overriding SystemTestSuite's 'def scheduler: Scheduler'
  //       abstract method
  var scheduler: StaticScheduler = Schedulers.getStaticSchedulerH(MNone())

  def compute(isz: ISZ[Command]): Unit = {
    scheduler = scheduler(commandProvider = ISZCommandProvider(isz :+ Stop()))

    Art.computePhase(scheduler)
  }

  // Suggestion: add the following import renamings of the components' SystemTestAPIs,
  //             replacing nickname with shortened versions that are easier to reference
  // import RTS.Instrumentation.{InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_SystemTestAPI => nickname}
  // import RTS.EventControl.{EventControlMockThread_i_eventControlMock_eventControlMockThread_SystemTestAPI => nickname}
  // import RTS.Actuators.{ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_SystemTestAPI => nickname}
  // import RTS.Actuation.{CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_SystemTestAPI => nickname}
  // import RTS.Actuation.{CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_SystemTestAPI => nickname}
  // import RTS.Actuation.{CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_SystemTestAPI => nickname}
  // import RTS.Actuation.{OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_SystemTestAPI => nickname}
  // import RTS.Actuation.{CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_SystemTestAPI => nickname}
  // import RTS.Actuation.{CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_SystemTestAPI => nickname}
  // import RTS.Actuation.{CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_SystemTestAPI => nickname}
  // import RTS.Actuation.{OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_SystemTestAPI => nickname}
  // import RTS.Actuation.{OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_SystemTestAPI => nickname}
  // import RTS.Actuation.{Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_SystemTestAPI => nickname}
  // import RTS.Actuation.{OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_SystemTestAPI => nickname}
  // import RTS.Actuation.{Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_SystemTestAPI => nickname}

  test("Example system test") {
    // run the initialization phase
    Art.initializePhase(scheduler)

    // run components' compute entrypoints through one hyper-period
    compute(ISZ(Hstep(1)))

    // use the component SystemTestAPIs' put methods to change the prestate values for components
    // TODO

    // run another hyper-period
    compute(ISZ(Hstep(1)))

    // use the component SystemTestAPIs' check or get methods to check the poststate values for components
    // TODO
  }
}
