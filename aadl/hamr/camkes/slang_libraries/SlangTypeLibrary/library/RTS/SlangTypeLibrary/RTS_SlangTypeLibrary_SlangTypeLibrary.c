#include <all.h>

Unit RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "SlangTypeLibrary.scala", "RTS.SlangTypeLibrary.SlangTypeLibrary.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(13);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Z RTS_SlangTypeLibrary_SlangTypeLibrary_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "SlangTypeLibrary.scala", "RTS.SlangTypeLibrary.SlangTypeLibrary", "main", 0);

  sfUpdateLoc(15);
  {
    B t_1 = RTS_Base_Types_Boolean_example(SF_LAST);
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, t_1);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(16);
  {
    Z t_3 = RTS_Base_Types_Integer_example(SF_LAST);
    DeclNewRTS_Base_Types_Integer_Payload(t_2);
    RTS_Base_Types_Integer_Payload_apply(SF &t_2, t_3);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_2));
  }

  sfUpdateLoc(17);
  {
    S8 t_5 = RTS_Base_Types_Integer_8_example(SF_LAST);
    DeclNewRTS_Base_Types_Integer_8_Payload(t_4);
    RTS_Base_Types_Integer_8_Payload_apply(SF &t_4, t_5);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_4));
  }

  sfUpdateLoc(18);
  {
    S16 t_7 = RTS_Base_Types_Integer_16_example(SF_LAST);
    DeclNewRTS_Base_Types_Integer_16_Payload(t_6);
    RTS_Base_Types_Integer_16_Payload_apply(SF &t_6, t_7);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_6));
  }

  sfUpdateLoc(19);
  {
    S32 t_9 = RTS_Base_Types_Integer_32_example(SF_LAST);
    DeclNewRTS_Base_Types_Integer_32_Payload(t_8);
    RTS_Base_Types_Integer_32_Payload_apply(SF &t_8, t_9);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_8));
  }

  sfUpdateLoc(20);
  {
    S64 t_11 = RTS_Base_Types_Integer_64_example(SF_LAST);
    DeclNewRTS_Base_Types_Integer_64_Payload(t_10);
    RTS_Base_Types_Integer_64_Payload_apply(SF &t_10, t_11);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_10));
  }

  sfUpdateLoc(21);
  {
    U8 t_13 = RTS_Base_Types_Unsigned_8_example(SF_LAST);
    DeclNewRTS_Base_Types_Unsigned_8_Payload(t_12);
    RTS_Base_Types_Unsigned_8_Payload_apply(SF &t_12, t_13);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_12));
  }

  sfUpdateLoc(22);
  {
    U16 t_15 = RTS_Base_Types_Unsigned_16_example(SF_LAST);
    DeclNewRTS_Base_Types_Unsigned_16_Payload(t_14);
    RTS_Base_Types_Unsigned_16_Payload_apply(SF &t_14, t_15);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_14));
  }

  sfUpdateLoc(23);
  {
    U32 t_17 = RTS_Base_Types_Unsigned_32_example(SF_LAST);
    DeclNewRTS_Base_Types_Unsigned_32_Payload(t_16);
    RTS_Base_Types_Unsigned_32_Payload_apply(SF &t_16, t_17);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_16));
  }

  sfUpdateLoc(24);
  {
    U64 t_19 = RTS_Base_Types_Unsigned_64_example(SF_LAST);
    DeclNewRTS_Base_Types_Unsigned_64_Payload(t_18);
    RTS_Base_Types_Unsigned_64_Payload_apply(SF &t_18, t_19);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_18));
  }

  sfUpdateLoc(25);
  {
    R t_21 = RTS_Base_Types_Float_example(SF_LAST);
    DeclNewRTS_Base_Types_Float_Payload(t_20);
    RTS_Base_Types_Float_Payload_apply(SF &t_20, t_21);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_20));
  }

  sfUpdateLoc(26);
  {
    F32 t_23 = RTS_Base_Types_Float_32_example(SF_LAST);
    DeclNewRTS_Base_Types_Float_32_Payload(t_22);
    RTS_Base_Types_Float_32_Payload_apply(SF &t_22, t_23);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_22));
  }

  sfUpdateLoc(27);
  {
    F64 t_25 = RTS_Base_Types_Float_64_example(SF_LAST);
    DeclNewRTS_Base_Types_Float_64_Payload(t_24);
    RTS_Base_Types_Float_64_Payload_apply(SF &t_24, t_25);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_24));
  }

  sfUpdateLoc(28);
  {
    C t_27 = RTS_Base_Types_Character_example(SF_LAST);
    DeclNewRTS_Base_Types_Character_Payload(t_26);
    RTS_Base_Types_Character_Payload_apply(SF &t_26, t_27);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_26));
  }

  sfUpdateLoc(29);
  {
    DeclNewString(t_29);
    RTS_Base_Types_String_example(SF (String) &t_29);
    DeclNewRTS_Base_Types_String_Payload(t_28);
    RTS_Base_Types_String_Payload_apply(SF &t_28, (String) ((String) &t_29));
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_28));
  }

  sfUpdateLoc(30);
  {
    DeclNewart_Empty(t_30);
    art_Empty_apply(SF &t_30);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_30));
  }
  return Z_C(0);
}