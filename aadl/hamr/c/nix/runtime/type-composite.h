#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TTuple2_04A4F6 = (int) 0x04A4F611, // ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))
  TTuple2_0862A0 = (int) 0x0862A0C3, // (B, B)
  TTuple12_3FBE62 = (int) 0x3FBE626A, // (B, B, B, B, B, B, B, B, B, B, B, B)
  TTuple2_275908 = (int) 0x27590840, // (String, Option[art.DataContent])
  TTuple2_E0098E = (int) 0xE0098E88, // (String, art.Art.BridgeId)
  TTuple2_A29DBA = (int) 0xA29DBA1D, // (Z, (Z, art.ArtSlangMessage))
  TTuple2_EC3B57 = (int) 0xEC3B577E, // (Z, Z)
  TTuple2_4DFC06 = (int) 0x4DFC0619, // (Z, art.ArtSlangMessage)
  TTuple4_FA9F23 = (int) 0xFA9F2362, // (art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)
  TIS_0C7B5E = (int) 0x0C7B5EA4, // IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))]
  TIS_7DA5C1 = (int) 0x7DA5C138, // IS[Z, (B, B)]
  TIS_39643F = (int) 0x39643F79, // IS[Z, (String, Option[art.DataContent])]
  TIS_588B23 = (int) 0x588B23A8, // IS[Z, (String, art.Art.BridgeId)]
  TIS_4D6DA5 = (int) 0x4D6DA568, // IS[Z, (Z, art.ArtSlangMessage)]
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
  TIS_FDDCB6 = (int) 0xFDDCB640, // IS[Z, art.Art.BridgeId]
  TIS_D10119 = (int) 0xD101198A, // IS[Z, art.Art.PortId]
  TIS_820232 = (int) 0x82023297, // IS[Z, art.UPort]
  TIS_5AA467 = (int) 0x5AA467BD, // IS[Z, art.scheduling.static.Schedule.Slot]
  TIS_058E6F = (int) 0x058E6F62, // IS[art.Art.BridgeId, art.Bridge]
  TIS_7267A0 = (int) 0x7267A010, // IS[art.Art.ConnectionId, art.Art.PortId]
  TIS_996770 = (int) 0x996770A0, // IS[art.Art.ConnectionId, art.UConnection]
  TMBox2_37E193 = (int) 0x37E19307, // MBox2[art.Art.PortId, Option[art.DataContent]]
  TMBox2_43CC67 = (int) 0x43CC672A, // MBox2[art.Art.PortId, art.DataContent]
  TMNone_6579ED = (int) 0x6579EDFC, // MNone[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]
  TMS_83D5EB = (int) 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TMS_A7EF1B = (int) 0xA7EF1BF8, // MS[art.Art.BridgeId, S64]
  TMS_CA6EDB = (int) 0xCA6EDB70, // MS[art.Art.PortId, IS[art.Art.ConnectionId, art.Art.PortId]]
  TMS_9C0286 = (int) 0x9C028657, // MS[art.Art.PortId, Option[art.UPort]]
  TMSome_30C95B = (int) 0x30C95BA2, // MSome[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]
  TMap_EB5A91 = (int) 0xEB5A9191, // Map[String, art.Art.BridgeId]
  TMap_9C6840 = (int) 0x9C684003, // Map[Z, art.ArtSlangMessage]
  TNone_7E20F8 = (int) 0x7E20F899, // None[B]
  TNone_00347F = (int) 0x00347FCF, // None[IS[Z, art.Art.BridgeId]]
  TNone_CFD2B0 = (int) 0xCFD2B0C7, // None[IS[Z, art.Art.PortId]]
  TNone_8BED90 = (int) 0x8BED909B, // None[RTS.Actuation.Actuator_i_Initialization_Api]
  TNone_52D9AF = (int) 0x52D9AF14, // None[RTS.Actuation.Actuator_i_Operational_Api]
  TNone_080F67 = (int) 0x080F6772, // None[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]
  TNone_37A019 = (int) 0x37A019F6, // None[RTS.Actuation.CoincidenceLogic_i_Operational_Api]
  TNone_1FE67C = (int) 0x1FE67CD0, // None[RTS.Actuation.OrLogic_i_Initialization_Api]
  TNone_1AA45D = (int) 0x1AA45D34, // None[RTS.Actuation.OrLogic_i_Operational_Api]
  TNone_8D8A06 = (int) 0x8D8A0642, // None[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]
  TNone_C050C2 = (int) 0xC050C240, // None[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]
  TNone_9803C0 = (int) 0x9803C0EF, // None[RTS.Cli.RunChoice.Type]
  TNone_5F3A7A = (int) 0x5F3A7ADC, // None[RTS.Cli.RunTopOption]
  TNone_2939E3 = (int) 0x2939E362, // None[RTS.EventControl.EventControlMockThread_i_Initialization_Api]
  TNone_1A60DD = (int) 0x1A60DDB5, // None[RTS.EventControl.EventControlMockThread_i_Operational_Api]
  TNone_8D6171 = (int) 0x8D6171E6, // None[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]
  TNone_174952 = (int) 0x174952A7, // None[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]
  TNone_76463B = (int) 0x76463B20, // None[Z]
  TNone_D34309 = (int) 0xD3430918, // None[art.Art.BridgeId]
  TNone_B2694B = (int) 0xB2694B04, // None[art.Art.PortId]
  TNone_50AF88 = (int) 0x50AF8810, // None[art.ArtSlangMessage]
  TNone_734370 = (int) 0x73437068, // None[art.Bridge]
  TNone_964667 = (int) 0x9646678F, // None[art.DataContent]
  TNone_39BC5F = (int) 0x39BC5F5F, // None[art.UPort]
  TNone_336F0A = (int) 0x336F0A5F, // None[art.scheduling.static.Explorer.ScheduleState]
  TRTS_Actuation_Actuator_i_Initialization_Api = (int) 0x02AFC901, // RTS.Actuation.Actuator_i_Initialization_Api
  TRTS_Actuation_Actuator_i_Operational_Api = (int) 0x2068EA72, // RTS.Actuation.Actuator_i_Operational_Api
  TRTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge = (int) 0x334547E6, // RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge
  TRTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints = (int) 0xD661CC81, // RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.EntryPoints
  TRTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge = (int) 0x43F492B0, // RTS.Actuation.Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge
  TRTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_EntryPoints = (int) 0xC716E0D2, // RTS.Actuation.Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge.EntryPoints
  TRTS_Actuation_CoincidenceLogic_i_Initialization_Api = (int) 0x35761A35, // RTS.Actuation.CoincidenceLogic_i_Initialization_Api
  TRTS_Actuation_CoincidenceLogic_i_Operational_Api = (int) 0xFFD88A2E, // RTS.Actuation.CoincidenceLogic_i_Operational_Api
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge = (int) 0x95F84757, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints = (int) 0xB90E62CA, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.EntryPoints
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge = (int) 0x33AA2A3B, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_EntryPoints = (int) 0xBC0A4833, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge.EntryPoints
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge = (int) 0x0DFD2439, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_EntryPoints = (int) 0x33F333EE, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.EntryPoints
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge = (int) 0x2AEF4955, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_EntryPoints = (int) 0xFE4DDB66, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge.EntryPoints
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge = (int) 0xBC6051CB, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_EntryPoints = (int) 0xA747A736, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge.EntryPoints
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge = (int) 0x39087045, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_EntryPoints = (int) 0x5727D32E, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge.EntryPoints
  TRTS_Actuation_OrLogic_i_Initialization_Api = (int) 0xF4FFC19B, // RTS.Actuation.OrLogic_i_Initialization_Api
  TRTS_Actuation_OrLogic_i_Operational_Api = (int) 0x3583C719, // RTS.Actuation.OrLogic_i_Operational_Api
  TRTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge = (int) 0x991D07BD, // RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge
  TRTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_EntryPoints = (int) 0xFA8E3A7D, // RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge.EntryPoints
  TRTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge = (int) 0x18C18429, // RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge
  TRTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_EntryPoints = (int) 0xFA0EED46, // RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge.EntryPoints
  TRTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge = (int) 0x7457129F, // RTS.Actuation.OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge
  TRTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_EntryPoints = (int) 0x2959F06D, // RTS.Actuation.OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge.EntryPoints
  TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge = (int) 0xD872ACB6, // RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge
  TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints = (int) 0x30B970E5, // RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge.EntryPoints
  TRTS_Actuators_ActuatorsMockThread_i_Initialization_Api = (int) 0x900D7C4A, // RTS.Actuators.ActuatorsMockThread_i_Initialization_Api
  TRTS_Actuators_ActuatorsMockThread_i_Operational_Api = (int) 0x837D574F, // RTS.Actuators.ActuatorsMockThread_i_Operational_Api
  TRTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge = (int) 0x60FD451F, // RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge
  TRTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints = (int) 0x11C87073, // RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.EntryPoints
  TRTS_Base_Types_Boolean_Payload = (int) 0xC071EADA, // RTS.Base_Types.Boolean_Payload
  TRTS_Base_Types_Character_Payload = (int) 0xE88549A8, // RTS.Base_Types.Character_Payload
  TRTS_Base_Types_Float_32_Payload = (int) 0x40C2F7F9, // RTS.Base_Types.Float_32_Payload
  TRTS_Base_Types_Float_64_Payload = (int) 0x23E223F7, // RTS.Base_Types.Float_64_Payload
  TRTS_Base_Types_Float_Payload = (int) 0x7759FD45, // RTS.Base_Types.Float_Payload
  TRTS_Base_Types_Integer_16_Payload = (int) 0x9DA3615B, // RTS.Base_Types.Integer_16_Payload
  TRTS_Base_Types_Integer_32_Payload = (int) 0xA2FEDD02, // RTS.Base_Types.Integer_32_Payload
  TRTS_Base_Types_Integer_64_Payload = (int) 0x8B734781, // RTS.Base_Types.Integer_64_Payload
  TRTS_Base_Types_Integer_8_Payload = (int) 0xE88DCC9B, // RTS.Base_Types.Integer_8_Payload
  TRTS_Base_Types_Integer_Payload = (int) 0x88624D89, // RTS.Base_Types.Integer_Payload
  TRTS_Base_Types_String_Payload = (int) 0xD5577A13, // RTS.Base_Types.String_Payload
  TRTS_Base_Types_Unsigned_16_Payload = (int) 0x44643DD5, // RTS.Base_Types.Unsigned_16_Payload
  TRTS_Base_Types_Unsigned_32_Payload = (int) 0xC43ACA50, // RTS.Base_Types.Unsigned_32_Payload
  TRTS_Base_Types_Unsigned_64_Payload = (int) 0x2A6C7548, // RTS.Base_Types.Unsigned_64_Payload
  TRTS_Base_Types_Unsigned_8_Payload = (int) 0x19D685DC, // RTS.Base_Types.Unsigned_8_Payload
  TRTS_Cli = (int) 0xA952AF2F, // RTS.Cli
  TRTS_Cli_HelpOption = (int) 0xB38AC199, // RTS.Cli.HelpOption
  TRTS_Cli_RunOption = (int) 0x21B524B5, // RTS.Cli.RunOption
  TRTS_EventControl_EventControlMockThread_i_Initialization_Api = (int) 0xDCF730D9, // RTS.EventControl.EventControlMockThread_i_Initialization_Api
  TRTS_EventControl_EventControlMockThread_i_Operational_Api = (int) 0xC45E3E30, // RTS.EventControl.EventControlMockThread_i_Operational_Api
  TRTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge = (int) 0x57234EEF, // RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge
  TRTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_EntryPoints = (int) 0xCFC20F58, // RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge.EntryPoints
  TRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api = (int) 0xAF19614C, // RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api
  TRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api = (int) 0xFC5F3977, // RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api
  TRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge = (int) 0xA7DD8211, // RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge
  TRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints = (int) 0xE4479690, // RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints
  TRTS_ProcessorTimingProperties = (int) 0x99EB73BE, // RTS.ProcessorTimingProperties
  TRTS_ThreadTimingProperties = (int) 0xFFB1C841, // RTS.ThreadTimingProperties
  TSome_80A548 = (int) 0x80A5482F, // Some[(Z, Z)]
  TSome_DB59FB = (int) 0xDB59FB5F, // Some[B]
  TSome_C4F557 = (int) 0xC4F55741, // Some[IS[Z, art.Art.BridgeId]]
  TSome_E8C0F3 = (int) 0xE8C0F3A7, // Some[RTS.Actuation.Actuator_i_Initialization_Api]
  TSome_42319A = (int) 0x42319A6A, // Some[RTS.Actuation.Actuator_i_Operational_Api]
  TSome_7A7168 = (int) 0x7A7168D3, // Some[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]
  TSome_B99BC9 = (int) 0xB99BC98D, // Some[RTS.Actuation.CoincidenceLogic_i_Operational_Api]
  TSome_824C23 = (int) 0x824C2366, // Some[RTS.Actuation.OrLogic_i_Initialization_Api]
  TSome_6FC748 = (int) 0x6FC74821, // Some[RTS.Actuation.OrLogic_i_Operational_Api]
  TSome_E625E9 = (int) 0xE625E98D, // Some[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]
  TSome_B8A5BD = (int) 0xB8A5BDBC, // Some[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]
  TSome_B8733D = (int) 0xB8733DDE, // Some[RTS.Cli.RunChoice.Type]
  TSome_2BC073 = (int) 0x2BC073FD, // Some[RTS.Cli.RunTopOption]
  TSome_4347C6 = (int) 0x4347C619, // Some[RTS.EventControl.EventControlMockThread_i_Initialization_Api]
  TSome_7FC307 = (int) 0x7FC30735, // Some[RTS.EventControl.EventControlMockThread_i_Operational_Api]
  TSome_B05425 = (int) 0xB054251A, // Some[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]
  TSome_51E221 = (int) 0x51E22113, // Some[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]
  TSome_488F47 = (int) 0x488F47F1, // Some[Z]
  TSome_9D1CD4 = (int) 0x9D1CD468, // Some[art.Art.BridgeId]
  TSome_A0133F = (int) 0xA0133F1E, // Some[art.Art.PortId]
  TSome_24B656 = (int) 0x24B65679, // Some[art.ArtSlangMessage]
  TSome_482E57 = (int) 0x482E572F, // Some[art.Bridge]
  TSome_D29615 = (int) 0xD29615C0, // Some[art.DataContent]
  TSome_3E197E = (int) 0x3E197EB8, // Some[art.UPort]
  TSome_6D5259 = (int) 0x6D525905, // Some[art.scheduling.static.Explorer.ScheduleState]
  TString = (int) 0xB6F8E8F6, // String
  Tart_ArchitectureDescription = (int) 0xAD6322F1, // art.ArchitectureDescription
  Tart_ArtSlangMessage = (int) 0xD65AE808, // art.ArtSlangMessage
  Tart_Bridge_Ports = (int) 0x14139493, // art.Bridge.Ports
  Tart_Connection = (int) 0x17385940, // art.Connection
  Tart_DispatchPropertyProtocol_Periodic = (int) 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = (int) 0x48F30CFF, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = (int) 0x49C5E24D, // art.Empty
  Tart_Port_C0524D = (int) 0xC0524D76, // art.Port[B]
  Tart_scheduling_legacy_Legacy = (int) 0xF8368395, // art.scheduling.legacy.Legacy
  Tart_scheduling_roundrobin_RoundRobin = (int) 0xEDDBEA6E, // art.scheduling.roundrobin.RoundRobin
  Tart_scheduling_static_DefaultCommandProvider = (int) 0xA41CDA21, // art.scheduling.static.DefaultCommandProvider
  Tart_scheduling_static_Explorer_ScheduleState = (int) 0xD48F6249, // art.scheduling.static.Explorer.ScheduleState
  Tart_scheduling_static_Help = (int) 0x79756C3D, // art.scheduling.static.Help
  Tart_scheduling_static_Hstep = (int) 0xB6ABE477, // art.scheduling.static.Hstep
  Tart_scheduling_static_InfoComponentState = (int) 0x7136DC2C, // art.scheduling.static.InfoComponentState
  Tart_scheduling_static_InfoComponentStateId = (int) 0x4670A00C, // art.scheduling.static.InfoComponentStateId
  Tart_scheduling_static_InfoInputs = (int) 0x27D0C8C0, // art.scheduling.static.InfoInputs
  Tart_scheduling_static_InfoOutputs = (int) 0x8B416EFE, // art.scheduling.static.InfoOutputs
  Tart_scheduling_static_InfoThreadNickNames = (int) 0x393BEFDC, // art.scheduling.static.InfoThreadNickNames
  Tart_scheduling_static_Infoschedule = (int) 0x4DD24FB5, // art.scheduling.static.Infoschedule
  Tart_scheduling_static_Infostate = (int) 0xAD726F0E, // art.scheduling.static.Infostate
  Tart_scheduling_static_RunToDomain = (int) 0x689CA82B, // art.scheduling.static.RunToDomain
  Tart_scheduling_static_RunToHP = (int) 0xA104D920, // art.scheduling.static.RunToHP
  Tart_scheduling_static_RunToSlot = (int) 0xF624E3E1, // art.scheduling.static.RunToSlot
  Tart_scheduling_static_RunToState = (int) 0xD52A89EB, // art.scheduling.static.RunToState
  Tart_scheduling_static_RunToThread = (int) 0xA19299CA, // art.scheduling.static.RunToThread
  Tart_scheduling_static_Schedule_DSchedule = (int) 0x563BDCF3, // art.scheduling.static.Schedule.DSchedule
  Tart_scheduling_static_Schedule_DScheduleSpec = (int) 0xB1BC7C6D, // art.scheduling.static.Schedule.DScheduleSpec
  Tart_scheduling_static_Schedule_Slot = (int) 0x8F1178D8, // art.scheduling.static.Schedule.Slot
  Tart_scheduling_static_Sstep = (int) 0xB1D25CC6, // art.scheduling.static.Sstep
  Tart_scheduling_static_StaticScheduler = (int) 0x48589FD6, // art.scheduling.static.StaticScheduler
  Tart_scheduling_static_Stop = (int) 0x96BD96D7, // art.scheduling.static.Stop
  Tart_scheduling_static_Unrecognized = (int) 0x0B2A5DC7, // art.scheduling.static.Unrecognized
  Tart_scheduling_static_Unsupported = (int) 0xCBF4715D, // art.scheduling.static.Unsupported
} TYPE;

char *TYPE_string_(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 256

typedef struct String *String;
struct String {
  TYPE type;
  Z size;
  C value[];
};

struct StaticString {
  TYPE type;
  Z size;
  C value[MaxString + 1];
};

#define string(v) ((String) &((struct { TYPE type; Z size; C value[sizeof(v)]; }) { TString, Z_C(sizeof (v) - 1), v }))
#define DeclNewString(x) struct StaticString x = { .type = TString }

#ifdef __cplusplus
}
#endif

#endif