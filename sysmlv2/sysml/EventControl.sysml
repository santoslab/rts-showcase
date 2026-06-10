package EventControl {
	
	private import HAMR::*;
	private import RTS::Periodic_Thread;

	part def EventControlMockProcess_i :> Process {
		part eventControlMockThread : EventControlMockThread_i;
		
		port manualActuatorInput1 : DataPort { out :>> type : Base_Types::Boolean; }
		port manualActuatorInput2 : DataPort { out :>> type : Base_Types::Boolean; }
		
		connection mAI1 : PortConnection connect eventControlMockThread.manualActuatorInput1 to manualActuatorInput1;
		connection mAI2 : PortConnection connect eventControlMockThread.manualActuatorInput2 to manualActuatorInput2;
	}
	
	part def EventControlMockThread_i :> Periodic_Thread {
		port manualActuatorInput1 : DataPort { out :>> type : Base_Types::Boolean; }
		port manualActuatorInput2 : DataPort { out :>> type : Base_Types::Boolean; }
	}
	
}