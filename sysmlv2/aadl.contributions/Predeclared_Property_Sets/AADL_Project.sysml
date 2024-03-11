package AADL_Project {
		
	// Defines the type for Dispatch_Protocol as an enum with two potential values
	enum def Supported_Dispatch_Protocols {
		doc
		/* The <b>Supported_Dispatch_Protocols</b> property enumeration type specifies the set of thread dispatch protocols
		 * that are supported.<p> 
		 * <b>Periodic</b> represents periodic dispatch of threads with deadlines. <b>Sporadic</b> represents event-triggered
		 * dispatching of threads with soft deadlines. <b>Aperiodic</b> represents event-triggered dispatch of threads with
		 * hard deadlines. <b>Timed</b> represents threads that are dispatched after a given time unless they are dispatched
		 * by arrival of an event or event data. <b>Hybrid</b> represents threads that are dispatched by both an event or
		 * event data arrival and periodically. <b>Background</b> represents threads that are dispatched once and execute 
		 * until completion.  The <b>Period</b> is required for <b>Periodic, Timed, and Hybrid</b> threads.
		 */
		enum Sporadic;
		enum Periodic;
		enum Aperiodic;
		enum Timed;
		enum Hybrid;
		enum Background;
	}
}