#include <all.h>

// RTS.Cli

B RTS_Cli__eq(RTS_Cli this, RTS_Cli other) {
  if (C__ne(this->pathSep, other->pathSep)) return F;
  return T;
}

B RTS_Cli__equiv(RTS_Cli this, RTS_Cli other) {
  if (C__inequiv(this->pathSep, other->pathSep)) return F;
  return T;
}

B RTS_Cli__ne(RTS_Cli this, RTS_Cli other);
B RTS_Cli__inequiv(RTS_Cli this, RTS_Cli other);

void RTS_Cli_string_(STACK_FRAME String result, RTS_Cli this) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Cli", "string", 0);
  String_string_(SF result, string("Cli("));
  C_string_(SF result, this->pathSep);
  String_string_(SF result, string(")"));
}

void RTS_Cli_cprint(RTS_Cli this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Cli("), isOut);
  C_cprint(this->pathSep, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Cli__is(STACK_FRAME void* this);
RTS_Cli RTS_Cli__as(STACK_FRAME void *this);

void RTS_Cli_apply(STACK_FRAME RTS_Cli this, C pathSep) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Cli", "apply", 0);
  this->pathSep = pathSep;
}

Unit RTS_Cli_help_(STACK_FRAME RTS_Cli this) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Cli.parseRun", "help", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(96);
  {
    String_cprint(string("Run Slang Embedded Program"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(97);
  {
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(98);
  {
    String_cprint(string("Usage: <option>*"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(99);
  {
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(100);
  {
    String_cprint(string("Available Options:"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(101);
  {
    String_cprint(string("-s, --scheduler          The scheduler to use.  See Demo.scala for information"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(102);
  {
    String_cprint(string("                           on \'default\' (expects one of { default, roundRobin,"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(103);
  {
    String_cprint(string("                           static, legacy }; default: default)"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(104);
  {
    String_cprint(string("-h, --help               Display this information"), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

inline B RTS_Cli_parseRun_extract_118_16_E8BC07(STACK_FRAME_SF Option_E8BC07 t_9, RTS_Cli this, RTS_Cli_RunChoice_Type *_v_118_21) {
  if (!Some_B8733D__is(SF t_9)) return F;
  *_v_118_21 = Some_B8733D_value_(Some_B8733D__as(SF t_9));
  return T;
}

inline B RTS_Cli_parseRun_extract_119_16_E8BC07(STACK_FRAME_SF Option_E8BC07 t_9, RTS_Cli this) {
  return T;
}

void RTS_Cli_parseRun_(STACK_FRAME Option_BF489E result, RTS_Cli this, IS_948B60 args, Z i) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Cli", "parseRun", 0);

  sfUpdateLoc(107);
  RTS_Cli_RunChoice_Type scheduler;
  {
    scheduler = RTS_Cli_RunChoice_Type_Default;
  }

  sfUpdateLoc(108);
  Z j;
  {
    j = i;
  }

  sfUpdateLoc(109);
  B isOption;
  {
    isOption = T;
  }

  sfUpdateLoc(110);
  B t_110_5;
  {
    B t_0 = F;
    Z t_1 = IS_948B60_size(SF args);
    if (Z__lt(j, t_1)) {
      t_0 = isOption;
    }
    t_110_5 = t_0;
  }
  while(t_110_5) {

    sfUpdateLoc(111);
    DeclNewString(_arg);
    String arg = (String) &_arg;
    {
      Type_assign(arg, IS_948B60_at(args, j), sizeof(struct StaticString));
    }

    sfUpdateLoc(112);
    B t_2;
    {
      B t_3 = T;
      if (!String__eq(arg, string("-h"))) {
        t_3 = String__eq(arg, string("--help"));
      }
      t_2 = t_3;
    }
    if (t_2) {

      sfUpdateLoc(113);
      {
        RTS_Cli_help_(SF this);
      }
      DeclNewRTS_Cli_HelpOption(t_5);
      RTS_Cli_HelpOption_apply(SF &t_5);
      DeclNewSome_2BC073(t_4);
      Some_2BC073_apply(SF &t_4, (RTS_Cli_RunTopOption) (&t_5));
      Type_assign(result, (&t_4), sizeof(struct Some_2BC073));
      return;
    } else {

      sfUpdateLoc(115);
      B t_6;
      {
        B t_7 = T;
        if (!String__eq(arg, string("-s"))) {
          t_7 = String__eq(arg, string("--scheduler"));
        }
        t_6 = t_7;
      }
      if (t_6) {

        sfUpdateLoc(116);
        Option_E8BC07 o;
        DeclNewOption_E8BC07(t_8);
        RTS_Cli_parseRunChoice_(SF (Option_E8BC07) &t_8, this, (IS_948B60) args, Z__add(j, Z_C(1)));
        o = (Option_E8BC07) ((Option_E8BC07) &t_8);

        sfUpdateLoc(117);
        Option_E8BC07 t_9 = o;
        B match_117_9 = F;
        if (!match_117_9) {
          RTS_Cli_RunChoice_Type v_118_21;
          match_117_9 = RTS_Cli_parseRun_extract_118_16_E8BC07(SF t_9, this, &v_118_21);
          if (match_117_9) {

            sfUpdateLoc(118);
            {
              scheduler = v_118_21;
            }
          }
        }
        if (!match_117_9) {
          match_117_9 = RTS_Cli_parseRun_extract_119_16_E8BC07(SF t_9, this);
          if (match_117_9) {
            DeclNewNone_5F3A7A(t_10);
            None_5F3A7A_apply(SF &t_10);
            Type_assign(result, (&t_10), sizeof(struct None_5F3A7A));
            return;
          }
        }
        sfAssert(match_117_9, "Error when pattern matching.");
      } else {

        #ifndef SIREUM_NO_PRINT

        sfUpdateLoc(122);
        {
          DeclNewString(t_11);
          String_string_(SF (String) &t_11, string("Unrecognized option \'"));
          String_string_(SF (String) &t_11, arg);
          String_string_(SF (String) &t_11, string("\'."));
          String_cprint(((String) &t_11), F);
          cprintln(F);
          cflush(F);
        }

        #endif
        DeclNewNone_5F3A7A(t_12);
        None_5F3A7A_apply(SF &t_12);
        Type_assign(result, (&t_12), sizeof(struct None_5F3A7A));
        return;
      }
    }

    sfUpdateLoc(125);
    {
      j = Z__add(j, Z_C(2));
    }

    sfUpdateLoc(110);
    B t_13 = F;
    Z t_14 = IS_948B60_size(SF args);
    if (Z__lt(j, t_14)) {
      t_13 = isOption;
    }
    t_110_5 = t_13;
  }
  DeclNewRTS_Cli_RunOption(t_16);
  RTS_Cli_RunOption_apply(SF &t_16, (String) string(""), (IS_948B60) args, scheduler);
  DeclNewSome_2BC073(t_15);
  Some_2BC073_apply(SF &t_15, (RTS_Cli_RunTopOption) (&t_16));
  Type_assign(result, (&t_15), sizeof(struct Some_2BC073));
  return;
}

void RTS_Cli_parseRunChoice_(STACK_FRAME Option_E8BC07 result, RTS_Cli this, IS_948B60 args, Z i) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Cli", "parseRunChoice", 0);

  sfUpdateLoc(85);
  B t_0;
  {
    Z t_1 = IS_948B60_size(SF args);
    t_0 = Z__ge(i, t_1);
  }
  if (t_0) {

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(86);
    {
      String_cprint(string("Expecting one of the following: { default, roundRobin, static, legacy }, but none found."), F);
      cprintln(F);
      cflush(F);
    }

    #endif
    DeclNewNone_9803C0(t_2);
    None_9803C0_apply(SF &t_2);
    Type_assign(result, (&t_2), sizeof(struct None_9803C0));
    return;
  }

  sfUpdateLoc(89);
  Option_E8BC07 r;
  DeclNewOption_E8BC07(t_3);
  RTS_Cli_parseRunChoiceH_(SF (Option_E8BC07) &t_3, this, (String) IS_948B60_at(args, i));
  r = (Option_E8BC07) ((Option_E8BC07) &t_3);
  Type_assign(result, r, sizeof(union Option_E8BC07));
  return;
}

inline B RTS_Cli_parseRunChoiceH_extract_74_12(STACK_FRAME_SF String t_0, RTS_Cli this) {
  if (!String__eq((String) t_0, (String) string("default"))) return F;
  return T;
}

inline B RTS_Cli_parseRunChoiceH_extract_75_12(STACK_FRAME_SF String t_0, RTS_Cli this) {
  if (!String__eq((String) t_0, (String) string("roundRobin"))) return F;
  return T;
}

inline B RTS_Cli_parseRunChoiceH_extract_76_12(STACK_FRAME_SF String t_0, RTS_Cli this) {
  if (!String__eq((String) t_0, (String) string("static"))) return F;
  return T;
}

inline B RTS_Cli_parseRunChoiceH_extract_77_12(STACK_FRAME_SF String t_0, RTS_Cli this) {
  if (!String__eq((String) t_0, (String) string("legacy"))) return F;
  return T;
}

inline B RTS_Cli_parseRunChoiceH_extract_78_12(STACK_FRAME_SF String t_0, RTS_Cli this, String *_s_78_12) {
  *_s_78_12 = (String) t_0;
  return T;
}

void RTS_Cli_parseRunChoiceH_(STACK_FRAME Option_E8BC07 result, RTS_Cli this, String arg) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Cli", "parseRunChoiceH", 0);

  sfUpdateLoc(73);
  String t_0 = arg;
  B match_73_5 = F;
  if (!match_73_5) {
    match_73_5 = RTS_Cli_parseRunChoiceH_extract_74_12(SF t_0, this);
    if (match_73_5) {
      DeclNewSome_B8733D(t_1);
      Some_B8733D_apply(SF &t_1, RTS_Cli_RunChoice_Type_Default);
      Type_assign(result, (&t_1), sizeof(struct Some_B8733D));
      return;
    }
  }
  if (!match_73_5) {
    match_73_5 = RTS_Cli_parseRunChoiceH_extract_75_12(SF t_0, this);
    if (match_73_5) {
      DeclNewSome_B8733D(t_2);
      Some_B8733D_apply(SF &t_2, RTS_Cli_RunChoice_Type_RoundRobin);
      Type_assign(result, (&t_2), sizeof(struct Some_B8733D));
      return;
    }
  }
  if (!match_73_5) {
    match_73_5 = RTS_Cli_parseRunChoiceH_extract_76_12(SF t_0, this);
    if (match_73_5) {
      DeclNewSome_B8733D(t_3);
      Some_B8733D_apply(SF &t_3, RTS_Cli_RunChoice_Type_Static);
      Type_assign(result, (&t_3), sizeof(struct Some_B8733D));
      return;
    }
  }
  if (!match_73_5) {
    match_73_5 = RTS_Cli_parseRunChoiceH_extract_77_12(SF t_0, this);
    if (match_73_5) {
      DeclNewSome_B8733D(t_4);
      Some_B8733D_apply(SF &t_4, RTS_Cli_RunChoice_Type_Legacy);
      Type_assign(result, (&t_4), sizeof(struct Some_B8733D));
      return;
    }
  }
  if (!match_73_5) {
    String s_78_12;
    match_73_5 = RTS_Cli_parseRunChoiceH_extract_78_12(SF t_0, this, &s_78_12);
    if (match_73_5) {

      #ifndef SIREUM_NO_PRINT

      sfUpdateLoc(79);
      {
        DeclNewString(t_5);
        String_string_(SF (String) &t_5, string("Expecting one of the following: { default, roundRobin, static, legacy }, but found \'"));
        String_string_(SF (String) &t_5, s_78_12);
        String_string_(SF (String) &t_5, string("\'."));
        String_cprint(((String) &t_5), F);
        cprintln(F);
        cflush(F);
      }

      #endif
      DeclNewNone_9803C0(t_6);
      None_9803C0_apply(SF &t_6);
      Type_assign(result, (&t_6), sizeof(struct None_9803C0));
      return;
    }
  }
  sfAssert(match_73_5, "Error when pattern matching.");
  exit(-1);
}