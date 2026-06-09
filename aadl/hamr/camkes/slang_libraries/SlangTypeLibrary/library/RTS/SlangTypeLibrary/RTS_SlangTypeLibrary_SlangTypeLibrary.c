#include <all.h>

Unit RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "SlangTypeLibrary.scala", "RTS.SlangTypeLibrary.SlangTypeLibrary.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(15);
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

  sfUpdateLoc(17);
  {
    B t_1 = RTS_Base_Types_Boolean_example(SF_LAST);
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, t_1);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(18);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    RTS_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}