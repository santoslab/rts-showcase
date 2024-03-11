library package AADL_Data_Model {
	
	metadata def Data_Model {
		attribute IEEE754_Precision : Supported_Precisions {
			doc
			/* The IEEE754_Precision property indicates, for a float data
			 * component type, the precision used. This property is derived
			 * from the notion of precision per the 754-1985 IEEE Standard for
			 * Binary Floating-Point Arithmetic.
			 */
		}
		
		attribute Data_Representation : Supported_Data_Representations {
			doc
			/* The Data_Representation property may be used to specify the
			 * representation of simple or composite data types within the
			 * programming language source code.
			 * Note: An implementation is allowed to support only a subset of
			 * these structures.
			 */
		}
		
		attribute Number_Representation : Supported_Number_Representations {
			doc
			/* Number_Representation specifies whether an integer data
			 * component is signed or unsigned.
			 */
		}
		
		attribute Integer_Range : Range {
			doc
			/* Integer_Range specifies a range of integer values that apply to
			 * the data component.  This property is used to represent integer
			 * range constraints on data that is of some integer type.
			 */
		}
	}
	
	enum def Supported_Precisions {
		enum Simple;
		enum Double;
	}
	
	alias Simple for Supported_Precisions::Simple;
	alias Double for Supported_Precisions::Double;
	
	enum def Supported_Data_Representations {
		enum Array;
		enum Boolean;
		enum Character;
		enum Enum;
		enum Float;
		enum Fixed;
		enum Integer;
		enum String;
		enum Struct;
		enum Union;
	}
	
	enum def Supported_Number_Representations {
		enum Signed;
		enum Unsigned;
	}
	
	alias Signed for Supported_Number_Representations::Signed;
	alias Unsigned for Supported_Number_Representations::Unsigned;
	
		
	attribute def Range {
		attribute low: ScalarValues::Integer;
		attribute high: ScalarValues::Integer;
	}
}