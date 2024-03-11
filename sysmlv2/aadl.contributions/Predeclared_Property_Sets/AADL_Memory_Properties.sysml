library package AADL_Memory_Properties {
	
	metadata def Memory_Properties {
		 
		attribute Data_Size : ScalarValues::Integer {
			doc
			/* The <b>Data_Size</b> property specifies the size in bits of the readable and writeable data that results when the
			 * associated source text is compiled, linked, bound and loaded in the final system.  In the case of data types, it
			 * specifies the maximum size required to hold a value of an instance of the data type.<p>
			 */
			 
			 // Note: ideally the type would be SI::StorageCapacityUnit, but kerml disallows,
			 //       for e.g., 'Data_Size = 8 [bit]' as the expression '8 [bit]' is not model level
			 //       evaluable  
		}
	}
}