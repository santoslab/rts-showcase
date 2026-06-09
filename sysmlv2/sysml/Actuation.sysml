package Actuation {
	
	private import HAMR::*;

	part def RTSActuation :> System {

		part actuationUnit1 : ActuationLogicUnit;
		part actuationUnit2 : ActuationLogicUnit;
		part tempPressureActuatorUnit : TempPressureActuatorUnit;
		part saturationActuatorUnit : SaturationActuatorUnit;

		// actuation unit 1
		in port unit1_temperatureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_temperatureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_temperatureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_temperatureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_pressureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_pressureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_pressureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_pressureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_saturationLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_saturationLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_saturationLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit1_saturationLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		// actuation unit 2
		in port unit2_temperatureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_temperatureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_temperatureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_temperatureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_pressureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_pressureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_pressureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_pressureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_saturationLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_saturationLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_saturationLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port unit2_saturationLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		// manual controls
		in port tempPressureManualInput : DataPort { in :>> type : Base_Types::Boolean; }
		in port saturationManualInput : DataPort { in :>> type : Base_Types::Boolean; }
		// outputs
		out port tempPressureOutput : DataPort { :>> type : Base_Types::Boolean; }
		out port saturationOutput : DataPort { :>> type : Base_Types::Boolean; }
		
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
	
	part def ActuationLogicUnit :> System {
		part temperatureLogic : CoincidenceLogicPartition;
		part pressureLogic : CoincidenceLogicPartition;
		part saturationLogic : CoincidenceLogicPartition;
		part tempPressureTripOut : OrLogicPartition;
		
		in port temperatureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port temperatureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port temperatureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port temperatureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		in port pressureLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port pressureLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port pressureLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port pressureLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		in port saturationLogic_channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port saturationLogic_channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port saturationLogic_channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port saturationLogic_channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		out port tempPressureTripOut_actuate : DataPort { out :>> type : Base_Types::Boolean; }
		out port saturationLogic_actuate : DataPort { out :>> type : Base_Types::Boolean; }
		
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
	
	part def TempPressureActuatorUnit :> System {
		part actuateTempPressureActuator : OrLogicPartition;
		part tempPressureActuator : ActuatorPartition;
		
		in port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port manualActuatorInput : DataPort { in :>> type : Base_Types::Boolean; }
		out port output : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection c1 : PortConnection connect channel1 to actuateTempPressureActuator.channel1;
		connection c2 : PortConnection connect channel2 to actuateTempPressureActuator.channel2;
		connection mAI : PortConnection connect manualActuatorInput to tempPressureActuator.manualActuatorInput;
		connection aTPAa2tPAa : PortConnection connect actuateTempPressureActuator.actuate to tempPressureActuator.input;
		connection tPAo2o : PortConnection connect tempPressureActuator.output to output;
	}
	
	part def SaturationActuatorUnit :> System {
		part actuateSaturationActuator : OrLogicPartition;
		part saturationActuator : ActuatorPartition;
		
		in port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port manualActuatorInput : DataPort { in :>> type : Base_Types::Boolean; }
		out port output : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection c1 : PortConnection connect channel1 to actuateSaturationActuator.channel1;
		connection c2 : PortConnection connect channel2 to actuateSaturationActuator.channel2;
		connection mAI : PortConnection connect manualActuatorInput to saturationActuator.manualActuatorInput;
		connection aSAa2sAi : PortConnection connect actuateSaturationActuator.actuate to saturationActuator.input;
		connection sAo2o : PortConnection connect saturationActuator.output to output;
	}
	
	part def CoincidenceLogicPartition :> Process {
		part coincidenceLogic : CoincidenceLogic;

		in port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		out port actuate : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection c1 : PortConnection connect channel1 to coincidenceLogic.channel1;
		connection c2 : PortConnection connect channel2 to coincidenceLogic.channel2;
		connection c3 : PortConnection connect channel3 to coincidenceLogic.channel3;
		connection c4 : PortConnection connect channel4 to coincidenceLogic.channel4;
		connection a : PortConnection connect coincidenceLogic.actuate to actuate;
	}
	
	part def CoincidenceLogic :> Thread {

		in port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		in port channel3 : DataPort { in :>> type : Base_Types::Boolean; }
		in port channel4 : DataPort { in :>> type : Base_Types::Boolean; }
		out port actuate : DataPort { out :>> type : Base_Types::Boolean; }

		attribute :>> Dispatch_Protocol = Supported_Dispatch_Protocols::Periodic;
		attribute :>> Period = 1000 [ms];

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

			// The compute_cases below are needed for formal verification (Logika and
			// Verus). The general guarantee alone cannot detect wrong-port-read bugs
			// because unread input ports remain as free symbolic spec vars, allowing
			// the SMT solver to pick values that satisfy the postcondition vacuously.
			// Each case constrains all input ports to specific values, forcing the
			// verifier to confirm the implementation actually reads from the correct port.
			compute_cases
				case pair_ch1_ch2 "Channels 1 and 2 true, others false":
					assume channel1 & channel2 & (not channel3) & (not channel4);
					guarantee actuate;
				case pair_ch1_ch3 "Channels 1 and 3 true, others false":
					assume channel1 & (not channel2) & channel3 & (not channel4);
					guarantee actuate;
				case pair_ch1_ch4 "Channels 1 and 4 true, others false":
					assume channel1 & (not channel2) & (not channel3) & channel4;
					guarantee actuate;
				case pair_ch2_ch3 "Channels 2 and 3 true, others false":
					assume (not channel1) & channel2 & channel3 & (not channel4);
					guarantee actuate;
				case pair_ch2_ch4 "Channels 2 and 4 true, others false":
					assume (not channel1) & channel2 & (not channel3) & channel4;
					guarantee actuate;
				case pair_ch3_ch4 "Channels 3 and 4 true, others false":
					assume (not channel1) & (not channel2) & channel3 & channel4;
					guarantee actuate;
				case solo_ch1 "Only channel 1 true":
					assume channel1 & (not channel2) & (not channel3) & (not channel4);
					guarantee not actuate;
				case solo_ch2 "Only channel 2 true":
					assume (not channel1) & channel2 & (not channel3) & (not channel4);
					guarantee not actuate;
				case solo_ch3 "Only channel 3 true":
					assume (not channel1) & (not channel2) & channel3 & (not channel4);
					guarantee not actuate;
				case solo_ch4 "Only channel 4 true":
					assume (not channel1) & (not channel2) & (not channel3) & channel4;
					guarantee not actuate;
		}*/
	}
	
	part def OrLogicPartition :> Process {
		part orLogic : OrLogic;
		
		in port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		out port actuate : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection c1 : PortConnection connect channel1 to orLogic.channel1;
		connection c2 : PortConnection connect channel2 to orLogic.channel2;
		connection a : PortConnection connect orLogic.actuate to actuate;
	}
	
	part def OrLogic :> Thread {

		in port channel1 : DataPort { in :>> type : Base_Types::Boolean; }
		in port channel2 : DataPort { in :>> type : Base_Types::Boolean; }
		out port actuate : DataPort { out :>> type : Base_Types::Boolean; }

		attribute :>> Dispatch_Protocol = Supported_Dispatch_Protocols::Periodic;
		attribute :>> Period = 1000 [ms];

		language "GUMBO" /*{
			compute
				// (a || b)
			guarantee orOutput:
				actuate == (channel1 | channel2);

			// The compute_cases below are needed for formal verification (Logika and
			// Verus). The general guarantee alone cannot detect wrong-port-read bugs
			// because unread input ports remain as free symbolic spec vars, allowing
			// the SMT solver to pick values that satisfy the postcondition vacuously.
			// Each case constrains all input ports to specific values, forcing the
			// verifier to confirm the implementation actually reads from the correct port.
			compute_cases
				case ch1_only "Only channel 1 true":
					assume channel1 & (not channel2);
					guarantee actuate;
				case ch2_only "Only channel 2 true":
					assume (not channel1) & channel2;
					guarantee actuate;
				case both_false "Both channels false":
					assume (not channel1) & (not channel2);
					guarantee not actuate;
		}*/
	}
	
	part def ActuatorPartition :> Process {
		part actuator : Actuator;
		
		in port input : DataPort { in :>> type : Base_Types::Boolean; }
		in port manualActuatorInput : DataPort { in :>> type : Base_Types::Boolean; }
		out port output : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection i : PortConnection connect input to actuator.input;
		connection mAi : PortConnection connect manualActuatorInput to actuator.manualActuatorInput;
		connection o : PortConnection connect actuator.output to output;
	}
	
	part def Actuator :> Thread {
		in port input : DataPort { in :>> type : Base_Types::Boolean; }
		in port manualActuatorInput : DataPort { in :>> type : Base_Types::Boolean; }
		out port output : DataPort { out :>> type : Base_Types::Boolean; }

		attribute :>> Dispatch_Protocol = Supported_Dispatch_Protocols::Periodic;
		attribute :>> Period = 1000 [ms];

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

			// The compute_cases below are needed for formal verification (Logika and
			// Verus). The general guarantee alone cannot detect wrong-port-read bugs
			// because unread input ports remain as free symbolic spec vars, allowing
			// the SMT solver to pick values that satisfy the postcondition vacuously.
			// Each case constrains all input ports to specific values, forcing the
			// verifier to confirm the implementation actually reads from the correct port.
			compute_cases
				case input_only "Only input true":
					assume input & (not manualActuatorInput);
					guarantee output;
				case manual_only "Only manual input true":
					assume (not input) & manualActuatorInput;
					guarantee output;
				case both_false "Both inputs false":
					assume (not input) & (not manualActuatorInput);
					guarantee not output;
		}*/
	}
	
}