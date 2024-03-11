library package AADL_Thread_Properties {
	import AADL_Project::*;
    
	metadata def Thread_Properties {
		attribute Dispatch_Protocol : Supported_Dispatch_Protocols {
			doc
			/* The <b>Dispatch_Protocol</b> property specifies the dispatch behavior for a thread.<p>
			 * A method used to construct a actual system from a specification is permitted to support only a subset of the
			 * standard scheduling protocols.  A method used to construct a actual system is permitted to support additional
			 * non-standard scheduling protocols. 
			 */
		}
	}
}