package Instrumentation {
	
	import AADL_Properties::*;
	import AADL_Definitions::*;
	
	part def InstrumentationMockProcess :> Process {
		part instrumentationMockThread : InstrumentationMockThread : Thread;
		
		port ports {
			// actuation unit 1
			out unit1_temperatureLogic_channel1: Data: Base_Types::Boolean;
			out unit1_temperatureLogic_channel2: Data: Base_Types::Boolean;
			out unit1_temperatureLogic_channel3: Data: Base_Types::Boolean;
			out unit1_temperatureLogic_channel4: Data: Base_Types::Boolean;
			out unit1_pressureLogic_channel1: Data: Base_Types::Boolean;
			out unit1_pressureLogic_channel2: Data: Base_Types::Boolean;
			out unit1_pressureLogic_channel3: Data: Base_Types::Boolean;
			out unit1_pressureLogic_channel4: Data: Base_Types::Boolean;
			out unit1_saturationLogic_channel1: Data: Base_Types::Boolean;
			out unit1_saturationLogic_channel2: Data: Base_Types::Boolean;
			out unit1_saturationLogic_channel3: Data: Base_Types::Boolean;
			out unit1_saturationLogic_channel4: Data: Base_Types::Boolean;
			// actuation unit 2
			out unit2_temperatureLogic_channel1: Data: Base_Types::Boolean;
			out unit2_temperatureLogic_channel2: Data: Base_Types::Boolean;
			out unit2_temperatureLogic_channel3: Data: Base_Types::Boolean;
			out unit2_temperatureLogic_channel4: Data: Base_Types::Boolean;
			out unit2_pressureLogic_channel1: Data: Base_Types::Boolean;
			out unit2_pressureLogic_channel2: Data: Base_Types::Boolean;
			out unit2_pressureLogic_channel3: Data: Base_Types::Boolean;
			out unit2_pressureLogic_channel4: Data: Base_Types::Boolean;
			out unit2_saturationLogic_channel1: Data: Base_Types::Boolean;
			out unit2_saturationLogic_channel2: Data: Base_Types::Boolean;
			out unit2_saturationLogic_channel3: Data: Base_Types::Boolean;
			out unit2_saturationLogic_channel4: Data: Base_Types::Boolean;
		}
		
		// actuation unit 1
		connection u1tLc1 connect instrumentationMockThread.ports.unit1_temperatureLogic_channel1 to ports.unit1_temperatureLogic_channel1;
		connection u1tLc2 connect instrumentationMockThread.ports.unit1_temperatureLogic_channel2 to ports.unit1_temperatureLogic_channel2;
		connection u1tLc3 connect instrumentationMockThread.ports.unit1_temperatureLogic_channel3 to ports.unit1_temperatureLogic_channel3;
		connection u1tLc4 connect instrumentationMockThread.ports.unit1_temperatureLogic_channel4 to ports.unit1_temperatureLogic_channel4;
		connection u1pLc1 connect instrumentationMockThread.ports.unit1_pressureLogic_channel1 to ports.unit1_pressureLogic_channel1;
		connection u1pLc2 connect instrumentationMockThread.ports.unit1_pressureLogic_channel2 to ports.unit1_pressureLogic_channel2;
		connection u1pLc3 connect instrumentationMockThread.ports.unit1_pressureLogic_channel3 to ports.unit1_pressureLogic_channel3;
		connection u1pLc4 connect instrumentationMockThread.ports.unit1_pressureLogic_channel4 to ports.unit1_pressureLogic_channel4;
		connection u1sLc1 connect instrumentationMockThread.ports.unit1_saturationLogic_channel1 to ports.unit1_saturationLogic_channel1;
		connection u1sLc2 connect instrumentationMockThread.ports.unit1_saturationLogic_channel2 to ports.unit1_saturationLogic_channel2;
		connection u1sLc3 connect instrumentationMockThread.ports.unit1_saturationLogic_channel3 to ports.unit1_saturationLogic_channel3;
		connection u1sLc4 connect instrumentationMockThread.ports.unit1_saturationLogic_channel4 to ports.unit1_saturationLogic_channel4;
		// actuation unit 2
		connection u2tLc1 connect instrumentationMockThread.ports.unit2_temperatureLogic_channel1 to ports.unit2_temperatureLogic_channel1;
		connection u2tLc2 connect instrumentationMockThread.ports.unit2_temperatureLogic_channel2 to ports.unit2_temperatureLogic_channel2;
		connection u2tLc3 connect instrumentationMockThread.ports.unit2_temperatureLogic_channel3 to ports.unit2_temperatureLogic_channel3;
		connection u2tLc4 connect instrumentationMockThread.ports.unit2_temperatureLogic_channel4 to ports.unit2_temperatureLogic_channel4;
		connection u2pLc1 connect instrumentationMockThread.ports.unit2_pressureLogic_channel1 to ports.unit2_pressureLogic_channel1;
		connection u2pLc2 connect instrumentationMockThread.ports.unit2_pressureLogic_channel2 to ports.unit2_pressureLogic_channel2;
		connection u2pLc3 connect instrumentationMockThread.ports.unit2_pressureLogic_channel3 to ports.unit2_pressureLogic_channel3;
		connection u2pLc4 connect instrumentationMockThread.ports.unit2_pressureLogic_channel4 to ports.unit2_pressureLogic_channel4;
		connection u2sLc1 connect instrumentationMockThread.ports.unit2_saturationLogic_channel1 to ports.unit2_saturationLogic_channel1;
		connection u2sLc2 connect instrumentationMockThread.ports.unit2_saturationLogic_channel2 to ports.unit2_saturationLogic_channel2;
		connection u2sLc3 connect instrumentationMockThread.ports.unit2_saturationLogic_channel3 to ports.unit2_saturationLogic_channel3;
		connection u2sLc4 connect instrumentationMockThread.ports.unit2_saturationLogic_channel4 to ports.unit2_saturationLogic_channel4;
	}
	
	part def InstrumentationMockThread :> Thread {
		port ports {
			// actuation unit 1
			out unit1_temperatureLogic_channel1: Data: Base_Types::Boolean;
			out unit1_temperatureLogic_channel2: Data: Base_Types::Boolean;
			out unit1_temperatureLogic_channel3: Data: Base_Types::Boolean;
			out unit1_temperatureLogic_channel4: Data: Base_Types::Boolean;
			out unit1_pressureLogic_channel1: Data: Base_Types::Boolean;
			out unit1_pressureLogic_channel2: Data: Base_Types::Boolean;
			out unit1_pressureLogic_channel3: Data: Base_Types::Boolean;
			out unit1_pressureLogic_channel4: Data: Base_Types::Boolean;
			out unit1_saturationLogic_channel1: Data: Base_Types::Boolean;
			out unit1_saturationLogic_channel2: Data: Base_Types::Boolean;
			out unit1_saturationLogic_channel3: Data: Base_Types::Boolean;
			out unit1_saturationLogic_channel4: Data: Base_Types::Boolean;
			// actuation unit 2
			out unit2_temperatureLogic_channel1: Data: Base_Types::Boolean;
			out unit2_temperatureLogic_channel2: Data: Base_Types::Boolean;
			out unit2_temperatureLogic_channel3: Data: Base_Types::Boolean;
			out unit2_temperatureLogic_channel4: Data: Base_Types::Boolean;
			out unit2_pressureLogic_channel1: Data: Base_Types::Boolean;
			out unit2_pressureLogic_channel2: Data: Base_Types::Boolean;
			out unit2_pressureLogic_channel3: Data: Base_Types::Boolean;
			out unit2_pressureLogic_channel4: Data: Base_Types::Boolean;
			out unit2_saturationLogic_channel1: Data: Base_Types::Boolean;
			out unit2_saturationLogic_channel2: Data: Base_Types::Boolean;
			out unit2_saturationLogic_channel3: Data: Base_Types::Boolean;
			out unit2_saturationLogic_channel4: Data: Base_Types::Boolean;
		}
		@Properties {
			Dispatch_Protocol = Periodic;
			Period = 1000;
		}
	}
	
}