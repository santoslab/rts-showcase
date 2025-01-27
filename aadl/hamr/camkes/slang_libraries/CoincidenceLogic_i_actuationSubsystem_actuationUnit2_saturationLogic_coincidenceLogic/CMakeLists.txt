if(APPLE)
  cmake_minimum_required(VERSION 3.27)
  if($ENV{CC} MATCHES "^.*ccomp$")
    execute_process(COMMAND uname -m
      OUTPUT_VARIABLE CMAKE_C_COMPILER_TARGET
      OUTPUT_STRIP_TRAILING_WHITESPACE)
  endif()
else()
  cmake_minimum_required(VERSION 3.5.1)
endif(APPLE)

project(CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)
if($ENV{CC} MATCHES "^.*ccomp$")
  add_compile_options(-flongdouble)
endif()

function(to_hex DEC HEX)
  while(DEC GREATER 0)
    math(EXPR _val "${DEC} % 16")
    math(EXPR DEC "${DEC} / 16")
    if(_val EQUAL 10)
      set(_val "A")
    elseif(_val EQUAL 11)
      set(_val "B")
    elseif(_val EQUAL 12)
      set(_val "C")
    elseif(_val EQUAL 13)
      set(_val "D")
    elseif(_val EQUAL 14)
      set(_val "E")
    elseif(_val EQUAL 15)
      set(_val "F")
    endif()
    set(_res "${_val}${_res}")
  endwhile()
  set(${HEX} "0x${_res}" PARENT_SCOPE)
