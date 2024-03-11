#include <all.h>

Unit RTS_TranspilerUtil_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "Arch.scala", "RTS.TranspilerUtil.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(394);
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

Unit RTS_TranspilerUtil_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Arch.scala", "RTS.TranspilerUtil", "touch", 0);

  sfUpdateLoc(368);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(369);
    {
      RTS_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(372);
    DeclNewMBox2_43CC67(_mbox2Boolean_Payload);
    MBox2_43CC67 mbox2Boolean_Payload = (MBox2_43CC67) &_mbox2Boolean_Payload;
    {
      DeclNewRTS_Base_Types_Boolean_Payload(t_2);
      RTS_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_43CC67(t_1);
      MBox2_43CC67_apply(SF &t_1, art_Art_PortId_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_43CC67));
    }

    sfUpdateLoc(373);
    DeclNewMBox2_37E193(_mbox2OptionDataContent);
    MBox2_37E193 mbox2OptionDataContent = (MBox2_37E193) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_37E193(t_3);
      MBox2_37E193_apply(SF &t_3, art_Art_PortId_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_37E193));
    }

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(376);
    {
      RTS_ProcessorTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_rts_processor_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(377);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_instrumentationMock_instrumentationMockThread_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(378);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_eventControlMock_eventControlMockThread_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(379);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuatorsMock_actuatorsMockThread_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(380);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(381);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(382);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(383);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(384);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(385);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(386);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(387);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(388);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(389);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(390);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(391);
    {
      RTS_ThreadTimingProperties_cprint(RTS_Schedulers_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    sfUpdateLoc(396);
    {
      B t_6 = RTS_Base_Types_Boolean_example(SF_LAST);
      DeclNewRTS_Base_Types_Boolean_Payload(t_5);
      RTS_Base_Types_Boolean_Payload_apply(SF &t_5, t_6);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(397);
    {
      Z t_8 = RTS_Base_Types_Integer_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_Payload(t_7);
      RTS_Base_Types_Integer_Payload_apply(SF &t_7, t_8);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(398);
    {
      S8 t_10 = RTS_Base_Types_Integer_8_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_8_Payload(t_9);
      RTS_Base_Types_Integer_8_Payload_apply(SF &t_9, t_10);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_9));
    }

    sfUpdateLoc(399);
    {
      S16 t_12 = RTS_Base_Types_Integer_16_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_16_Payload(t_11);
      RTS_Base_Types_Integer_16_Payload_apply(SF &t_11, t_12);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_11));
    }

    sfUpdateLoc(400);
    {
      S32 t_14 = RTS_Base_Types_Integer_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_32_Payload(t_13);
      RTS_Base_Types_Integer_32_Payload_apply(SF &t_13, t_14);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_13));
    }

    sfUpdateLoc(401);
    {
      S64 t_16 = RTS_Base_Types_Integer_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_64_Payload(t_15);
      RTS_Base_Types_Integer_64_Payload_apply(SF &t_15, t_16);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_15));
    }

    sfUpdateLoc(402);
    {
      U8 t_18 = RTS_Base_Types_Unsigned_8_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_8_Payload(t_17);
      RTS_Base_Types_Unsigned_8_Payload_apply(SF &t_17, t_18);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_17));
    }

    sfUpdateLoc(403);
    {
      U16 t_20 = RTS_Base_Types_Unsigned_16_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_16_Payload(t_19);
      RTS_Base_Types_Unsigned_16_Payload_apply(SF &t_19, t_20);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_19));
    }

    sfUpdateLoc(404);
    {
      U32 t_22 = RTS_Base_Types_Unsigned_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_32_Payload(t_21);
      RTS_Base_Types_Unsigned_32_Payload_apply(SF &t_21, t_22);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_21));
    }

    sfUpdateLoc(405);
    {
      U64 t_24 = RTS_Base_Types_Unsigned_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_64_Payload(t_23);
      RTS_Base_Types_Unsigned_64_Payload_apply(SF &t_23, t_24);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_23));
    }

    sfUpdateLoc(406);
    {
      R t_26 = RTS_Base_Types_Float_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_Payload(t_25);
      RTS_Base_Types_Float_Payload_apply(SF &t_25, t_26);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_25));
    }

    sfUpdateLoc(407);
    {
      F32 t_28 = RTS_Base_Types_Float_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_32_Payload(t_27);
      RTS_Base_Types_Float_32_Payload_apply(SF &t_27, t_28);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_27));
    }

    sfUpdateLoc(408);
    {
      F64 t_30 = RTS_Base_Types_Float_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_64_Payload(t_29);
      RTS_Base_Types_Float_64_Payload_apply(SF &t_29, t_30);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_29));
    }

    sfUpdateLoc(409);
    {
      C t_32 = RTS_Base_Types_Character_example(SF_LAST);
      DeclNewRTS_Base_Types_Character_Payload(t_31);
      RTS_Base_Types_Character_Payload_apply(SF &t_31, t_32);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_31));
    }

    sfUpdateLoc(410);
    {
      DeclNewString(t_34);
      RTS_Base_Types_String_example(SF (String) &t_34);
      DeclNewRTS_Base_Types_String_Payload(t_33);
      RTS_Base_Types_String_Payload_apply(SF &t_33, (String) ((String) &t_34));
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_33));
    }

    sfUpdateLoc(411);
    {
      DeclNewart_Empty(t_35);
      art_Empty_apply(SF &t_35);
      RTS_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_35));
    }
    {

      sfUpdateLoc(414);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_36);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_36, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logInfo_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_36), (String) string(""));
      }

      sfUpdateLoc(415);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_37);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_37, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logDebug_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_37), (String) string(""));
      }

      sfUpdateLoc(416);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_38);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_38, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logError_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_38), (String) string(""));
      }

      sfUpdateLoc(417);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_39);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_39, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logInfo_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_39), (String) string(""));
      }

      sfUpdateLoc(418);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_40);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_40, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logDebug_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_40), (String) string(""));
      }

      sfUpdateLoc(419);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_41);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_41, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logError_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_41), (String) string(""));
      }

      sfUpdateLoc(420);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_42);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_42, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_43 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_42), t_43);
      }

      sfUpdateLoc(421);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_44);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_44, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_45 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_44), t_45);
      }

      sfUpdateLoc(422);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_46);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_46, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_47 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_46), t_47);
      }

      sfUpdateLoc(423);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_48);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_48, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_49 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_48), t_49);
      }

      sfUpdateLoc(424);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_50);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_50, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_51 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_50), t_51);
      }

      sfUpdateLoc(425);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_52);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_52, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_53 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_52), t_53);
      }

      sfUpdateLoc(426);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_54);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_54, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_55 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_54), t_55);
      }

      sfUpdateLoc(427);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_56);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_56, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_57 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_56), t_57);
      }

      sfUpdateLoc(428);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_58);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_58, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_59 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_58), t_59);
      }

      sfUpdateLoc(429);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_60);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_60, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_61 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_60), t_61);
      }

      sfUpdateLoc(430);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_62);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_62, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_63 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_62), t_63);
      }

      sfUpdateLoc(431);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_64);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_64, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_65 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_64), t_65);
      }

      sfUpdateLoc(432);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_66);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_66, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_67 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_66), t_67);
      }

      sfUpdateLoc(433);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_68);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_68, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_69 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_68), t_69);
      }

      sfUpdateLoc(434);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_70);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_70, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_71 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_70), t_71);
      }

      sfUpdateLoc(435);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_72);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_72, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_73 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_72), t_73);
      }

      sfUpdateLoc(436);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_74);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_74, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_75 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_74), t_75);
      }

      sfUpdateLoc(437);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_76);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_76, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_77 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_76), t_77);
      }

      sfUpdateLoc(438);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_78);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_78, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_79 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_78), t_79);
      }

      sfUpdateLoc(439);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_80);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_80, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_81 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_80), t_81);
      }

      sfUpdateLoc(440);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_82);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_82, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_83 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_82), t_83);
      }

      sfUpdateLoc(441);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_84);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_84, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_85 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_84), t_85);
      }

      sfUpdateLoc(442);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_86);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_86, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_87 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_86), t_87);
      }

      sfUpdateLoc(443);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_88);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_88, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_89 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_88), t_89);
      }

      sfUpdateLoc(444);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_90);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_90, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_91 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_90), t_91);
      }

      sfUpdateLoc(445);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_92);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_92, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_93 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_92), t_93);
      }

      sfUpdateLoc(446);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_94);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_94, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_95 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_94), t_95);
      }

      sfUpdateLoc(447);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_96);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_96, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_97 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_96), t_97);
      }

      sfUpdateLoc(448);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_98);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_98, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_99 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_98), t_99);
      }

      sfUpdateLoc(449);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_100);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_100, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_101 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_100), t_101);
      }

      sfUpdateLoc(450);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_102);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_102, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_103 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_102), t_103);
      }

      sfUpdateLoc(451);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_104);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_104, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_105 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_104), t_105);
      }

      sfUpdateLoc(452);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_106);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_106, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_107 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_106), t_107);
      }

      sfUpdateLoc(453);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_108);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_108, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_109 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_108), t_109);
      }

      sfUpdateLoc(454);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_110);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_110, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_111 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_110), t_111);
      }

      sfUpdateLoc(455);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_112);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_112, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_113 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_112), t_113);
      }

      sfUpdateLoc(456);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_114);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_114, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_115 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_114), t_115);
      }

      sfUpdateLoc(457);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_116);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_116, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_117 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_116), t_117);
      }

      sfUpdateLoc(458);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_118);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_118, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_119 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_118), t_119);
      }

      sfUpdateLoc(459);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_120);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_120, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_121 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_120), t_121);
      }

      sfUpdateLoc(460);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_122);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_122, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_123 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_122), t_123);
      }

      sfUpdateLoc(461);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_124);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_124, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_125 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel1_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_124), t_125);
      }

      sfUpdateLoc(462);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_126);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_126, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_127 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_126), t_127);
      }

      sfUpdateLoc(463);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_128);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_128, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_129 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel2_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_128), t_129);
      }

      sfUpdateLoc(464);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_130);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_130, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_131 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_130), t_131);
      }

      sfUpdateLoc(465);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_132);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_132, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_133 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel3_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_132), t_133);
      }

      sfUpdateLoc(466);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_134);
        Option_5CC377_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_134, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_135 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &t_134), t_135);
      }

      sfUpdateLoc(467);
      {
        DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_136);
        Option_A836EB_get_(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_136, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(SF_LAST));
        B t_137 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel4_(SF ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &t_136), t_137);
      }
    }
    {

      sfUpdateLoc(470);
      {
        DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_138);
        Option_06B15F_get_(SF (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_138, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(SF_LAST));
        RTS_EventControl_EventControlMockThread_i_Initialization_Api_logInfo_(SF ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_138), (String) string(""));
      }

      sfUpdateLoc(471);
      {
        DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_139);
        Option_06B15F_get_(SF (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_139, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(SF_LAST));
        RTS_EventControl_EventControlMockThread_i_Initialization_Api_logDebug_(SF ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_139), (String) string(""));
      }

      sfUpdateLoc(472);
      {
        DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_140);
        Option_06B15F_get_(SF (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_140, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(SF_LAST));
        RTS_EventControl_EventControlMockThread_i_Initialization_Api_logError_(SF ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_140), (String) string(""));
      }

      sfUpdateLoc(473);
      {
        DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_141);
        Option_73E809_get_(SF (RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_141, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(SF_LAST));
        RTS_EventControl_EventControlMockThread_i_Operational_Api_logInfo_(SF ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_141), (String) string(""));
      }

      sfUpdateLoc(474);
      {
        DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_142);
        Option_73E809_get_(SF (RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_142, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(SF_LAST));
        RTS_EventControl_EventControlMockThread_i_Operational_Api_logDebug_(SF ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_142), (String) string(""));
      }

      sfUpdateLoc(475);
      {
        DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_143);
        Option_73E809_get_(SF (RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_143, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(SF_LAST));
        RTS_EventControl_EventControlMockThread_i_Operational_Api_logError_(SF ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_143), (String) string(""));
      }

      sfUpdateLoc(476);
      {
        DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_144);
        Option_06B15F_get_(SF (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_144, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_145 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_EventControl_EventControlMockThread_i_Initialization_Api_put_manualActuatorInput1_(SF ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_144), t_145);
      }

      sfUpdateLoc(477);
      {
        DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_146);
        Option_73E809_get_(SF (RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_146, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(SF_LAST));
        B t_147 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_EventControl_EventControlMockThread_i_Operational_Api_put_manualActuatorInput1_(SF ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_146), t_147);
      }

      sfUpdateLoc(478);
      {
        DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_148);
        Option_06B15F_get_(SF (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_148, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(SF_LAST));
        B t_149 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_EventControl_EventControlMockThread_i_Initialization_Api_put_manualActuatorInput2_(SF ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_148), t_149);
      }

      sfUpdateLoc(479);
      {
        DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_150);
        Option_73E809_get_(SF (RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_150, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(SF_LAST));
        B t_151 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_EventControl_EventControlMockThread_i_Operational_Api_put_manualActuatorInput2_(SF ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_150), t_151);
      }
    }
    {

      sfUpdateLoc(482);
      {
        DeclNewRTS_Actuators_ActuatorsMockThread_i_Initialization_Api(t_152);
        Option_638957_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_152, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logInfo_(SF ((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_152), (String) string(""));
      }

      sfUpdateLoc(483);
      {
        DeclNewRTS_Actuators_ActuatorsMockThread_i_Initialization_Api(t_153);
        Option_638957_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_153, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logDebug_(SF ((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_153), (String) string(""));
      }

      sfUpdateLoc(484);
      {
        DeclNewRTS_Actuators_ActuatorsMockThread_i_Initialization_Api(t_154);
        Option_638957_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_154, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logError_(SF ((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_154), (String) string(""));
      }

      sfUpdateLoc(485);
      {
        DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(t_155);
        Option_549EB3_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_155, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_operational_api(SF_LAST));
        RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logInfo_(SF ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_155), (String) string(""));
      }

      sfUpdateLoc(486);
      {
        DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(t_156);
        Option_549EB3_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_156, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_operational_api(SF_LAST));
        RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logDebug_(SF ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_156), (String) string(""));
      }

      sfUpdateLoc(487);
      {
        DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(t_157);
        Option_549EB3_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_157, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_operational_api(SF_LAST));
        RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logError_(SF ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_157), (String) string(""));
      }

      sfUpdateLoc(488);
      Option_8F4D4C apiUsage_tempPressureActuate;
      DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(t_158);
      Option_549EB3_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_158, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_159);
      RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_tempPressureActuate_(SF (Option_8F4D4C) &t_159, ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_158));
      apiUsage_tempPressureActuate = (Option_8F4D4C) ((Option_8F4D4C) &t_159);

      sfUpdateLoc(489);
      Option_8F4D4C apiUsage_saturationActuate;
      DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(t_160);
      Option_549EB3_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_160, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_161);
      RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_saturationActuate_(SF (Option_8F4D4C) &t_161, ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_160));
      apiUsage_saturationActuate = (Option_8F4D4C) ((Option_8F4D4C) &t_161);
    }
    {

      sfUpdateLoc(492);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_162);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_162, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_162), (String) string(""));
      }

      sfUpdateLoc(493);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_163);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_163, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_163), (String) string(""));
      }

      sfUpdateLoc(494);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_164);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_164, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_164), (String) string(""));
      }

      sfUpdateLoc(495);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_165);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_165, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_165), (String) string(""));
      }

      sfUpdateLoc(496);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_166);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_166, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_166), (String) string(""));
      }

      sfUpdateLoc(497);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_167);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_167, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_167), (String) string(""));
      }

      sfUpdateLoc(498);
      Option_8F4D4C apiUsage_channel1;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_168);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_168, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_169);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_169, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_168));
      apiUsage_channel1 = (Option_8F4D4C) ((Option_8F4D4C) &t_169);

      sfUpdateLoc(499);
      Option_8F4D4C apiUsage_channel2;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_170);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_170, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_171);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_171, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_170));
      apiUsage_channel2 = (Option_8F4D4C) ((Option_8F4D4C) &t_171);

      sfUpdateLoc(500);
      Option_8F4D4C apiUsage_channel3;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_172);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_172, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_173);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_(SF (Option_8F4D4C) &t_173, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_172));
      apiUsage_channel3 = (Option_8F4D4C) ((Option_8F4D4C) &t_173);

      sfUpdateLoc(501);
      Option_8F4D4C apiUsage_channel4;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_174);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_174, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_175);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_(SF (Option_8F4D4C) &t_175, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_174));
      apiUsage_channel4 = (Option_8F4D4C) ((Option_8F4D4C) &t_175);

      sfUpdateLoc(502);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_176);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_176, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        B t_177 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_176), t_177);
      }

      sfUpdateLoc(503);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_178);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_178, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        B t_179 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_178), t_179);
      }
    }
    {

      sfUpdateLoc(506);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_180);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_180, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_180), (String) string(""));
      }

      sfUpdateLoc(507);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_181);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_181, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_181), (String) string(""));
      }

      sfUpdateLoc(508);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_182);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_182, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_182), (String) string(""));
      }

      sfUpdateLoc(509);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_183);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_183, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_183), (String) string(""));
      }

      sfUpdateLoc(510);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_184);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_184, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_184), (String) string(""));
      }

      sfUpdateLoc(511);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_185);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_185, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_185), (String) string(""));
      }

      sfUpdateLoc(512);
      Option_8F4D4C apiUsage_channel1;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_186);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_186, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_187);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_187, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_186));
      apiUsage_channel1 = (Option_8F4D4C) ((Option_8F4D4C) &t_187);

      sfUpdateLoc(513);
      Option_8F4D4C apiUsage_channel2;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_188);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_188, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_189);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_189, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_188));
      apiUsage_channel2 = (Option_8F4D4C) ((Option_8F4D4C) &t_189);

      sfUpdateLoc(514);
      Option_8F4D4C apiUsage_channel3;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_190);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_190, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_191);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_(SF (Option_8F4D4C) &t_191, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_190));
      apiUsage_channel3 = (Option_8F4D4C) ((Option_8F4D4C) &t_191);

      sfUpdateLoc(515);
      Option_8F4D4C apiUsage_channel4;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_192);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_192, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_193);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_(SF (Option_8F4D4C) &t_193, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_192));
      apiUsage_channel4 = (Option_8F4D4C) ((Option_8F4D4C) &t_193);

      sfUpdateLoc(516);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_194);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_194, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        B t_195 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_194), t_195);
      }

      sfUpdateLoc(517);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_196);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_196, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        B t_197 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_196), t_197);
      }
    }
    {

      sfUpdateLoc(520);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_198);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_198, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_198), (String) string(""));
      }

      sfUpdateLoc(521);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_199);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_199, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_199), (String) string(""));
      }

      sfUpdateLoc(522);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_200);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_200, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_200), (String) string(""));
      }

      sfUpdateLoc(523);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_201);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_201, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_201), (String) string(""));
      }

      sfUpdateLoc(524);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_202);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_202, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_202), (String) string(""));
      }

      sfUpdateLoc(525);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_203);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_203, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_203), (String) string(""));
      }

      sfUpdateLoc(526);
      Option_8F4D4C apiUsage_channel1;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_204);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_204, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_205);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_205, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_204));
      apiUsage_channel1 = (Option_8F4D4C) ((Option_8F4D4C) &t_205);

      sfUpdateLoc(527);
      Option_8F4D4C apiUsage_channel2;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_206);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_206, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_207);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_207, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_206));
      apiUsage_channel2 = (Option_8F4D4C) ((Option_8F4D4C) &t_207);

      sfUpdateLoc(528);
      Option_8F4D4C apiUsage_channel3;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_208);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_208, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_209);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_(SF (Option_8F4D4C) &t_209, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_208));
      apiUsage_channel3 = (Option_8F4D4C) ((Option_8F4D4C) &t_209);

      sfUpdateLoc(529);
      Option_8F4D4C apiUsage_channel4;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_210);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_210, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_211);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_(SF (Option_8F4D4C) &t_211, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_210));
      apiUsage_channel4 = (Option_8F4D4C) ((Option_8F4D4C) &t_211);

      sfUpdateLoc(530);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_212);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_212, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        B t_213 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_212), t_213);
      }

      sfUpdateLoc(531);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_214);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_214, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        B t_215 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_214), t_215);
      }
    }
    {

      sfUpdateLoc(534);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_216);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_216, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_216), (String) string(""));
      }

      sfUpdateLoc(535);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_217);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_217, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_217), (String) string(""));
      }

      sfUpdateLoc(536);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_218);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_218, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logError_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_218), (String) string(""));
      }

      sfUpdateLoc(537);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_219);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_219, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logInfo_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_219), (String) string(""));
      }

      sfUpdateLoc(538);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_220);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_220, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logDebug_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_220), (String) string(""));
      }

      sfUpdateLoc(539);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_221);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_221, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logError_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_221), (String) string(""));
      }

      sfUpdateLoc(540);
      Option_8F4D4C apiUsage_channel1;
      DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_222);
      Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_222, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_223);
      RTS_Actuation_OrLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_223, ((RTS_Actuation_OrLogic_i_Operational_Api) &t_222));
      apiUsage_channel1 = (Option_8F4D4C) ((Option_8F4D4C) &t_223);

      sfUpdateLoc(541);
      Option_8F4D4C apiUsage_channel2;
      DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_224);
      Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_224, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_225);
      RTS_Actuation_OrLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_225, ((RTS_Actuation_OrLogic_i_Operational_Api) &t_224));
      apiUsage_channel2 = (Option_8F4D4C) ((Option_8F4D4C) &t_225);

      sfUpdateLoc(542);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_226);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_226, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_c_initialization_api(SF_LAST));
        B t_227 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_OrLogic_i_Initialization_Api_put_actuate_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_226), t_227);
      }

      sfUpdateLoc(543);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_228);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_228, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
        B t_229 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_OrLogic_i_Operational_Api_put_actuate_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_228), t_229);
      }
    }
    {

      sfUpdateLoc(546);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_230);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_230, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_230), (String) string(""));
      }

      sfUpdateLoc(547);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_231);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_231, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_231), (String) string(""));
      }

      sfUpdateLoc(548);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_232);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_232, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_232), (String) string(""));
      }

      sfUpdateLoc(549);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_233);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_233, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_233), (String) string(""));
      }

      sfUpdateLoc(550);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_234);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_234, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_234), (String) string(""));
      }

      sfUpdateLoc(551);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_235);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_235, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_235), (String) string(""));
      }

      sfUpdateLoc(552);
      Option_8F4D4C apiUsage_channel1;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_236);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_236, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_237);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_237, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_236));
      apiUsage_channel1 = (Option_8F4D4C) ((Option_8F4D4C) &t_237);

      sfUpdateLoc(553);
      Option_8F4D4C apiUsage_channel2;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_238);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_238, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_239);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_239, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_238));
      apiUsage_channel2 = (Option_8F4D4C) ((Option_8F4D4C) &t_239);

      sfUpdateLoc(554);
      Option_8F4D4C apiUsage_channel3;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_240);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_240, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_241);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_(SF (Option_8F4D4C) &t_241, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_240));
      apiUsage_channel3 = (Option_8F4D4C) ((Option_8F4D4C) &t_241);

      sfUpdateLoc(555);
      Option_8F4D4C apiUsage_channel4;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_242);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_242, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_243);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_(SF (Option_8F4D4C) &t_243, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_242));
      apiUsage_channel4 = (Option_8F4D4C) ((Option_8F4D4C) &t_243);

      sfUpdateLoc(556);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_244);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_244, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        B t_245 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_244), t_245);
      }

      sfUpdateLoc(557);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_246);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_246, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        B t_247 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_246), t_247);
      }
    }
    {

      sfUpdateLoc(560);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_248);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_248, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_248), (String) string(""));
      }

      sfUpdateLoc(561);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_249);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_249, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_249), (String) string(""));
      }

      sfUpdateLoc(562);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_250);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_250, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_250), (String) string(""));
      }

      sfUpdateLoc(563);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_251);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_251, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_251), (String) string(""));
      }

      sfUpdateLoc(564);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_252);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_252, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_252), (String) string(""));
      }

      sfUpdateLoc(565);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_253);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_253, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_253), (String) string(""));
      }

      sfUpdateLoc(566);
      Option_8F4D4C apiUsage_channel1;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_254);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_254, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_255);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_255, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_254));
      apiUsage_channel1 = (Option_8F4D4C) ((Option_8F4D4C) &t_255);

      sfUpdateLoc(567);
      Option_8F4D4C apiUsage_channel2;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_256);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_256, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_257);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_257, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_256));
      apiUsage_channel2 = (Option_8F4D4C) ((Option_8F4D4C) &t_257);

      sfUpdateLoc(568);
      Option_8F4D4C apiUsage_channel3;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_258);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_258, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_259);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_(SF (Option_8F4D4C) &t_259, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_258));
      apiUsage_channel3 = (Option_8F4D4C) ((Option_8F4D4C) &t_259);

      sfUpdateLoc(569);
      Option_8F4D4C apiUsage_channel4;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_260);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_260, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_261);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_(SF (Option_8F4D4C) &t_261, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_260));
      apiUsage_channel4 = (Option_8F4D4C) ((Option_8F4D4C) &t_261);

      sfUpdateLoc(570);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_262);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_262, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        B t_263 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_262), t_263);
      }

      sfUpdateLoc(571);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_264);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_264, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        B t_265 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_264), t_265);
      }
    }
    {

      sfUpdateLoc(574);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_266);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_266, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_266), (String) string(""));
      }

      sfUpdateLoc(575);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_267);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_267, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_267), (String) string(""));
      }

      sfUpdateLoc(576);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_268);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_268, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_268), (String) string(""));
      }

      sfUpdateLoc(577);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_269);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_269, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logInfo_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_269), (String) string(""));
      }

      sfUpdateLoc(578);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_270);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_270, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logDebug_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_270), (String) string(""));
      }

      sfUpdateLoc(579);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_271);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_271, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_logError_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_271), (String) string(""));
      }

      sfUpdateLoc(580);
      Option_8F4D4C apiUsage_channel1;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_272);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_272, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_273);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_273, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_272));
      apiUsage_channel1 = (Option_8F4D4C) ((Option_8F4D4C) &t_273);

      sfUpdateLoc(581);
      Option_8F4D4C apiUsage_channel2;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_274);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_274, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_275);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_275, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_274));
      apiUsage_channel2 = (Option_8F4D4C) ((Option_8F4D4C) &t_275);

      sfUpdateLoc(582);
      Option_8F4D4C apiUsage_channel3;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_276);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_276, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_277);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_(SF (Option_8F4D4C) &t_277, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_276));
      apiUsage_channel3 = (Option_8F4D4C) ((Option_8F4D4C) &t_277);

      sfUpdateLoc(583);
      Option_8F4D4C apiUsage_channel4;
      DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_278);
      Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_278, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_279);
      RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_(SF (Option_8F4D4C) &t_279, ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_278));
      apiUsage_channel4 = (Option_8F4D4C) ((Option_8F4D4C) &t_279);

      sfUpdateLoc(584);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Initialization_Api(t_280);
        Option_5BBD7F_get_(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_280, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_initialization_api(SF_LAST));
        B t_281 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Initialization_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &t_280), t_281);
      }

      sfUpdateLoc(585);
      {
        DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(t_282);
        Option_80DE21_get_(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_282, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_c_operational_api(SF_LAST));
        B t_283 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_CoincidenceLogic_i_Operational_Api_put_actuate_(SF ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &t_282), t_283);
      }
    }
    {

      sfUpdateLoc(588);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_284);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_284, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_284), (String) string(""));
      }

      sfUpdateLoc(589);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_285);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_285, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_285), (String) string(""));
      }

      sfUpdateLoc(590);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_286);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_286, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logError_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_286), (String) string(""));
      }

      sfUpdateLoc(591);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_287);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_287, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logInfo_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_287), (String) string(""));
      }

      sfUpdateLoc(592);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_288);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_288, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logDebug_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_288), (String) string(""));
      }

      sfUpdateLoc(593);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_289);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_289, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logError_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_289), (String) string(""));
      }

      sfUpdateLoc(594);
      Option_8F4D4C apiUsage_channel1;
      DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_290);
      Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_290, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_291);
      RTS_Actuation_OrLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_291, ((RTS_Actuation_OrLogic_i_Operational_Api) &t_290));
      apiUsage_channel1 = (Option_8F4D4C) ((Option_8F4D4C) &t_291);

      sfUpdateLoc(595);
      Option_8F4D4C apiUsage_channel2;
      DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_292);
      Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_292, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_293);
      RTS_Actuation_OrLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_293, ((RTS_Actuation_OrLogic_i_Operational_Api) &t_292));
      apiUsage_channel2 = (Option_8F4D4C) ((Option_8F4D4C) &t_293);

      sfUpdateLoc(596);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_294);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_294, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_c_initialization_api(SF_LAST));
        B t_295 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_OrLogic_i_Initialization_Api_put_actuate_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_294), t_295);
      }

      sfUpdateLoc(597);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_296);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_296, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_c_operational_api(SF_LAST));
        B t_297 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_OrLogic_i_Operational_Api_put_actuate_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_296), t_297);
      }
    }
    {

      sfUpdateLoc(600);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_298);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_298, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_298), (String) string(""));
      }

      sfUpdateLoc(601);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_299);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_299, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_299), (String) string(""));
      }

      sfUpdateLoc(602);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_300);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_300, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logError_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_300), (String) string(""));
      }

      sfUpdateLoc(603);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_301);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_301, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logInfo_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_301), (String) string(""));
      }

      sfUpdateLoc(604);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_302);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_302, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logDebug_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_302), (String) string(""));
      }

      sfUpdateLoc(605);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_303);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_303, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logError_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_303), (String) string(""));
      }

      sfUpdateLoc(606);
      Option_8F4D4C apiUsage_channel1;
      DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_304);
      Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_304, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_305);
      RTS_Actuation_OrLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_305, ((RTS_Actuation_OrLogic_i_Operational_Api) &t_304));
      apiUsage_channel1 = (Option_8F4D4C) ((Option_8F4D4C) &t_305);

      sfUpdateLoc(607);
      Option_8F4D4C apiUsage_channel2;
      DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_306);
      Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_306, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_307);
      RTS_Actuation_OrLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_307, ((RTS_Actuation_OrLogic_i_Operational_Api) &t_306));
      apiUsage_channel2 = (Option_8F4D4C) ((Option_8F4D4C) &t_307);

      sfUpdateLoc(608);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_308);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_308, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_c_initialization_api(SF_LAST));
        B t_309 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_OrLogic_i_Initialization_Api_put_actuate_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_308), t_309);
      }

      sfUpdateLoc(609);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_310);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_310, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_c_operational_api(SF_LAST));
        B t_311 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_OrLogic_i_Operational_Api_put_actuate_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_310), t_311);
      }
    }
    {

      sfUpdateLoc(612);
      {
        DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_312);
        Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_312, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_Actuator_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_312), (String) string(""));
      }

      sfUpdateLoc(613);
      {
        DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_313);
        Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_313, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_Actuator_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_313), (String) string(""));
      }

      sfUpdateLoc(614);
      {
        DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_314);
        Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_314, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_Actuator_i_Initialization_Api_logError_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_314), (String) string(""));
      }

      sfUpdateLoc(615);
      {
        DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_315);
        Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_315, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_Actuator_i_Operational_Api_logInfo_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_315), (String) string(""));
      }

      sfUpdateLoc(616);
      {
        DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_316);
        Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_316, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_Actuator_i_Operational_Api_logDebug_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_316), (String) string(""));
      }

      sfUpdateLoc(617);
      {
        DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_317);
        Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_317, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_Actuator_i_Operational_Api_logError_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_317), (String) string(""));
      }

      sfUpdateLoc(618);
      Option_8F4D4C apiUsage_input;
      DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_318);
      Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_318, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_319);
      RTS_Actuation_Actuator_i_Operational_Api_get_input_(SF (Option_8F4D4C) &t_319, ((RTS_Actuation_Actuator_i_Operational_Api) &t_318));
      apiUsage_input = (Option_8F4D4C) ((Option_8F4D4C) &t_319);

      sfUpdateLoc(619);
      Option_8F4D4C apiUsage_manualActuatorInput;
      DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_320);
      Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_320, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_321);
      RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_(SF (Option_8F4D4C) &t_321, ((RTS_Actuation_Actuator_i_Operational_Api) &t_320));
      apiUsage_manualActuatorInput = (Option_8F4D4C) ((Option_8F4D4C) &t_321);

      sfUpdateLoc(620);
      {
        DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_322);
        Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_322, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_c_initialization_api(SF_LAST));
        B t_323 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_Actuator_i_Initialization_Api_put_output_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_322), t_323);
      }

      sfUpdateLoc(621);
      {
        DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_324);
        Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_324, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_c_operational_api(SF_LAST));
        B t_325 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_Actuator_i_Operational_Api_put_output_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_324), t_325);
      }
    }
    {

      sfUpdateLoc(624);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_326);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_326, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_326), (String) string(""));
      }

      sfUpdateLoc(625);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_327);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_327, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_327), (String) string(""));
      }

      sfUpdateLoc(626);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_328);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_328, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Initialization_Api_logError_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_328), (String) string(""));
      }

      sfUpdateLoc(627);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_329);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_329, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logInfo_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_329), (String) string(""));
      }

      sfUpdateLoc(628);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_330);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_330, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logDebug_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_330), (String) string(""));
      }

      sfUpdateLoc(629);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_331);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_331, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_OrLogic_i_Operational_Api_logError_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_331), (String) string(""));
      }

      sfUpdateLoc(630);
      Option_8F4D4C apiUsage_channel1;
      DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_332);
      Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_332, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_333);
      RTS_Actuation_OrLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_333, ((RTS_Actuation_OrLogic_i_Operational_Api) &t_332));
      apiUsage_channel1 = (Option_8F4D4C) ((Option_8F4D4C) &t_333);

      sfUpdateLoc(631);
      Option_8F4D4C apiUsage_channel2;
      DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_334);
      Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_334, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_335);
      RTS_Actuation_OrLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_335, ((RTS_Actuation_OrLogic_i_Operational_Api) &t_334));
      apiUsage_channel2 = (Option_8F4D4C) ((Option_8F4D4C) &t_335);

      sfUpdateLoc(632);
      {
        DeclNewRTS_Actuation_OrLogic_i_Initialization_Api(t_336);
        Option_1C3ADA_get_(SF (RTS_Actuation_OrLogic_i_Initialization_Api) &t_336, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_c_initialization_api(SF_LAST));
        B t_337 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_OrLogic_i_Initialization_Api_put_actuate_(SF ((RTS_Actuation_OrLogic_i_Initialization_Api) &t_336), t_337);
      }

      sfUpdateLoc(633);
      {
        DeclNewRTS_Actuation_OrLogic_i_Operational_Api(t_338);
        Option_E142FF_get_(SF (RTS_Actuation_OrLogic_i_Operational_Api) &t_338, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_c_operational_api(SF_LAST));
        B t_339 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_OrLogic_i_Operational_Api_put_actuate_(SF ((RTS_Actuation_OrLogic_i_Operational_Api) &t_338), t_339);
      }
    }
    {

      sfUpdateLoc(636);
      {
        DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_340);
        Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_340, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_Actuator_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_340), (String) string(""));
      }

      sfUpdateLoc(637);
      {
        DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_341);
        Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_341, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_Actuator_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_341), (String) string(""));
      }

      sfUpdateLoc(638);
      {
        DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_342);
        Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_342, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api(SF_LAST));
        RTS_Actuation_Actuator_i_Initialization_Api_logError_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_342), (String) string(""));
      }

      sfUpdateLoc(639);
      {
        DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_343);
        Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_343, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_Actuator_i_Operational_Api_logInfo_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_343), (String) string(""));
      }

      sfUpdateLoc(640);
      {
        DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_344);
        Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_344, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_Actuator_i_Operational_Api_logDebug_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_344), (String) string(""));
      }

      sfUpdateLoc(641);
      {
        DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_345);
        Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_345, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
        RTS_Actuation_Actuator_i_Operational_Api_logError_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_345), (String) string(""));
      }

      sfUpdateLoc(642);
      Option_8F4D4C apiUsage_input;
      DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_346);
      Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_346, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_347);
      RTS_Actuation_Actuator_i_Operational_Api_get_input_(SF (Option_8F4D4C) &t_347, ((RTS_Actuation_Actuator_i_Operational_Api) &t_346));
      apiUsage_input = (Option_8F4D4C) ((Option_8F4D4C) &t_347);

      sfUpdateLoc(643);
      Option_8F4D4C apiUsage_manualActuatorInput;
      DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_348);
      Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_348, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_8F4D4C(t_349);
      RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_(SF (Option_8F4D4C) &t_349, ((RTS_Actuation_Actuator_i_Operational_Api) &t_348));
      apiUsage_manualActuatorInput = (Option_8F4D4C) ((Option_8F4D4C) &t_349);

      sfUpdateLoc(644);
      {
        DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_350);
        Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_350, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api(SF_LAST));
        B t_351 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_Actuator_i_Initialization_Api_put_output_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_350), t_351);
      }

      sfUpdateLoc(645);
      {
        DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_352);
        Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_352, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
        B t_353 = RTS_Base_Types_Boolean_example(SF_LAST);
        RTS_Actuation_Actuator_i_Operational_Api_put_output_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_352), t_353);
      }
    }
  }
}