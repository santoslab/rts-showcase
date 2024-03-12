#include <all.h>

B Type__eq(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TIS_948B60: return IS_948B60__eq((IS_948B60) t1, (IS_948B60) t2);
    case TRTS_Base_Types_Boolean_Payload: return RTS_Base_Types_Boolean_Payload__eq((RTS_Base_Types_Boolean_Payload) t1, (RTS_Base_Types_Boolean_Payload) t2);
    case TRTS_Base_Types_Character_Payload: return RTS_Base_Types_Character_Payload__eq((RTS_Base_Types_Character_Payload) t1, (RTS_Base_Types_Character_Payload) t2);
    case TRTS_Base_Types_Float_32_Payload: return RTS_Base_Types_Float_32_Payload__eq((RTS_Base_Types_Float_32_Payload) t1, (RTS_Base_Types_Float_32_Payload) t2);
    case TRTS_Base_Types_Float_64_Payload: return RTS_Base_Types_Float_64_Payload__eq((RTS_Base_Types_Float_64_Payload) t1, (RTS_Base_Types_Float_64_Payload) t2);
    case TRTS_Base_Types_Float_Payload: return RTS_Base_Types_Float_Payload__eq((RTS_Base_Types_Float_Payload) t1, (RTS_Base_Types_Float_Payload) t2);
    case TRTS_Base_Types_Integer_16_Payload: return RTS_Base_Types_Integer_16_Payload__eq((RTS_Base_Types_Integer_16_Payload) t1, (RTS_Base_Types_Integer_16_Payload) t2);
    case TRTS_Base_Types_Integer_32_Payload: return RTS_Base_Types_Integer_32_Payload__eq((RTS_Base_Types_Integer_32_Payload) t1, (RTS_Base_Types_Integer_32_Payload) t2);
    case TRTS_Base_Types_Integer_64_Payload: return RTS_Base_Types_Integer_64_Payload__eq((RTS_Base_Types_Integer_64_Payload) t1, (RTS_Base_Types_Integer_64_Payload) t2);
    case TRTS_Base_Types_Integer_8_Payload: return RTS_Base_Types_Integer_8_Payload__eq((RTS_Base_Types_Integer_8_Payload) t1, (RTS_Base_Types_Integer_8_Payload) t2);
    case TRTS_Base_Types_Integer_Payload: return RTS_Base_Types_Integer_Payload__eq((RTS_Base_Types_Integer_Payload) t1, (RTS_Base_Types_Integer_Payload) t2);
    case TRTS_Base_Types_String_Payload: return RTS_Base_Types_String_Payload__eq((RTS_Base_Types_String_Payload) t1, (RTS_Base_Types_String_Payload) t2);
    case TRTS_Base_Types_Unsigned_16_Payload: return RTS_Base_Types_Unsigned_16_Payload__eq((RTS_Base_Types_Unsigned_16_Payload) t1, (RTS_Base_Types_Unsigned_16_Payload) t2);
    case TRTS_Base_Types_Unsigned_32_Payload: return RTS_Base_Types_Unsigned_32_Payload__eq((RTS_Base_Types_Unsigned_32_Payload) t1, (RTS_Base_Types_Unsigned_32_Payload) t2);
    case TRTS_Base_Types_Unsigned_64_Payload: return RTS_Base_Types_Unsigned_64_Payload__eq((RTS_Base_Types_Unsigned_64_Payload) t1, (RTS_Base_Types_Unsigned_64_Payload) t2);
    case TRTS_Base_Types_Unsigned_8_Payload: return RTS_Base_Types_Unsigned_8_Payload__eq((RTS_Base_Types_Unsigned_8_Payload) t1, (RTS_Base_Types_Unsigned_8_Payload) t2);
    case TString: return String__eq((String) t1, (String) t2);
    case Tart_Empty: return art_Empty__eq((art_Empty) t1, (art_Empty) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

B Type__equiv(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TIS_948B60: return IS_948B60__equiv((IS_948B60) t1, (IS_948B60) t2);
    case TRTS_Base_Types_Boolean_Payload: return RTS_Base_Types_Boolean_Payload__equiv((RTS_Base_Types_Boolean_Payload) t1, (RTS_Base_Types_Boolean_Payload) t2);
    case TRTS_Base_Types_Character_Payload: return RTS_Base_Types_Character_Payload__equiv((RTS_Base_Types_Character_Payload) t1, (RTS_Base_Types_Character_Payload) t2);
    case TRTS_Base_Types_Float_32_Payload: return RTS_Base_Types_Float_32_Payload__equiv((RTS_Base_Types_Float_32_Payload) t1, (RTS_Base_Types_Float_32_Payload) t2);
    case TRTS_Base_Types_Float_64_Payload: return RTS_Base_Types_Float_64_Payload__equiv((RTS_Base_Types_Float_64_Payload) t1, (RTS_Base_Types_Float_64_Payload) t2);
    case TRTS_Base_Types_Float_Payload: return RTS_Base_Types_Float_Payload__equiv((RTS_Base_Types_Float_Payload) t1, (RTS_Base_Types_Float_Payload) t2);
    case TRTS_Base_Types_Integer_16_Payload: return RTS_Base_Types_Integer_16_Payload__equiv((RTS_Base_Types_Integer_16_Payload) t1, (RTS_Base_Types_Integer_16_Payload) t2);
    case TRTS_Base_Types_Integer_32_Payload: return RTS_Base_Types_Integer_32_Payload__equiv((RTS_Base_Types_Integer_32_Payload) t1, (RTS_Base_Types_Integer_32_Payload) t2);
    case TRTS_Base_Types_Integer_64_Payload: return RTS_Base_Types_Integer_64_Payload__equiv((RTS_Base_Types_Integer_64_Payload) t1, (RTS_Base_Types_Integer_64_Payload) t2);
    case TRTS_Base_Types_Integer_8_Payload: return RTS_Base_Types_Integer_8_Payload__equiv((RTS_Base_Types_Integer_8_Payload) t1, (RTS_Base_Types_Integer_8_Payload) t2);
    case TRTS_Base_Types_Integer_Payload: return RTS_Base_Types_Integer_Payload__equiv((RTS_Base_Types_Integer_Payload) t1, (RTS_Base_Types_Integer_Payload) t2);
    case TRTS_Base_Types_String_Payload: return RTS_Base_Types_String_Payload__equiv((RTS_Base_Types_String_Payload) t1, (RTS_Base_Types_String_Payload) t2);
    case TRTS_Base_Types_Unsigned_16_Payload: return RTS_Base_Types_Unsigned_16_Payload__equiv((RTS_Base_Types_Unsigned_16_Payload) t1, (RTS_Base_Types_Unsigned_16_Payload) t2);
    case TRTS_Base_Types_Unsigned_32_Payload: return RTS_Base_Types_Unsigned_32_Payload__equiv((RTS_Base_Types_Unsigned_32_Payload) t1, (RTS_Base_Types_Unsigned_32_Payload) t2);
    case TRTS_Base_Types_Unsigned_64_Payload: return RTS_Base_Types_Unsigned_64_Payload__equiv((RTS_Base_Types_Unsigned_64_Payload) t1, (RTS_Base_Types_Unsigned_64_Payload) t2);
    case TRTS_Base_Types_Unsigned_8_Payload: return RTS_Base_Types_Unsigned_8_Payload__equiv((RTS_Base_Types_Unsigned_8_Payload) t1, (RTS_Base_Types_Unsigned_8_Payload) t2);
    case TString: return String__equiv((String) t1, (String) t2);
    case Tart_Empty: return art_Empty__equiv((art_Empty) t1, (art_Empty) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_cprint(void *this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TIS_948B60: IS_948B60_cprint((IS_948B60) this, isOut); return;
    case TRTS_Base_Types_Boolean_Payload: RTS_Base_Types_Boolean_Payload_cprint((RTS_Base_Types_Boolean_Payload) this, isOut); return;
    case TRTS_Base_Types_Character_Payload: RTS_Base_Types_Character_Payload_cprint((RTS_Base_Types_Character_Payload) this, isOut); return;
    case TRTS_Base_Types_Float_32_Payload: RTS_Base_Types_Float_32_Payload_cprint((RTS_Base_Types_Float_32_Payload) this, isOut); return;
    case TRTS_Base_Types_Float_64_Payload: RTS_Base_Types_Float_64_Payload_cprint((RTS_Base_Types_Float_64_Payload) this, isOut); return;
    case TRTS_Base_Types_Float_Payload: RTS_Base_Types_Float_Payload_cprint((RTS_Base_Types_Float_Payload) this, isOut); return;
    case TRTS_Base_Types_Integer_16_Payload: RTS_Base_Types_Integer_16_Payload_cprint((RTS_Base_Types_Integer_16_Payload) this, isOut); return;
    case TRTS_Base_Types_Integer_32_Payload: RTS_Base_Types_Integer_32_Payload_cprint((RTS_Base_Types_Integer_32_Payload) this, isOut); return;
    case TRTS_Base_Types_Integer_64_Payload: RTS_Base_Types_Integer_64_Payload_cprint((RTS_Base_Types_Integer_64_Payload) this, isOut); return;
    case TRTS_Base_Types_Integer_8_Payload: RTS_Base_Types_Integer_8_Payload_cprint((RTS_Base_Types_Integer_8_Payload) this, isOut); return;
    case TRTS_Base_Types_Integer_Payload: RTS_Base_Types_Integer_Payload_cprint((RTS_Base_Types_Integer_Payload) this, isOut); return;
    case TRTS_Base_Types_String_Payload: RTS_Base_Types_String_Payload_cprint((RTS_Base_Types_String_Payload) this, isOut); return;
    case TRTS_Base_Types_Unsigned_16_Payload: RTS_Base_Types_Unsigned_16_Payload_cprint((RTS_Base_Types_Unsigned_16_Payload) this, isOut); return;
    case TRTS_Base_Types_Unsigned_32_Payload: RTS_Base_Types_Unsigned_32_Payload_cprint((RTS_Base_Types_Unsigned_32_Payload) this, isOut); return;
    case TRTS_Base_Types_Unsigned_64_Payload: RTS_Base_Types_Unsigned_64_Payload_cprint((RTS_Base_Types_Unsigned_64_Payload) this, isOut); return;
    case TRTS_Base_Types_Unsigned_8_Payload: RTS_Base_Types_Unsigned_8_Payload_cprint((RTS_Base_Types_Unsigned_8_Payload) this, isOut); return;
    case TString: String_cprint((String) this, isOut); return;
    case Tart_Empty: art_Empty_cprint((art_Empty) this, isOut); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
  #endif
}

void Type_string_(STACK_FRAME String result, void *this) {
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TIS_948B60: IS_948B60_string_(CALLER result, (IS_948B60) this); return;
    case TRTS_Base_Types_Boolean_Payload: RTS_Base_Types_Boolean_Payload_string_(CALLER result, (RTS_Base_Types_Boolean_Payload) this); return;
    case TRTS_Base_Types_Character_Payload: RTS_Base_Types_Character_Payload_string_(CALLER result, (RTS_Base_Types_Character_Payload) this); return;
    case TRTS_Base_Types_Float_32_Payload: RTS_Base_Types_Float_32_Payload_string_(CALLER result, (RTS_Base_Types_Float_32_Payload) this); return;
    case TRTS_Base_Types_Float_64_Payload: RTS_Base_Types_Float_64_Payload_string_(CALLER result, (RTS_Base_Types_Float_64_Payload) this); return;
    case TRTS_Base_Types_Float_Payload: RTS_Base_Types_Float_Payload_string_(CALLER result, (RTS_Base_Types_Float_Payload) this); return;
    case TRTS_Base_Types_Integer_16_Payload: RTS_Base_Types_Integer_16_Payload_string_(CALLER result, (RTS_Base_Types_Integer_16_Payload) this); return;
    case TRTS_Base_Types_Integer_32_Payload: RTS_Base_Types_Integer_32_Payload_string_(CALLER result, (RTS_Base_Types_Integer_32_Payload) this); return;
    case TRTS_Base_Types_Integer_64_Payload: RTS_Base_Types_Integer_64_Payload_string_(CALLER result, (RTS_Base_Types_Integer_64_Payload) this); return;
    case TRTS_Base_Types_Integer_8_Payload: RTS_Base_Types_Integer_8_Payload_string_(CALLER result, (RTS_Base_Types_Integer_8_Payload) this); return;
    case TRTS_Base_Types_Integer_Payload: RTS_Base_Types_Integer_Payload_string_(CALLER result, (RTS_Base_Types_Integer_Payload) this); return;
    case TRTS_Base_Types_String_Payload: RTS_Base_Types_String_Payload_string_(CALLER result, (RTS_Base_Types_String_Payload) this); return;
    case TRTS_Base_Types_Unsigned_16_Payload: RTS_Base_Types_Unsigned_16_Payload_string_(CALLER result, (RTS_Base_Types_Unsigned_16_Payload) this); return;
    case TRTS_Base_Types_Unsigned_32_Payload: RTS_Base_Types_Unsigned_32_Payload_string_(CALLER result, (RTS_Base_Types_Unsigned_32_Payload) this); return;
    case TRTS_Base_Types_Unsigned_64_Payload: RTS_Base_Types_Unsigned_64_Payload_string_(CALLER result, (RTS_Base_Types_Unsigned_64_Payload) this); return;
    case TRTS_Base_Types_Unsigned_8_Payload: RTS_Base_Types_Unsigned_8_Payload_string_(CALLER result, (RTS_Base_Types_Unsigned_8_Payload) this); return;
    case TString: String_string_(CALLER result, (String) this); return;
    case Tart_Empty: art_Empty_string_(CALLER result, (art_Empty) this); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

