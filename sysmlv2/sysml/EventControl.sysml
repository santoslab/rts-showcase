package EventControl {
	
	import AADL_Properties::*;
	import AADL_Definitions::*;
	
	part def EventControlMockProcess :> Process {
		part eventControlMockThread : EventControlMockThread : Thread;
		
		port ports {
			out manualActuatorInput1: Data: Base_Types::Boolean;
			out manualActuatorInput2: Data: Base_Types::Boolean;
		}
		
		connection mAI1 connect eventControlMockThread.ports.manualActuatorInput1 to ports.manualActuatorInput1;
		connection mAI2 connect eventControlMockThread.ports.manualActuatorInput2 to ports.manualActuatorInput2;
	}
	
	part def EventControlMockThread :> Thread {
		port ports {
			out manualActuatorInput1: Data: Base_Types::Boolean;
			out manualActuatorInput2: Data: Base_Types::Boolean;
		}
		@Properties {
			Dispatch_Protocol = Periodic;
			Period = 1000;
		}
	}
	
}