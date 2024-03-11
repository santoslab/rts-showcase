package RTS {
	
	import Actuation::*;
	import Actuators::*;
	import EventControl::*;
	import Instrumentation::*;
	import AADL_Definitions::*;
	
	part rts : RTS : System;
	
	part def RTS :> System {
		part actuationSubsystem: Actuation::RTSActuation;
		part instrumentationMock: Instrumentation::InstrumentationMockProcess;
		part eventControlMock: EventControl::EventControlMockProcess;
		part actuatorsMock: Actuators::ActuatorsMockProcess;
		
		// actuation unit 1 
		connection u1TLc1 connect rts.instrumentationMock.ports.unit1_temperatureLogic_channel1 to actuationSubsystem.ports.unit1_temperatureLogic_channel1;
		connection u1TLc2 connect instrumentationMock.ports.unit1_temperatureLogic_channel2 to actuationSubsystem.ports.unit1_temperatureLogic_channel2;
		connection u1TLc3 connect instrumentationMock.ports.unit1_temperatureLogic_channel3 to actuationSubsystem.ports.unit1_temperatureLogic_channel3;
		connection u1TLc4 connect instrumentationMock.ports.unit1_temperatureLogic_channel4 to actuationSubsystem.ports.unit1_temperatureLogic_channel4;
		connection u1PLc1 connect instrumentationMock.ports.unit1_pressureLogic_channel1 to actuationSubsystem.ports.unit1_pressureLogic_channel1;
		connection u1PLc2 connect instrumentationMock.ports.unit1_pressureLogic_channel2 to actuationSubsystem.ports.unit1_pressureLogic_channel2;
		connection u1PLc3 connect instrumentationMock.ports.unit1_pressureLogic_channel3 to actuationSubsystem.ports.unit1_pressureLogic_channel3;
		connection u1PLc4 connect instrumentationMock.ports.unit1_pressureLogic_channel4 to actuationSubsystem.ports.unit1_pressureLogic_channel4;
		connection u1SLc1 connect instrumentationMock.ports.unit1_saturationLogic_channel1 to actuationSubsystem.ports.unit1_saturationLogic_channel1;
		connection u1SLc2 connect instrumentationMock.ports.unit1_saturationLogic_channel2 to actuationSubsystem.ports.unit1_saturationLogic_channel2;
		connection u1SLc3 connect instrumentationMock.ports.unit1_saturationLogic_channel3 to actuationSubsystem.ports.unit1_saturationLogic_channel3;
		connection u1SLc4 connect instrumentationMock.ports.unit1_saturationLogic_channel4 to actuationSubsystem.ports.unit1_saturationLogic_channel4;
		// actuation unit 2
		connection u2TLc1 connect instrumentationMock.ports.unit2_temperatureLogic_channel1 to actuationSubsystem.ports.unit2_temperatureLogic_channel1;
		connection u2TLc2 connect instrumentationMock.ports.unit2_temperatureLogic_channel2 to actuationSubsystem.ports.unit2_temperatureLogic_channel2;
		connection u2TLc3 connect instrumentationMock.ports.unit2_temperatureLogic_channel3 to actuationSubsystem.ports.unit2_temperatureLogic_channel3;
		connection u2TLc4 connect instrumentationMock.ports.unit2_temperatureLogic_channel4 to actuationSubsystem.ports.unit2_temperatureLogic_channel4;
		connection u2PLc1 connect instrumentationMock.ports.unit2_pressureLogic_channel1 to actuationSubsystem.ports.unit2_pressureLogic_channel1;
		connection u2PLc2 connect instrumentationMock.ports.unit2_pressureLogic_channel2 to actuationSubsystem.ports.unit2_pressureLogic_channel2;
		connection u2PLc3 connect instrumentationMock.ports.unit2_pressureLogic_channel3 to actuationSubsystem.ports.unit2_pressureLogic_channel3;
		connection u2PLc4 connect instrumentationMock.ports.unit2_pressureLogic_channel4 to actuationSubsystem.ports.unit2_pressureLogic_channel4;
		connection u2SLc1 connect instrumentationMock.ports.unit2_saturationLogic_channel1 to actuationSubsystem.ports.unit2_saturationLogic_channel1;
		connection u2SLc2 connect instrumentationMock.ports.unit2_saturationLogic_channel2 to actuationSubsystem.ports.unit2_saturationLogic_channel2;
		connection u2SLc3 connect instrumentationMock.ports.unit2_saturationLogic_channel3 to actuationSubsystem.ports.unit2_saturationLogic_channel3;
		connection u2SLc4 connect instrumentationMock.ports.unit2_saturationLogic_channel4 to actuationSubsystem.ports.unit2_saturationLogic_channel4;
		// Manual Trip signals
		connection mAI12tpMI connect eventControlMock.ports.manualActuatorInput1 to actuationSubsystem.ports.tempPressureManualInput;
		connection mAI22sMI connect eventControlMock.ports.manualActuatorInput2 to actuationSubsystem.ports.saturationManualInput;
		// Actuator Output
		connection foo1 connect actuationSubsystem.ports.tempPressureOutput to actuatorsMock.ports.tempPressureActuate;
		connection foo2 connect actuationSubsystem.ports.saturationOutput to actuatorsMock.ports.saturationActuate;
		
		// connection instances (note c0's source is a non composite part usage)
		connection c0 connect rts.actuationSubsystem.actuationUnit1.temperatureLogic.coincidenceLogic.ports.actuate to actuationSubsystem.actuationUnit1.tempPressureTripOut.orLogic.ports.channel1;
		connection c1 connect actuationSubsystem.actuationUnit1.pressureLogic.coincidenceLogic.ports.actuate to actuationSubsystem.actuationUnit1.tempPressureTripOut.orLogic.ports.channel2;
		connection c2 connect actuationSubsystem.actuationUnit2.temperatureLogic.coincidenceLogic.ports.actuate to actuationSubsystem.actuationUnit2.tempPressureTripOut.orLogic.ports.channel1;
		connection c3 connect actuationSubsystem.actuationUnit2.pressureLogic.coincidenceLogic.ports.actuate to actuationSubsystem.actuationUnit2.tempPressureTripOut.orLogic.ports.channel2;
		connection c4 connect actuationSubsystem.tempPressureActuatorUnit.actuateTempPressureActuator.orLogic.ports.actuate to actuationSubsystem.tempPressureActuatorUnit.tempPressureActuator.actuator.ports.input;
		connection c5 connect actuationSubsystem.saturationActuatorUnit.actuateSaturationActuator.orLogic.ports.actuate to actuationSubsystem.saturationActuatorUnit.saturationActuator.actuator.ports.input;
		connection c6 connect actuationSubsystem.actuationUnit1.saturationLogic.coincidenceLogic.ports.actuate to actuationSubsystem.saturationActuatorUnit.actuateSaturationActuator.orLogic.ports.channel1;
		connection c7 connect actuationSubsystem.actuationUnit1.tempPressureTripOut.orLogic.ports.actuate to actuationSubsystem.tempPressureActuatorUnit.actuateTempPressureActuator.orLogic.ports.channel1;
		connection c8 connect actuationSubsystem.actuationUnit2.saturationLogic.coincidenceLogic.ports.actuate to actuationSubsystem.saturationActuatorUnit.actuateSaturationActuator.orLogic.ports.channel2;
		connection c9 connect actuationSubsystem.actuationUnit2.tempPressureTripOut.orLogic.ports.actuate to actuationSubsystem.tempPressureActuatorUnit.actuateTempPressureActuator.orLogic.ports.channel2;
		connection c10 connect instrumentationMock.instrumentationMockThread.ports.unit1_temperatureLogic_channel1 to actuationSubsystem.actuationUnit1.temperatureLogic.coincidenceLogic.ports.channel1;
		connection c11 connect instrumentationMock.instrumentationMockThread.ports.unit1_temperatureLogic_channel2 to actuationSubsystem.actuationUnit1.temperatureLogic.coincidenceLogic.ports.channel2;
		connection c12 connect instrumentationMock.instrumentationMockThread.ports.unit1_temperatureLogic_channel3 to actuationSubsystem.actuationUnit1.temperatureLogic.coincidenceLogic.ports.channel3;
		connection c13 connect instrumentationMock.instrumentationMockThread.ports.unit1_temperatureLogic_channel4 to actuationSubsystem.actuationUnit1.temperatureLogic.coincidenceLogic.ports.channel4;
		connection c14 connect instrumentationMock.instrumentationMockThread.ports.unit1_pressureLogic_channel1 to actuationSubsystem.actuationUnit1.pressureLogic.coincidenceLogic.ports.channel1;
		connection c15 connect instrumentationMock.instrumentationMockThread.ports.unit1_pressureLogic_channel2 to actuationSubsystem.actuationUnit1.pressureLogic.coincidenceLogic.ports.channel2;
		connection c16 connect instrumentationMock.instrumentationMockThread.ports.unit1_pressureLogic_channel3 to actuationSubsystem.actuationUnit1.pressureLogic.coincidenceLogic.ports.channel3;
		connection c17 connect instrumentationMock.instrumentationMockThread.ports.unit1_pressureLogic_channel4 to actuationSubsystem.actuationUnit1.pressureLogic.coincidenceLogic.ports.channel4;
		connection c18 connect instrumentationMock.instrumentationMockThread.ports.unit1_saturationLogic_channel1 to actuationSubsystem.actuationUnit1.saturationLogic.coincidenceLogic.ports.channel1;
		connection c19 connect instrumentationMock.instrumentationMockThread.ports.unit1_saturationLogic_channel2 to actuationSubsystem.actuationUnit1.saturationLogic.coincidenceLogic.ports.channel2;
		connection c20 connect instrumentationMock.instrumentationMockThread.ports.unit1_saturationLogic_channel3 to actuationSubsystem.actuationUnit1.saturationLogic.coincidenceLogic.ports.channel3;
		connection c21 connect instrumentationMock.instrumentationMockThread.ports.unit1_saturationLogic_channel4 to actuationSubsystem.actuationUnit1.saturationLogic.coincidenceLogic.ports.channel4;
		connection c22 connect instrumentationMock.instrumentationMockThread.ports.unit2_temperatureLogic_channel1 to actuationSubsystem.actuationUnit2.temperatureLogic.coincidenceLogic.ports.channel1;
		connection c23 connect instrumentationMock.instrumentationMockThread.ports.unit2_temperatureLogic_channel2 to actuationSubsystem.actuationUnit2.temperatureLogic.coincidenceLogic.ports.channel2;
		connection c24 connect instrumentationMock.instrumentationMockThread.ports.unit2_temperatureLogic_channel3 to actuationSubsystem.actuationUnit2.temperatureLogic.coincidenceLogic.ports.channel3;
		connection c25 connect instrumentationMock.instrumentationMockThread.ports.unit2_temperatureLogic_channel4 to actuationSubsystem.actuationUnit2.temperatureLogic.coincidenceLogic.ports.channel4;
		connection c26 connect instrumentationMock.instrumentationMockThread.ports.unit2_pressureLogic_channel1 to actuationSubsystem.actuationUnit2.pressureLogic.coincidenceLogic.ports.channel1;
		connection c27 connect instrumentationMock.instrumentationMockThread.ports.unit2_pressureLogic_channel2 to actuationSubsystem.actuationUnit2.pressureLogic.coincidenceLogic.ports.channel2;
		connection c28 connect instrumentationMock.instrumentationMockThread.ports.unit2_pressureLogic_channel3 to actuationSubsystem.actuationUnit2.pressureLogic.coincidenceLogic.ports.channel3;
		connection c29 connect instrumentationMock.instrumentationMockThread.ports.unit2_pressureLogic_channel4 to actuationSubsystem.actuationUnit2.pressureLogic.coincidenceLogic.ports.channel4;
		connection c30 connect instrumentationMock.instrumentationMockThread.ports.unit2_saturationLogic_channel1 to actuationSubsystem.actuationUnit2.saturationLogic.coincidenceLogic.ports.channel1;
		connection c31 connect instrumentationMock.instrumentationMockThread.ports.unit2_saturationLogic_channel2 to actuationSubsystem.actuationUnit2.saturationLogic.coincidenceLogic.ports.channel2;
		connection c32 connect instrumentationMock.instrumentationMockThread.ports.unit2_saturationLogic_channel3 to actuationSubsystem.actuationUnit2.saturationLogic.coincidenceLogic.ports.channel3;
		connection c33 connect instrumentationMock.instrumentationMockThread.ports.unit2_saturationLogic_channel4 to actuationSubsystem.actuationUnit2.saturationLogic.coincidenceLogic.ports.channel4;
		connection c34 connect eventControlMock.eventControlMockThread.ports.manualActuatorInput1 to actuationSubsystem.tempPressureActuatorUnit.tempPressureActuator.actuator.ports.manualActuatorInput;
		connection c35 connect eventControlMock.eventControlMockThread.ports.manualActuatorInput2 to actuationSubsystem.saturationActuatorUnit.saturationActuator.actuator.ports.manualActuatorInput;
		connection c36 connect actuationSubsystem.tempPressureActuatorUnit.tempPressureActuator.actuator.ports.output to actuatorsMock.actuatorsMockThread.ports.tempPressureActuate;
		connection c37 connect actuationSubsystem.saturationActuatorUnit.saturationActuator.actuator.ports.output to actuatorsMock.actuatorsMockThread.ports.saturationActuate;
	}
}