#include <all.h>

// RTS.Cli.RunChoice.Type

B RTS_Cli_RunChoice_Type__eq(RTS_Cli_RunChoice_Type this, RTS_Cli_RunChoice_Type other);
B RTS_Cli_RunChoice_Type__ne(RTS_Cli_RunChoice_Type this, RTS_Cli_RunChoice_Type other);
B RTS_Cli_RunChoice_Type__equiv(RTS_Cli_RunChoice_Type this, RTS_Cli_RunChoice_Type other);
B RTS_Cli_RunChoice_Type__inequiv(RTS_Cli_RunChoice_Type this, RTS_Cli_RunChoice_Type other);
Z RTS_Cli_RunChoice_Type__ordinal(RTS_Cli_RunChoice_Type this);
void RTS_Cli_RunChoice_Type_name_(String result, RTS_Cli_RunChoice_Type this);

void RTS_Cli_RunChoice_Type_byName(STACK_FRAME Option_E8BC07 result, String s) {
  if (String__eq(s, string("Default"))) Type_assign(result, &((struct Some_B8733D) { .type = TSome_B8733D, .value = RTS_Cli_RunChoice_Type_Default }), sizeof(union Option_E8BC07));
  else if (String__eq(s, string("RoundRobin"))) Type_assign(result, &((struct Some_B8733D) { .type = TSome_B8733D, .value = RTS_Cli_RunChoice_Type_RoundRobin }), sizeof(union Option_E8BC07));
  else if (String__eq(s, string("Static"))) Type_assign(result, &((struct Some_B8733D) { .type = TSome_B8733D, .value = RTS_Cli_RunChoice_Type_Static }), sizeof(union Option_E8BC07));
  else if (String__eq(s, string("Legacy"))) Type_assign(result, &((struct Some_B8733D) { .type = TSome_B8733D, .value = RTS_Cli_RunChoice_Type_Legacy }), sizeof(union Option_E8BC07));
  else Type_assign(result, &((struct None_9803C0) { .type = TNone_9803C0 }), sizeof(union Option_E8BC07));
}

void RTS_Cli_RunChoice_Type_byOrdinal(STACK_FRAME Option_E8BC07 result, Z n) {
  switch ((RTS_Cli_RunChoice_Type) n) {
    case RTS_Cli_RunChoice_Type_Default: Type_assign(result, &((struct Some_B8733D) { .type = TSome_B8733D, .value = RTS_Cli_RunChoice_Type_Default }), sizeof(union Option_E8BC07)); return;
    case RTS_Cli_RunChoice_Type_RoundRobin: Type_assign(result, &((struct Some_B8733D) { .type = TSome_B8733D, .value = RTS_Cli_RunChoice_Type_RoundRobin }), sizeof(union Option_E8BC07)); return;
    case RTS_Cli_RunChoice_Type_Static: Type_assign(result, &((struct Some_B8733D) { .type = TSome_B8733D, .value = RTS_Cli_RunChoice_Type_Static }), sizeof(union Option_E8BC07)); return;
    case RTS_Cli_RunChoice_Type_Legacy: Type_assign(result, &((struct Some_B8733D) { .type = TSome_B8733D, .value = RTS_Cli_RunChoice_Type_Legacy }), sizeof(union Option_E8BC07)); return;
    default: Type_assign(result, &((struct None_9803C0) { .type = TNone_9803C0 }), sizeof(union Option_E8BC07)); return;
  }
}

Z RTS_Cli_RunChoice_Type_numOfElements(void) {
  return Z_C(4);
}

void RTS_Cli_RunChoice_Type_cprint(RTS_Cli_RunChoice_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case RTS_Cli_RunChoice_Type_Default: String_cprint(string("Default"), isOut); return;
    case RTS_Cli_RunChoice_Type_RoundRobin: String_cprint(string("RoundRobin"), isOut); return;
    case RTS_Cli_RunChoice_Type_Static: String_cprint(string("Static"), isOut); return;
    case RTS_Cli_RunChoice_Type_Legacy: String_cprint(string("Legacy"), isOut); return;
  }
  #endif
}

void RTS_Cli_RunChoice_Type_string_(STACK_FRAME String result, RTS_Cli_RunChoice_Type this) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS_Cli_RunChoice_Type", "string", 0);
  switch (this) {
    case RTS_Cli_RunChoice_Type_Default: String_string_(SF result, string("Default")); return;
    case RTS_Cli_RunChoice_Type_RoundRobin: String_string_(SF result, string("RoundRobin")); return;
    case RTS_Cli_RunChoice_Type_Static: String_string_(SF result, string("Static")); return;
    case RTS_Cli_RunChoice_Type_Legacy: String_string_(SF result, string("Legacy")); return;
  }
}