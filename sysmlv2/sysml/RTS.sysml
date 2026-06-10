//@ HAMR: --platform JVM --package-name RTS --runtime-monitoring --output-dir ../hamr
//@ HAMR: --platform Linux --package-name RTS --run-transpiler --max-string-size 250 --output-dir ../hamr
//@ HAMR: --platform seL4 --package-name RTS --run-transpiler --max-string-size 250 --output-dir ../hamr
package RTS {

	private import Actuation::*;
	private import Actuators::*;
	private import EventControl::*;
	private import Instrumentation::*;
	private import HAMR::*;

	part def RTS_i :> System {
		part instrumentationMock: Instrumentation::InstrumentationMockProcess_i;
		part eventControlMock: EventControl::EventControlMockProcess_i;
		part actuatorsMock: Actuators::ActuatorsMockProcess_i;
		part actuationSubsystem: Actuation::RTSActuation_i;
		part rts_processor: RTSProcessor_i;

		allocation pb0 : Deployment_Properties::Actual_Processor_Binding
			allocate instrumentationMock to rts_processor;
		allocation pb1 : Deployment_Properties::Actual_Processor_Binding
			allocate eventControlMock to rts_processor;
		allocation pb2 : Deployment_Properties::Actual_Processor_Binding
			allocate actuatorsMock to rts_processor;
		allocation pb3 : Deployment_Properties::Actual_Processor_Binding
			allocate actuationSubsystem to rts_processor;
		
		// actuation unit 1 
		connection u1TLc1 : PortConnection connect instrumentationMock.unit1_temperatureLogic_channel1 to actuationSubsystem.unit1_temperatureLogic_channel1;
		connection u1TLc2 : PortConnection connect instrumentationMock.unit1_temperatureLogic_channel2 to actuationSubsystem.unit1_temperatureLogic_channel2;
		connection u1TLc3 : PortConnection connect instrumentationMock.unit1_temperatureLogic_channel3 to actuationSubsystem.unit1_temperatureLogic_channel3;
		connection u1TLc4 : PortConnection connect instrumentationMock.unit1_temperatureLogic_channel4 to actuationSubsystem.unit1_temperatureLogic_channel4;
		connection u1PLc1 : PortConnection connect instrumentationMock.unit1_pressureLogic_channel1 to actuationSubsystem.unit1_pressureLogic_channel1;
		connection u1PLc2 : PortConnection connect instrumentationMock.unit1_pressureLogic_channel2 to actuationSubsystem.unit1_pressureLogic_channel2;
		connection u1PLc3 : PortConnection connect instrumentationMock.unit1_pressureLogic_channel3 to actuationSubsystem.unit1_pressureLogic_channel3;
		connection u1PLc4 : PortConnection connect instrumentationMock.unit1_pressureLogic_channel4 to actuationSubsystem.unit1_pressureLogic_channel4;
		connection u1SLc1 : PortConnection connect instrumentationMock.unit1_saturationLogic_channel1 to actuationSubsystem.unit1_saturationLogic_channel1;
		connection u1SLc2 : PortConnection connect instrumentationMock.unit1_saturationLogic_channel2 to actuationSubsystem.unit1_saturationLogic_channel2;
		connection u1SLc3 : PortConnection connect instrumentationMock.unit1_saturationLogic_channel3 to actuationSubsystem.unit1_saturationLogic_channel3;
		connection u1SLc4 : PortConnection connect instrumentationMock.unit1_saturationLogic_channel4 to actuationSubsystem.unit1_saturationLogic_channel4;
		// actuation unit 2
		connection u2TLc1 : PortConnection connect instrumentationMock.unit2_temperatureLogic_channel1 to actuationSubsystem.unit2_temperatureLogic_channel1;
		connection u2TLc2 : PortConnection connect instrumentationMock.unit2_temperatureLogic_channel2 to actuationSubsystem.unit2_temperatureLogic_channel2;
		connection u2TLc3 : PortConnection connect instrumentationMock.unit2_temperatureLogic_channel3 to actuationSubsystem.unit2_temperatureLogic_channel3;
		connection u2TLc4 : PortConnection connect instrumentationMock.unit2_temperatureLogic_channel4 to actuationSubsystem.unit2_temperatureLogic_channel4;
		connection u2PLc1 : PortConnection connect instrumentationMock.unit2_pressureLogic_channel1 to actuationSubsystem.unit2_pressureLogic_channel1;
		connection u2PLc2 : PortConnection connect instrumentationMock.unit2_pressureLogic_channel2 to actuationSubsystem.unit2_pressureLogic_channel2;
		connection u2PLc3 : PortConnection connect instrumentationMock.unit2_pressureLogic_channel3 to actuationSubsystem.unit2_pressureLogic_channel3;
		connection u2PLc4 : PortConnection connect instrumentationMock.unit2_pressureLogic_channel4 to actuationSubsystem.unit2_pressureLogic_channel4;
		connection u2SLc1 : PortConnection connect instrumentationMock.unit2_saturationLogic_channel1 to actuationSubsystem.unit2_saturationLogic_channel1;
		connection u2SLc2 : PortConnection connect instrumentationMock.unit2_saturationLogic_channel2 to actuationSubsystem.unit2_saturationLogic_channel2;
		connection u2SLc3 : PortConnection connect instrumentationMock.unit2_saturationLogic_channel3 to actuationSubsystem.unit2_saturationLogic_channel3;
		connection u2SLc4 : PortConnection connect instrumentationMock.unit2_saturationLogic_channel4 to actuationSubsystem.unit2_saturationLogic_channel4;
		// Manual Trip signals
		connection mAI12tpMI : PortConnection connect eventControlMock.manualActuatorInput1 to actuationSubsystem.tempPressureManualInput;
		connection mAI22sMI : PortConnection connect eventControlMock.manualActuatorInput2 to actuationSubsystem.saturationManualInput;
		// Actuator Output
		connection foo1 : PortConnection connect actuationSubsystem.tempPressureOutput to actuatorsMock.tempPressureActuate;
		connection foo2 : PortConnection connect actuationSubsystem.saturationOutput to actuatorsMock.saturationActuate;

		// alternative 'direct' connections between threads
		/*
		connection c0 : PortConnection connect actuationSubsystem.actuationUnit1.temperatureLogic.coincidenceLogic.actuate to actuationSubsystem.actuationUnit1.tempPressureTripOut.orLogic.channel1;
		connection c1 : PortConnection connect actuationSubsystem.actuationUnit1.pressureLogic.coincidenceLogic.actuate to actuationSubsystem.actuationUnit1.tempPressureTripOut.orLogic.channel2;
		connection c2 : PortConnection connect actuationSubsystem.actuationUnit2.temperatureLogic.coincidenceLogic.actuate to actuationSubsystem.actuationUnit2.tempPressureTripOut.orLogic.channel1;
		connection c3 : PortConnection connect actuationSubsystem.actuationUnit2.pressureLogic.coincidenceLogic.actuate to actuationSubsystem.actuationUnit2.tempPressureTripOut.orLogic.channel2;
		connection c4 : PortConnection connect actuationSubsystem.tempPressureActuatorUnit.actuateTempPressureActuator.orLogic.actuate to actuationSubsystem.tempPressureActuatorUnit.tempPressureActuator.actuator.input;
		connection c5 : PortConnection connect actuationSubsystem.saturationActuatorUnit.actuateSaturationActuator.orLogic.actuate to actuationSubsystem.saturationActuatorUnit.saturationActuator.actuator.input;
		connection c6 : PortConnection connect actuationSubsystem.actuationUnit1.saturationLogic.coincidenceLogic.actuate to actuationSubsystem.saturationActuatorUnit.actuateSaturationActuator.orLogic.channel1;
		connection c7 : PortConnection connect actuationSubsystem.actuationUnit1.tempPressureTripOut.orLogic.actuate to actuationSubsystem.tempPressureActuatorUnit.actuateTempPressureActuator.orLogic.channel1;
		connection c8 : PortConnection connect actuationSubsystem.actuationUnit2.saturationLogic.coincidenceLogic.actuate to actuationSubsystem.saturationActuatorUnit.actuateSaturationActuator.orLogic.channel2;
		connection c9 : PortConnection connect actuationSubsystem.actuationUnit2.tempPressureTripOut.orLogic.actuate to actuationSubsystem.tempPressureActuatorUnit.actuateTempPressureActuator.orLogic.channel2;
		connection c10 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_temperatureLogic_channel1 to actuationSubsystem.actuationUnit1.temperatureLogic.coincidenceLogic.channel1;
		connection c11 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_temperatureLogic_channel2 to actuationSubsystem.actuationUnit1.temperatureLogic.coincidenceLogic.channel2;
		connection c12 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_temperatureLogic_channel3 to actuationSubsystem.actuationUnit1.temperatureLogic.coincidenceLogic.channel3;
		connection c13 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_temperatureLogic_channel4 to actuationSubsystem.actuationUnit1.temperatureLogic.coincidenceLogic.channel4;
		connection c14 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_pressureLogic_channel1 to actuationSubsystem.actuationUnit1.pressureLogic.coincidenceLogic.channel1;
		connection c15 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_pressureLogic_channel2 to actuationSubsystem.actuationUnit1.pressureLogic.coincidenceLogic.channel2;
		connection c16 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_pressureLogic_channel3 to actuationSubsystem.actuationUnit1.pressureLogic.coincidenceLogic.channel3;
		connection c17 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_pressureLogic_channel4 to actuationSubsystem.actuationUnit1.pressureLogic.coincidenceLogic.channel4;
		connection c18 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_saturationLogic_channel1 to actuationSubsystem.actuationUnit1.saturationLogic.coincidenceLogic.channel1;
		connection c19 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_saturationLogic_channel2 to actuationSubsystem.actuationUnit1.saturationLogic.coincidenceLogic.channel2;
		connection c20 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_saturationLogic_channel3 to actuationSubsystem.actuationUnit1.saturationLogic.coincidenceLogic.channel3;
		connection c21 : PortConnection connect instrumentationMock.instrumentationMockThread.unit1_saturationLogic_channel4 to actuationSubsystem.actuationUnit1.saturationLogic.coincidenceLogic.channel4;
		connection c22 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_temperatureLogic_channel1 to actuationSubsystem.actuationUnit2.temperatureLogic.coincidenceLogic.channel1;
		connection c23 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_temperatureLogic_channel2 to actuationSubsystem.actuationUnit2.temperatureLogic.coincidenceLogic.channel2;
		connection c24 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_temperatureLogic_channel3 to actuationSubsystem.actuationUnit2.temperatureLogic.coincidenceLogic.channel3;
		connection c25 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_temperatureLogic_channel4 to actuationSubsystem.actuationUnit2.temperatureLogic.coincidenceLogic.channel4;
		connection c26 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_pressureLogic_channel1 to actuationSubsystem.actuationUnit2.pressureLogic.coincidenceLogic.channel1;
		connection c27 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_pressureLogic_channel2 to actuationSubsystem.actuationUnit2.pressureLogic.coincidenceLogic.channel2;
		connection c28 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_pressureLogic_channel3 to actuationSubsystem.actuationUnit2.pressureLogic.coincidenceLogic.channel3;
		connection c29 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_pressureLogic_channel4 to actuationSubsystem.actuationUnit2.pressureLogic.coincidenceLogic.channel4;
		connection c30 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_saturationLogic_channel1 to actuationSubsystem.actuationUnit2.saturationLogic.coincidenceLogic.channel1;
		connection c31 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_saturationLogic_channel2 to actuationSubsystem.actuationUnit2.saturationLogic.coincidenceLogic.channel2;
		connection c32 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_saturationLogic_channel3 to actuationSubsystem.actuationUnit2.saturationLogic.coincidenceLogic.channel3;
		connection c33 : PortConnection connect instrumentationMock.instrumentationMockThread.unit2_saturationLogic_channel4 to actuationSubsystem.actuationUnit2.saturationLogic.coincidenceLogic.channel4;
		connection c34 : PortConnection connect eventControlMock.eventControlMockThread.manualActuatorInput1 to actuationSubsystem.tempPressureActuatorUnit.tempPressureActuator.actuator.manualActuatorInput;
		connection c35 : PortConnection connect eventControlMock.eventControlMockThread.manualActuatorInput2 to actuationSubsystem.saturationActuatorUnit.saturationActuator.actuator.manualActuatorInput;
		connection c36 : PortConnection connect actuationSubsystem.tempPressureActuatorUnit.tempPressureActuator.actuator.output to actuatorsMock.actuatorsMockThread.tempPressureActuate;
		connection c37 : PortConnection connect actuationSubsystem.saturationActuatorUnit.saturationActuator.actuator.output to actuatorsMock.actuatorsMockThread.saturationActuate;
		*/
	}

	part def RTSProcessor_i :> Processor {
		attribute :>> Frame_Period = 1000 [ms];
		attribute :>> Clock_Period = 2 [ms];
		attribute :>> Max_Domain = 16;
	}

	part def Periodic_Thread :> Thread {
		attribute :>> Compute_Execution_Time = 10[ms] .. 10[ms];
		attribute :>> Dispatch_Protocol = Periodic;
		attribute :>> Period = 1000[ms];
	}
}