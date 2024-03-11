library package Base_Types {
	
	import AADL_Properties::*;
	import AADL_Data_Model::*;
	import SI::*;
	
	alias Boolean for ScalarValues::Boolean;

    alias Integer for ScalarValues::Integer;

    datatype Integer_8 :> Integer {
    	@Properties {
    		Data_Size = 8;
    		Number_Representation = Signed;
    	}
    }
    
    datatype Integer_16 :> Integer {
    	@Properties {
    		Data_Size = 16;
    		Number_Representation = Signed;
    	}
    }
    
    datatype s Integer_32 :> Integer {
    	@Properties {
    		Data_Size = 32;
    		Number_Representation = Signed;
    	}
    }
    
    datatype Integer_64 :> Integer {
    	@Properties {
    		Data_Size = 64;
    		Number_Representation = Signed;
    	}
    }

    datatype Unsigned_8 :> Integer {
    	@Properties {
    		Data_Size = 8;
    		Number_Representation = Unsigned;
    	}
    }
    
    datatype Unsigned_16 :> Integer {
    	@Properties {
    		Data_Size = 16;
    		Number_Representation = Unsigned;
    	}
    }
    
    datatype Unsigned_32 :> Integer {
    	@Properties {
    		Data_Size = 32;
    		Number_Representation = Unsigned;
    	}
    }
    
    datatype Unsigned_64 :> Integer {
    	@Properties {
    		Data_Size = 64;
    		Number_Representation = Unsigned;
    	}
    }

	datatype Natural :> Integer {
		@Properties {
			// TODO: how to properly express ranges in sysml
			
			// TODO: AADL's high range is 2^32 but kerml apparently
			//   stores ScalarValues::Integer as signed 32 bit ints so
			//   2147483647 is the largest value allowed
			
			Integer_Range = Range(0, 2147483647);
		}	
	}
	
    alias Float for ScalarValues::Rational;
    
    datatype Float_32 :> Float {
    	@Properties {
    		Data_Size = 32;
    		IEEE754_Precision = Simple;
    	}
    }
    
    datatype Float_64 :> Float {
    	@Properties {
    		Data_Size = 64;
    		IEEE754_Precision = Double;
    	}
    }
    
    alias String for ScalarValues::String;
    
    datatype Character;
}