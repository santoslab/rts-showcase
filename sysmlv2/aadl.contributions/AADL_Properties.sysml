//Stores definitions of AADL properties
library package AADL_Properties {

	import ISQ::*;
	import SIPrefixes::*;
	import AADL_Data_Model::*;
	import AADL_Memory_Properties::*;
	import AADL_Thread_Properties::*;
	import AADL_Timing_Properties::*;


	// Attach the "Properties" metadata to a part to assign AADL-like properties
	metadata def Properties :> Thread_Properties, 
	                           Timing_Properties,
	                           Memory_Properties,
	                           Data_Model {}
	

	// These aliases allow the enumerated values to be referenced more easily
	alias Sporadic for Supported_Dispatch_Protocols::Sporadic;
	alias Periodic for Supported_Dispatch_Protocols::Periodic;

}