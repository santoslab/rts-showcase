package Actuators {
	
	private import HAMR::*;
	private import RTS::Periodic_Thread;

	part def ActuatorsMockProcess_i :> Process {
		part actuatorsMockThread : ActuatorsMockThread_i;
		
        port tempPressureActuate : DataPort { in :>> type : Base_Types::Boolean; }
		port saturationActuate : DataPort { in :>> type : Base_Types::Boolean; }
		
		connection tPA : PortConnection connect tempPressureActuate to actuatorsMockThread.tempPressureActuate;
		connection sA : PortConnection connect saturationActuate to actuatorsMockThread.saturationActuate;
	}
	
	part def ActuatorsMockThread_i :> Periodic_Thread {
		port tempPressureActuate : DataPort { in :>> type : Base_Types::Boolean; }
		port saturationActuate : DataPort { in :>> type : Base_Types::Boolean; }
	}
	
}