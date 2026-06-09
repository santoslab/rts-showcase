package EventControl {
	
	private import HAMR::*;

	part def EventControlMockProcess :> Process {
		part eventControlMockThread : EventControlMockThread;
		
		out port manualActuatorInput1 : DataPort { out :>> type : Base_Types::Boolean; }
		out port manualActuatorInput2 : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection mAI1 : PortConnection connect eventControlMockThread.manualActuatorInput1 to manualActuatorInput1;
		connection mAI2 : PortConnection connect eventControlMockThread.manualActuatorInput2 to manualActuatorInput2;
	}
	
	part def EventControlMockThread :> Thread {
		out port manualActuatorInput1 : DataPort { out :>> type : Base_Types::Boolean; }
		out port manualActuatorInput2 : DataPort { out :>> type : Base_Types::Boolean; }
		
		attribute :>> Dispatch_Protocol = Supported_Dispatch_Protocols::Periodic;
		attribute :>> Period = 1000 [ms];
		//@Properties {
		//	Dispatch_Protocol = Periodic;
		//	Period = 1000;
		//}
	}
	
}