endfunction()

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  to_hex("16777216" stack_size)
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
  if($ENV{CC} MATCHES "^.*ccomp$")
    SET(CMAKE_C_ARCHIVE_CREATE   "<CMAKE_AR> Scr <TARGET> <LINK_FLAGS> <OBJECTS>")
    SET(CMAKE_CXX_ARCHIVE_CREATE "<CMAKE_AR> Scr <TARGET> <LINK_FLAGS> <OBJECTS>")
    SET(CMAKE_C_ARCHIVE_FINISH   "<CMAKE_RANLIB> -no_warning_for_no_symbols -c <TARGET>")
    SET(CMAKE_CXX_ARCHIVE_FINISH "<CMAKE_RANLIB> -no_warning_for_no_symbols -c <TARGET>")
  else()
    add_compile_options(-Dinline=static)
  endif()
  add_compile_options("$<$<CONFIG:Release>:-Os>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    to_hex("16777216" stack_size)
    set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
    add_compile_options(-fstack-usage -O2)
  elseif(NOT $ENV{CC} MATCHES "^.*ccomp$")
    add_compile_options(-fstack-usage -Dinline=static)
    add_compile_options("$<$<CONFIG:Release>:-Os>")
  endif()
endif()

option(BOUND_CHECK
  "Build the program with sequence bound checking."
  OFF)

if(BOUND_CHECK)
  add_definitions(-DSIREUM_BOUND_CHECK)
endif(BOUND_CHECK)

option(RANGE_CHECK
  "Build the program with range checking."
  OFF)

if(RANGE_CHECK)
  add_definitions(-DSIREUM_RANGE_CHECK)
endif(RANGE_CHECK)

option(NO_PRINT
  "Build the program without console output."
  OFF)

if(NO_PRINT)
  add_definitions(-DSIREUM_NO_PRINT)
endif(NO_PRINT)

option(WITH_LOC
  "Build the program with Slang location info."
  OFF)

if(WITH_LOC)
  add_definitions(-DSIREUM_LOC)
endif(WITH_LOC)


add_library(CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic STATIC
        runtime/type.h
        runtime/misc.c
        runtime/misc.h
        runtime/stackframe.c
        runtime/stackframe.h
        runtime/type.c
        runtime/lib.h
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/RTS/Actuation/type-RTS_Actuation_CoincidenceLogic_i_Api.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_Api.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_Api.c
        library/RTS/Actuation/type-RTS_Actuation_CoincidenceLogic_i_Initialization_Api.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_Initialization_Api.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_Initialization_Api.c
        library/RTS/Actuation/type-RTS_Actuation_CoincidenceLogic_i_Operational_Api.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_Operational_Api.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_Operational_Api.c
        library/RTS/Actuation/type-RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic.c
        library/RTS/Actuation/type-RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge.c
        library/RTS/Actuation/CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge/type-RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_EntryPoints.h
        library/RTS/Actuation/CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge/RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_EntryPoints.h
        library/RTS/Actuation/CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge/RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_EntryPoints.c
        library/RTS/Actuation/type-RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_seL4Nix.h
        library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_seL4Nix.h
        library/RTS/type-RTS_Base_Types.h
        library/RTS/RTS_Base_Types.h
        library/RTS/RTS_Base_Types.c
        library/RTS/Base_Types/type-RTS_Base_Types_Boolean_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Boolean_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Boolean_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Character_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Character_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Character_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Float_32_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Float_32_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Float_32_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Float_64_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Float_64_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Float_64_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Float_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Float_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Float_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Integer_16_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Integer_16_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Integer_16_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Integer_32_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Integer_32_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Integer_32_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Integer_64_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Integer_64_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Integer_64_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Integer_8_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Integer_8_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Integer_8_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Integer_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Integer_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Integer_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_String_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_String_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_String_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Unsigned_16_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Unsigned_16_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Unsigned_16_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Unsigned_32_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Unsigned_32_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Unsigned_32_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Unsigned_64_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Unsigned_64_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Unsigned_64_Payload.c
        library/RTS/Base_Types/type-RTS_Base_Types_Unsigned_8_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Unsigned_8_Payload.h
        library/RTS/Base_Types/RTS_Base_Types_Unsigned_8_Payload.c
        library/RTS/CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic/type-RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_coincidenceLogic_seL4App.h
        library/RTS/CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic/RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_coincidenceLogic_seL4App.h
        library/RTS/CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic/RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_coincidenceLogic_seL4App.c
        library/RTS/type-RTS_TranspilerToucher.h
        library/RTS/RTS_TranspilerToucher.h
        library/RTS/RTS_TranspilerToucher.c
        library/art/type-art_Art.h
        library/art/art_Art.h
        library/art/art_Art.c
        library/art/Art/type-art_Art_BridgeId.h
        library/art/Art/art_Art_BridgeId.h
        library/art/Art/art_Art_BridgeId.c
        library/art/Art/type-art_Art_PortId.h
        library/art/Art/art_Art_PortId.h
        library/art/Art/art_Art_PortId.c
        library/art/type-art_Bridge.h
        library/art/art_Bridge.h
        library/art/art_Bridge.c
        library/art/Bridge/type-art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.c
        library/art/Bridge/type-art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.c
        library/art/type-art_DataContent.h
        library/art/art_DataContent.h
        library/art/art_DataContent.c
        library/art/type-art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/art/PortMode/type-art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.c
        library/art/type-art_UPort.h
        library/art/art_UPort.h
        library/art/art_UPort.c
        library/art/type-art_art_Port_C0524D.h
        library/art/art_art_Port_C0524D.h
        library/art/art_art_Port_C0524D.c
        library/org/sireum/type-org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.c
        library/org/sireum/type-org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.c
        library/org/sireum/type-org_sireum_IS_D10119.h
        library/org/sireum/org_sireum_IS_D10119.h
        library/org/sireum/org_sireum_IS_D10119.c
        library/org/sireum/type-org_sireum_MBox2_37E193.h
        library/org/sireum/org_sireum_MBox2_37E193.h
        library/org/sireum/org_sireum_MBox2_37E193.c
        library/org/sireum/type-org_sireum_MBox2_43CC67.h
        library/org/sireum/org_sireum_MBox2_43CC67.h
        library/org/sireum/org_sireum_MBox2_43CC67.c
        library/org/sireum/type-org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.c
        library/org/sireum/type-org_sireum_None.h
        library/org/sireum/org_sireum_None.h
        library/org/sireum/org_sireum_None.c
        library/org/sireum/type-org_sireum_None_080F67.h
        library/org/sireum/org_sireum_None_080F67.h
        library/org/sireum/org_sireum_None_080F67.c
        library/org/sireum/type-org_sireum_None_37A019.h
        library/org/sireum/org_sireum_None_37A019.h
        library/org/sireum/org_sireum_None_37A019.c
        library/org/sireum/type-org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.c
        library/org/sireum/type-org_sireum_None_7E20F8.h
        library/org/sireum/org_sireum_None_7E20F8.h
        library/org/sireum/org_sireum_None_7E20F8.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_None_CFD2B0.h
        library/org/sireum/org_sireum_None_CFD2B0.h
        library/org/sireum/org_sireum_None_CFD2B0.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_0247A1.h
        library/org/sireum/org_sireum_Option_0247A1.h
        library/org/sireum/org_sireum_Option_0247A1.c
        library/org/sireum/type-org_sireum_Option_5BBD7F.h
        library/org/sireum/org_sireum_Option_5BBD7F.h
        library/org/sireum/org_sireum_Option_5BBD7F.c
        library/org/sireum/type-org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.c
        library/org/sireum/type-org_sireum_Option_80DE21.h
        library/org/sireum/org_sireum_Option_80DE21.h
        library/org/sireum/org_sireum_Option_80DE21.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_Option_8F4D4C.h
        library/org/sireum/org_sireum_Option_8F4D4C.h
        library/org/sireum/org_sireum_Option_8F4D4C.c
        library/org/sireum/type-org_sireum_S16.h
        library/org/sireum/org_sireum_S16.h
        library/org/sireum/org_sireum_S16.c
        library/org/sireum/type-org_sireum_S32.h
        library/org/sireum/org_sireum_S32.h
        library/org/sireum/org_sireum_S32.c
        library/org/sireum/type-org_sireum_S64.h
        library/org/sireum/org_sireum_S64.h
        library/org/sireum/org_sireum_S64.c
        library/org/sireum/type-org_sireum_S8.h
        library/org/sireum/org_sireum_S8.h
        library/org/sireum/org_sireum_S8.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_7A7168.h
        library/org/sireum/org_sireum_Some_7A7168.h
        library/org/sireum/org_sireum_Some_7A7168.c
        library/org/sireum/type-org_sireum_Some_B99BC9.h
        library/org/sireum/org_sireum_Some_B99BC9.h
        library/org/sireum/org_sireum_Some_B99BC9.c
        library/org/sireum/type-org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.c
        library/org/sireum/type-org_sireum_Some_DB59FB.h
        library/org/sireum/org_sireum_Some_DB59FB.h
        library/org/sireum/org_sireum_Some_DB59FB.c
        library/org/sireum/type-org_sireum_U16.h
        library/org/sireum/org_sireum_U16.h
        library/org/sireum/org_sireum_U16.c
        library/org/sireum/type-org_sireum_U32.h
        library/org/sireum/org_sireum_U32.h
        library/org/sireum/org_sireum_U32.c
        library/org/sireum/type-org_sireum_U64.h
        library/org/sireum/org_sireum_U64.h
        library/org/sireum/org_sireum_U64.c
        library/org/sireum/type-org_sireum_U8.h
        library/org/sireum/org_sireum_U8.h
        library/org/sireum/org_sireum_U8.c
        ext/ext.c
        ext/ext.h
        ext/CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_adapter.h
        ext/CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_adapter.c)

target_include_directories(CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic
        PUBLIC PUBLIC app-coincidenceLogic_seL4App
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/RTS/Actuation
        PUBLIC PUBLIC library/RTS/Actuation/CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge
        PUBLIC PUBLIC library/RTS
        PUBLIC PUBLIC library/RTS/Base_Types
        PUBLIC PUBLIC library/RTS/CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/art/PortMode
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC ext)


add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic
                        muslc)
endif()