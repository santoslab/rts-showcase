package Actuation {
	
	private import HAMR::*;
	private import RTS::Periodic_Thread;

	part def RTSActuation_i :> System {

		part actuationUnit1 : ActuationLogicUnit_i;
		part actuationUnit2 : ActuationLogicUnit_i;
		part tempPressureActuatorUnit : TempPressureActuatorUnit_i;
		part saturationActuatorUnit : SaturationActuatorUnit_i;

		// actuation unit 1
		port unit1_temperatureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_temperatureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_temperatureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_temperatureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_pressureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_pressureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_pressureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_pressureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_saturationLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_saturationLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_saturationLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit1_saturationLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		// actuation unit 2
		port unit2_temperatureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_temperatureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_temperatureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_temperatureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_pressureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_pressureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_pressureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_pressureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_saturationLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_saturationLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_saturationLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port unit2_saturationLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		// manual controls
		port tempPressureManualInput : DataPort { in :>> type : Base_Types::Boolean; }
		port saturationManualInput : DataPort { in :>> type : Base_Types::Boolean; }
		// outputs
		port tempPressureOutput : DataPort { out :>> type : Base_Types::Boolean; }
		port saturationOutput : DataPort { out :>> type : Base_Types::Boolean; }
		
		// actuation unit 1 
		connection u1TLc : PortConnection connect unit1_temperatureLogic_channel1 to actuationUnit1.temperatureLogic_channel1;
		connection u1TLc2 : PortConnection connect unit1_temperatureLogic_channel2 to actuationUnit1.temperatureLogic_channel2;
		connection u1TLc3 : PortConnection connect unit1_temperatureLogic_channel3 to actuationUnit1.temperatureLogic_channel3;
		connection u1TLc4 : PortConnection connect unit1_temperatureLogic_channel4 to actuationUnit1.temperatureLogic_channel4;
		connection u1PLc1 : PortConnection connect unit1_pressureLogic_channel1 to actuationUnit1.pressureLogic_channel1;
		connection u1PLc2 : PortConnection connect unit1_pressureLogic_channel2 to actuationUnit1.pressureLogic_channel2;
		connection u1PLc3 : PortConnection connect unit1_pressureLogic_channel3 to actuationUnit1.pressureLogic_channel3;
		connection u1PLc4 : PortConnection connect unit1_pressureLogic_channel4 to actuationUnit1.pressureLogic_channel4;
		connection u1SLc1 : PortConnection connect unit1_saturationLogic_channel1 to actuationUnit1.saturationLogic_channel1;
		connection u1SLc2 : PortConnection connect unit1_saturationLogic_channel2 to actuationUnit1.saturationLogic_channel2;
		connection u1SLc3 : PortConnection connect unit1_saturationLogic_channel3 to actuationUnit1.saturationLogic_channel3;
		connection u1SLc4 : PortConnection connect unit1_saturationLogic_channel4 to actuationUnit1.saturationLogic_channel4;
		// actuation unit 2 
		connection u2TLc1 : PortConnection connect unit2_temperatureLogic_channel1 to actuationUnit2.temperatureLogic_channel1;
		connection u2TLc2 : PortConnection connect unit2_temperatureLogic_channel2 to actuationUnit2.temperatureLogic_channel2;
		connection u2TLc3 : PortConnection connect unit2_temperatureLogic_channel3 to actuationUnit2.temperatureLogic_channel3;
		connection u2TLc4 : PortConnection connect unit2_temperatureLogic_channel4 to actuationUnit2.temperatureLogic_channel4;
		connection u2PLc1 : PortConnection connect unit2_pressureLogic_channel1 to actuationUnit2.pressureLogic_channel1;
		connection u2PLc2 : PortConnection connect unit2_pressureLogic_channel2 to actuationUnit2.pressureLogic_channel2;
		connection u2PLc3 : PortConnection connect unit2_pressureLogic_channel3 to actuationUnit2.pressureLogic_channel3;
		connection u2PLc4 : PortConnection connect unit2_pressureLogic_channel4 to actuationUnit2.pressureLogic_channel4;
		connection u2SLc1 : PortConnection connect unit2_saturationLogic_channel1 to actuationUnit2.saturationLogic_channel1;
		connection u2SLc2 : PortConnection connect unit2_saturationLogic_channel2 to actuationUnit2.saturationLogic_channel2;
		connection u2SLc3 : PortConnection connect unit2_saturationLogic_channel3 to actuationUnit2.saturationLogic_channel3;
		connection u2SLc4 : PortConnection connect unit2_saturationLogic_channel4 to actuationUnit2.saturationLogic_channel4;
		// manual controls
		connection tpMI : PortConnection connect tempPressureManualInput to tempPressureActuatorUnit.manualActuatorInput;
		connection sMI : PortConnection connect saturationManualInput to saturationActuatorUnit.manualActuatorInput;
		// internal : PortConnection connections
		connection tpTOa2tpAUc1 : PortConnection connect actuationUnit1.tempPressureTripOut_actuate to tempPressureActuatorUnit.channel1;
		connection sTOa2sAUc1 : PortConnection connect actuationUnit1.saturationLogic_actuate to saturationActuatorUnit.channel1;
		connection tpTOa2tpAUc2 : PortConnection connect actuationUnit2.tempPressureTripOut_actuate to tempPressureActuatorUnit.channel2;
		connection sTOa2sAUc2 : PortConnection connect actuationUnit2.saturationLogic_actuate to saturationActuatorUnit.channel2;
		// outputs
		connection tpO : PortConnection connect tempPressureActuatorUnit.output to tempPressureOutput;
		connection sO : PortConnection connect saturationActuatorUnit.output to saturationOutput;
	}
	
	part def ActuationLogicUnit_i :> System {
		part temperatureLogic : CoincidenceLogicPartition_i;
		part pressureLogic : CoincidenceLogicPartition_i;
		part saturationLogic : CoincidenceLogicPartition_i;
		part tempPressureTripOut : OrLogicPartition_i;
		
		port temperatureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port temperatureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port temperatureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port temperatureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		port pressureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port pressureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port pressureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port pressureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		port saturationLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port saturationLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port saturationLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port saturationLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		port tempPressureTripOut_actuate : DataPort { out :>> type : Base_Types::Boolean; }
		port saturationLogic_actuate : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection tLc1 : PortConnection connect temperatureLogic_channel1 to temperatureLogic.channel1;
		connection tLc2 : PortConnection connect temperatureLogic_channel2 to temperatureLogic.channel2;
		connection tLc3 : PortConnection connect temperatureLogic_channel3 to temperatureLogic.channel3;
		connection tLc4 : PortConnection connect temperatureLogic_channel4 to temperatureLogic.channel4;
		connection pLc1 : PortConnection connect pressureLogic_channel1 to pressureLogic.channel1;
		connection pLc2 : PortConnection connect pressureLogic_channel2 to pressureLogic.channel2;
		connection pLc3 : PortConnection connect pressureLogic_channel3 to pressureLogic.channel3;
		connection pLc4 : PortConnection connect pressureLogic_channel4 to pressureLogic.channel4;
		connection sLc1 : PortConnection connect saturationLogic_channel1 to saturationLogic.channel1;
		connection sLc2 : PortConnection connect saturationLogic_channel2 to saturationLogic.channel2;
		connection sLc3 : PortConnection connect saturationLogic_channel3 to saturationLogic.channel3;
		connection sLc4 : PortConnection connect saturationLogic_channel4 to saturationLogic.channel4;
		connection tL2tPTO : PortConnection connect temperatureLogic.actuate to tempPressureTripOut.channel1;
		connection pL2tPTO : PortConnection connect pressureLogic.actuate to tempPressureTripOut.channel2;
		connection tPTOa : PortConnection connect tempPressureTripOut.actuate to tempPressureTripOut_actuate;
		connection sLa : PortConnection connect saturationLogic.actuate to saturationLogic_actuate;
	}
	
	part def TempPressureActuatorUnit_i :> System {
		part actuateTempPressureActuator : OrLogicPartition_i;
		part tempPressureActuator : ActuatorPartition_i;
		
		port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port manualActuatorInput : DataPort { in :>> type : Base_Types::Boolean; }
		port output : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection c1 : PortConnection connect channel1 to actuateTempPressureActuator.channel1;
		connection c2 : PortConnection connect channel2 to actuateTempPressureActuator.channel2;
		connection mAI : PortConnection connect manualActuatorInput to tempPressureActuator.manualActuatorInput;
		connection aTPAa2tPAa : PortConnection connect actuateTempPressureActuator.actuate to tempPressureActuator.input;
		connection tPAo2o : PortConnection connect tempPressureActuator.output to output;
	}
	
	part def SaturationActuatorUnit_i :> System {
		part actuateSaturationActuator : OrLogicPartition_i;
		part saturationActuator : ActuatorPartition_i;
		
		port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port manualActuatorInput : DataPort { in :>> type : Base_Types::Boolean; }
		port output : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection c1 : PortConnection connect channel1 to actuateSaturationActuator.channel1;
		connection c2 : PortConnection connect channel2 to actuateSaturationActuator.channel2;
		connection mAI : PortConnection connect manualActuatorInput to saturationActuator.manualActuatorInput;
		connection aSAa2sAi : PortConnection connect actuateSaturationActuator.actuate to saturationActuator.input;
		connection sAo2o : PortConnection connect saturationActuator.output to output;
	}
	
	part def CoincidenceLogicPartition_i :> Process {
		part coincidenceLogic : CoincidenceLogic_i;

		port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		port actuate : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection c1 : PortConnection connect channel1 to coincidenceLogic.channel1;
		connection c2 : PortConnection connect channel2 to coincidenceLogic.channel2;
		connection c3 : PortConnection connect channel3 to coincidenceLogic.channel3;
		connection c4 : PortConnection connect channel4 to coincidenceLogic.channel4;
		connection a : PortConnection connect coincidenceLogic.actuate to actuate;
	}
	
	part def CoincidenceLogic_i :> Periodic_Thread {

		port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		port channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		port actuate : DataPort { out :>> type : Base_Types::Boolean; }

		language "GUMBO" /*{
			compute

			guarantee coincidenceOutput "from actuationUnit.cry
				                        |Coincidence_2_4 : [4]TripPort -> Bit
				                        |Coincidence_2_4 x =
				                        |    (a&&b) || ((a||b) && (c||d)) || (c&&d)
				                        |For specification redundancy, provide an alternate but equivalent specification
				                        |of the concept 'at least two of the input channels are true.'" :
				actuate == ((channel1 & channel2) |
							(channel1 & channel3) |
							(channel1 & channel4) |
							(channel2 & channel3) |
							(channel2 & channel4) |
							(channel3 & channel4));
		}*/
	}
	
	part def OrLogicPartition_i :> Process {
		part orLogic : OrLogic_i;
		
		port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port actuate : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection c1 : PortConnection connect channel1 to orLogic.channel1;
		connection c2 : PortConnection connect channel2 to orLogic.channel2;
		connection a : PortConnection connect orLogic.actuate to actuate;
	}
	
	part def OrLogic_i :> Periodic_Thread {

		port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		port actuate : DataPort { out :>> type : Base_Types::Boolean; }

		language "GUMBO" /*{
			compute
				// (a || b)
			guarantee orOutput:
				actuate == (channel1 | channel2);
		}*/
	}
	
	part def ActuatorPartition_i :> Process {
		part actuator : Actuator_i;
		
		port input : DataPort { in :>> type : Base_Types::Boolean; }
		port manualActuatorInput : DataPort { in :>> type : Base_Types::Boolean; }
		port output : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection i : PortConnection connect input to actuator.input;
		connection mAi : PortConnection connect manualActuatorInput to actuator.manualActuatorInput;
		connection o : PortConnection connect actuator.output to output;
	}
	
	part def Actuator_i :> Periodic_Thread {
		port input : DataPort { in :>> type : Base_Types::Boolean; }
		port manualActuatorInput : DataPort { in :>> type : Base_Types::Boolean; }
		port output : DataPort { out :>> type : Base_Types::Boolean; }

		language "GUMBO" /*{
			initialize
				guarantee initOutputDataPort
					"The Initialize Entry Point must initialize all component
					|local state and all output data ports.":
					output == false;

			compute
				// (a || b)
			guarantee actuatorOutput:
				output == (input | manualActuatorInput);
		}*/
	}
	
}