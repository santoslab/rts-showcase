library package AADL_Timing_Properties {

	metadata def Timing_Properties {
		
		attribute Period : ScalarValues::Integer {
			doc
			/* The <b>Period</b> property specifies the time interval in milliseconds between successive dispatches of a thread whose scheduling
			 * protocol is periodic, or the minimum interval between successive dispatches of a thread whose scheduling protocol
			 * is sporadic.<p>
			 * The numeric value must be a single positive number.<p>
			 * A <b>Period</b> property association is only allowed if the thread scheduling protocol is either periodic or
			 * sporadic, timed or hybrid.
			 */
			 
			 // Note: ideally the type would be ISQBase::Duration_Unit, but kerml disallows,
			 //       for e.g., 'Period = 1 [s]' as the expression '1 [s]' is not model level
			 //       evaluable
		}
	}
}