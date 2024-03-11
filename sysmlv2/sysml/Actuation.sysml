package Actuation {
	
	import AADL_Properties::*;
	import AADL_Definitions::*;
	
	part def RTSActuation :> System {
		part actuationUnit1 : ActuationLogicUnit : System;
		part actuationUnit2 : ActuationLogicUnit : System;
		part tempPressureActuatorUnit : TempPressureActuatorUnit : System;
		part saturationActuatorUnit : SaturationActuatorUnit : System;
		
		port ports {
			// actuation unit 1
			in unit1_temperatureLogic_channel1: Data: Base_Types::Boolean;
			in unit1_temperatureLogic_channel2: Data: Base_Types::Boolean;
			in unit1_temperatureLogic_channel3: Data: Base_Types::Boolean;
			in unit1_temperatureLogic_channel4: Data: Base_Types::Boolean;
			in unit1_pressureLogic_channel1: Data: Base_Types::Boolean;
			in unit1_pressureLogic_channel2: Data: Base_Types::Boolean;
			in unit1_pressureLogic_channel3: Data: Base_Types::Boolean;
			in unit1_pressureLogic_channel4: Data: Base_Types::Boolean;
			in unit1_saturationLogic_channel1: Data: Base_Types::Boolean;
			in unit1_saturationLogic_channel2: Data: Base_Types::Boolean;
			in unit1_saturationLogic_channel3: Data: Base_Types::Boolean;
			in unit1_saturationLogic_channel4: Data: Base_Types::Boolean;
			// actuation unit 2
			in unit2_temperatureLogic_channel1: Data: Base_Types::Boolean;
			in unit2_temperatureLogic_channel2: Data: Base_Types::Boolean;
			in unit2_temperatureLogic_channel3: Data: Base_Types::Boolean;
			in unit2_temperatureLogic_channel4: Data: Base_Types::Boolean;
			in unit2_pressureLogic_channel1: Data: Base_Types::Boolean;
			in unit2_pressureLogic_channel2: Data: Base_Types::Boolean;
			in unit2_pressureLogic_channel3: Data: Base_Types::Boolean;
			in unit2_pressureLogic_channel4: Data: Base_Types::Boolean;
			in unit2_saturationLogic_channel1: Data: Base_Types::Boolean;
			in unit2_saturationLogic_channel2: Data: Base_Types::Boolean;
			in unit2_saturationLogic_channel3: Data: Base_Types::Boolean;
			in unit2_saturationLogic_channel4: Data: Base_Types::Boolean;
			// manual controls
			in tempPressureManualInput: Data: Base_Types::Boolean;
			in saturationManualInput: Data: Base_Types::Boolean;
			// outputs
			out tempPressureOutput: Data: Base_Types::Boolean;
			out saturationOutput: Data: Base_Types::Boolean;
		}
		
		// actuation unit 1 
		connection u1TLc1 connect ports.unit1_temperatureLogic_channel1 to actuationUnit1.ports.temperatureLogic_channel1;
		connection u1TLc2 connect ports.unit1_temperatureLogic_channel2 to actuationUnit1.ports.temperatureLogic_channel2;
		connection u1TLc3 connect ports.unit1_temperatureLogic_channel3 to actuationUnit1.ports.temperatureLogic_channel3;
		connection u1TLc4 connect ports.unit1_temperatureLogic_channel4 to actuationUnit1.ports.temperatureLogic_channel4;
		connection u1PLc1 connect ports.unit1_pressureLogic_channel1 to actuationUnit1.ports.pressureLogic_channel1;
		connection u1PLc2 connect ports.unit1_pressureLogic_channel2 to actuationUnit1.ports.pressureLogic_channel2;
		connection u1PLc3 connect ports.unit1_pressureLogic_channel3 to actuationUnit1.ports.pressureLogic_channel3;
		connection u1PLc4 connect ports.unit1_pressureLogic_channel4 to actuationUnit1.ports.pressureLogic_channel4;
		connection u1SLc1 connect ports.unit1_saturationLogic_channel1 to actuationUnit1.ports.saturationLogic_channel1;
		connection u1SLc2 connect ports.unit1_saturationLogic_channel2 to actuationUnit1.ports.saturationLogic_channel2;
		connection u1SLc3 connect ports.unit1_saturationLogic_channel3 to actuationUnit1.ports.saturationLogic_channel3;
		connection u1SLc4 connect ports.unit1_saturationLogic_channel4 to actuationUnit1.ports.saturationLogic_channel4;
		// actuation unit 2 
		connection u2TLc1 connect ports.unit2_temperatureLogic_channel1 to actuationUnit2.ports.temperatureLogic_channel1;
		connection u2TLc2 connect ports.unit2_temperatureLogic_channel2 to actuationUnit2.ports.temperatureLogic_channel2;
		connection u2TLc3 connect ports.unit2_temperatureLogic_channel3 to actuationUnit2.ports.temperatureLogic_channel3;
		connection u2TLc4 connect ports.unit2_temperatureLogic_channel4 to actuationUnit2.ports.temperatureLogic_channel4;
		connection u2PLc1 connect ports.unit2_pressureLogic_channel1 to actuationUnit2.ports.pressureLogic_channel1;
		connection u2PLc2 connect ports.unit2_pressureLogic_channel2 to actuationUnit2.ports.pressureLogic_channel2;
		connection u2PLc3 connect ports.unit2_pressureLogic_channel3 to actuationUnit2.ports.pressureLogic_channel3;
		connection u2PLc4 connect ports.unit2_pressureLogic_channel4 to actuationUnit2.ports.pressureLogic_channel4;
		connection u2SLc1 connect ports.unit2_saturationLogic_channel1 to actuationUnit2.ports.saturationLogic_channel1;
		connection u2SLc2 connect ports.unit2_saturationLogic_channel2 to actuationUnit2.ports.saturationLogic_channel2;
		connection u2SLc3 connect ports.unit2_saturationLogic_channel3 to actuationUnit2.ports.saturationLogic_channel3;
		connection u2SLc4 connect ports.unit2_saturationLogic_channel4 to actuationUnit2.ports.saturationLogic_channel4;
		// manual controls
		connection tpMI connect ports.tempPressureManualInput to tempPressureActuatorUnit.ports.manualActuatorInput;
		connection sMI connect ports.saturationManualInput to saturationActuatorUnit.ports.manualActuatorInput;
		// internal connections
		connection tpTOa2tpAUc1 connect actuationUnit1.ports.tempPressureTripOut_actuate to tempPressureActuatorUnit.ports.channel1;
		connection sTOa2sAUc1 connect actuationUnit1.ports.saturationLogic_actuate to saturationActuatorUnit.ports.channel1;
		connection tpTOa2tpAUc2 connect actuationUnit2.ports.tempPressureTripOut_actuate to tempPressureActuatorUnit.ports.channel2;
		connection sTOa2sAUc2 connect actuationUnit2.ports.saturationLogic_actuate to saturationActuatorUnit.ports.channel2;
		// outputs
		connection tpO connect tempPressureActuatorUnit.ports.output to ports.tempPressureOutput;
		connection sO connect saturationActuatorUnit.ports.output to ports.saturationOutput;
	}
	
	part def ActuationLogicUnit :> System {
		part temperatureLogic : CoincidenceLogicPartition : Process;
		part pressureLogic : CoincidenceLogicPartition : Process;
		part saturationLogic : CoincidenceLogicPartition : Process;
		part tempPressureTripOut : OrLogicPartition : Process;
		
		port ports {
			in temperatureLogic_channel1: Data: Base_Types::Boolean;
			in temperatureLogic_channel2: Data: Base_Types::Boolean;
			in temperatureLogic_channel3: Data: Base_Types::Boolean;
			in temperatureLogic_channel4: Data: Base_Types::Boolean;
			in pressureLogic_channel1: Data: Base_Types::Boolean;
			in pressureLogic_channel2: Data: Base_Types::Boolean;
			in pressureLogic_channel3: Data: Base_Types::Boolean;
			in pressureLogic_channel4: Data: Base_Types::Boolean;
			in saturationLogic_channel1: Data: Base_Types::Boolean;
			in saturationLogic_channel2: Data: Base_Types::Boolean;
			in saturationLogic_channel3: Data: Base_Types::Boolean;
			in saturationLogic_channel4: Data: Base_Types::Boolean;
			out tempPressureTripOut_actuate: Data: Base_Types::Boolean;
			out saturationLogic_actuate: Data: Base_Types::Boolean;
		}
		
		connection tLc1 connect ports.temperatureLogic_channel1 to temperatureLogic.ports.channel1;
		connection tLc2 connect ports.temperatureLogic_channel2 to temperatureLogic.ports.channel2;
		connection tLc3 connect ports.temperatureLogic_channel3 to temperatureLogic.ports.channel3;
		connection tLc4 connect ports.temperatureLogic_channel4 to temperatureLogic.ports.channel4;
		connection pLc1 connect ports.pressureLogic_channel1 to pressureLogic.ports.channel1;
		connection pLc2 connect ports.pressureLogic_channel2 to pressureLogic.ports.channel2;
		connection pLc3 connect ports.pressureLogic_channel3 to pressureLogic.ports.channel3;
		connection pLc4 connect ports.pressureLogic_channel4 to pressureLogic.ports.channel4;
		connection sLc1 connect ports.saturationLogic_channel1 to saturationLogic.ports.channel1;
		connection sLc2 connect ports.saturationLogic_channel2 to saturationLogic.ports.channel2;
		connection sLc3 connect ports.saturationLogic_channel3 to saturationLogic.ports.channel3;
		connection sLc4 connect ports.saturationLogic_channel4 to saturationLogic.ports.channel4;
		connection tL2tPTO connect temperatureLogic.ports.actuate to tempPressureTripOut.ports.channel1;
		connection pL2tPTO connect pressureLogic.ports.actuate to tempPressureTripOut.ports.channel2;
		connection tPTOa connect tempPressureTripOut.ports.actuate to ports.tempPressureTripOut_actuate;
		connection sLa connect saturationLogic.ports.actuate to ports.saturationLogic_actuate;
	}
	
	part def TempPressureActuatorUnit :> System {
		part actuateTempPressureActuator : OrLogicPartition : Process;
		part tempPressureActuator : ActuatorPartition : Process;
		
		port ports {
			in channel1: Data: Base_Types::Boolean;
			in channel2: Data: Base_Types::Boolean;
			in manualActuatorInput: Data: Base_Types::Boolean;
			out output: Data: Base_Types::Boolean;
		}
		
		connection c1 connect ports.channel1 to actuateTempPressureActuator.ports.channel1;
		connection c2 connect ports.channel2 to actuateTempPressureActuator.ports.channel2;
		connection mAI connect ports.manualActuatorInput to tempPressureActuator.ports.manualActuatorInput;
		connection aTPAa2tPAa connect actuateTempPressureActuator.ports.actuate to tempPressureActuator.ports.input;
		connection tPAo2o connect tempPressureActuator.ports.output to ports.output;
	}
	
	part def SaturationActuatorUnit :> System {
		part actuateSaturationActuator : OrLogicPartition : Process;
		part saturationActuator : ActuatorPartition : Process;
		
		port ports {
			in channel1: Data: Base_Types::Boolean;
			in channel2: Data: Base_Types::Boolean;
			in manualActuatorInput: Data: Base_Types::Boolean;
			out output: Data: Base_Types::Boolean;
		}
		
		connection c1 connect ports.channel1 to actuateSaturationActuator.ports.channel1;
		connection c2 connect ports.channel2 to actuateSaturationActuator.ports.channel2;
		connection mAI connect ports.manualActuatorInput to saturationActuator.ports.manualActuatorInput;
		connection aSAa2sAi connect actuateSaturationActuator.ports.actuate to saturationActuator.ports.input;
		connection sAo2o connect saturationActuator.ports.output to ports.output;
	}
	
	part def CoincidenceLogicPartition :> Process {
		part coincidenceLogic : CoincidenceLogic : Thread;
		
		port ports {
			in channel1: Data: Base_Types::Boolean;
			in channel2: Data: Base_Types::Boolean;
			in channel3: Data: Base_Types::Boolean;
			in channel4: Data: Base_Types::Boolean;
			out actuate: Data: Base_Types::Boolean;
		}
		
		connection c1 connect ports.channel1 to coincidenceLogic.ports.channel1;
		connection c2 connect ports.channel2 to coincidenceLogic.ports.channel2;
		connection c3 connect ports.channel3 to coincidenceLogic.ports.channel3;
		connection c4 connect ports.channel4 to coincidenceLogic.ports.channel4;
		connection a connect coincidenceLogic.ports.actuate to ports.actuate;
	}
	
	part def CoincidenceLogic :> Thread {
		port ports {
			in channel1: Data: Base_Types::Boolean;
			in channel2: Data: Base_Types::Boolean;
			in channel3: Data: Base_Types::Boolean;
			in channel4: Data: Base_Types::Boolean;
			out actuate: Data: Base_Types::Boolean;
		}
		@Properties {
			Dispatch_Protocol = Periodic;
			Period = 1000;
		}
	}
	
	part def OrLogicPartition :> Process {
		part orLogic : OrLogic : Thread;
		
		port ports {
			in channel1: Data: Base_Types::Boolean;
			in channel2: Data: Base_Types::Boolean;
			out actuate: Data: Base_Types::Boolean;
		}
		
		connection c1 connect ports.channel1 to orLogic.ports.channel1;
		connection c2 connect ports.channel2 to orLogic.ports.channel2;
		connection a connect orLogic.ports.actuate to ports.actuate;
	}
	
	part def OrLogic :> Thread {
		port ports {
			in channel1: Data: Base_Types::Boolean;
			in channel2: Data: Base_Types::Boolean;
			out actuate: Data: Base_Types::Boolean;
		}
		@Properties {
			Dispatch_Protocol = Periodic;
			Period = 1000;
		}
	}
	
	part def ActuatorPartition :> Process {
		part actuator : Actuator : Thread;
		
		port ports {
			in input: Data: Base_Types::Boolean;
			in manualActuatorInput: Data: Base_Types::Boolean;
			out output: Data: Base_Types::Boolean;
		}
		
		connection i connect ports.input to actuator.ports.input;
		connection mAi connect ports.manualActuatorInput to actuator.ports.manualActuatorInput;
		connection o connect actuator.ports.output to ports.output;
	}
	
	part def Actuator :> Thread {
		port ports {
			in input: Data: Base_Types::Boolean;
			in manualActuatorInput: Data: Base_Types::Boolean;
			out output: Data: Base_Types::Boolean;
		}
		@Properties {
			Dispatch_Protocol = Periodic;
			Period = 1000;
		}
	}
	
}