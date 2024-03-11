package Actuators {
	
	import AADL_Properties::*;
	import AADL_Definitions::*;
	
	part def ActuatorsMockProcess :> Process {
		part actuatorsMockThread : ActuatorsMockThread : Thread;
		
		port ports {
			in tempPressureActuate: Data: Base_Types::Boolean;
			in saturationActuate: Data: Base_Types::Boolean;
		}
		
		connection tPA connect ports.tempPressureActuate to actuatorsMockThread.ports.tempPressureActuate;
		connection sA connect ports.saturationActuate to actuatorsMockThread.ports.saturationActuate;
	}
	
	part def ActuatorsMockThread :> Thread {
		port ports {
			in tempPressureActuate: Data: Base_Types::Boolean;
			in saturationActuate: Data: Base_Types::Boolean;
		}
		@Properties {
			Dispatch_Protocol = Periodic;
			Period = 1000;
		}
	}
	
}