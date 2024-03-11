#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// this file will not be overwritten and is safe to edit

/************************************************************

   This is a kernel data structure containing an example schedule.
   The length is in seL4 ticks (2 ms).
   This schedule should be generated from the AADL model
   using execution time and data flow latency specifications.


   Properties from AADL Model
   --------------------------

     Timing_Properties::Clock_Period : 2 ms
     Timing_Properties::Frame_Period : 1000 ms

     instrumentationMock_instrumentationMockThread : Thread
     ------------------------------------------------------

       CASE_Scheduling::Domain : 2
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     eventControlMock_eventControlMockThread : Thread
     ------------------------------------------------

       CASE_Scheduling::Domain : 3
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuatorsMock_actuatorsMockThread : Thread
     ------------------------------------------

       CASE_Scheduling::Domain : 4
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic : Thread
     ----------------------------------------------------------------------------

       CASE_Scheduling::Domain : 5
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic : Thread
     -------------------------------------------------------------------------

       CASE_Scheduling::Domain : 6
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic : Thread
     ---------------------------------------------------------------------------

       CASE_Scheduling::Domain : 7
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic : Thread
     ----------------------------------------------------------------------

       CASE_Scheduling::Domain : 8
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic : Thread
     ----------------------------------------------------------------------------

       CASE_Scheduling::Domain : 9
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic : Thread
     -------------------------------------------------------------------------

       CASE_Scheduling::Domain : 10
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic : Thread
     ---------------------------------------------------------------------------

       CASE_Scheduling::Domain : 11
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic : Thread
     ----------------------------------------------------------------------

       CASE_Scheduling::Domain : 12
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic : Thread
     ----------------------------------------------------------------------------------------

       CASE_Scheduling::Domain : 13
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator : Thread
     ----------------------------------------------------------------------------------

       CASE_Scheduling::Domain : 14
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic : Thread
     ------------------------------------------------------------------------------------

       CASE_Scheduling::Domain : 15
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator : Thread
     ------------------------------------------------------------------------------

       CASE_Scheduling::Domain : 16
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

 *********************************************************/

const int len = 20;

const dschedule_t ksDomSchedule[] = {
  { .domain = 0, .length = 100 },  // all other seL4 threads, init, 200ms

  { .domain = 2, .length = len },  // instrumentationMock_instrumentationMockThread 10 ms  
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages

  { .domain = 3, .length = len },  // eventControlMock_eventControlMockThread 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages

  { .domain = 5, .length = len },  // actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages
  { .domain = 6, .length = len },  // actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages
  { .domain = 7, .length = len },  // actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages
  { .domain = 8, .length = len },  // actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages

  { .domain = 9, .length = len },  // actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages
  { .domain = 10, .length = len },  // actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages
  { .domain = 11, .length = len },  // actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages
  { .domain = 12, .length = len },  // actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages

  { .domain = 13, .length = len },  // actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages

  { .domain = 14, .length = len },  // actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages

  { .domain = 15, .length = len },  // actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages

  { .domain = 16, .length = len },  // actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator 10 ms
  { .domain = 0, .length = 5 },  // switch to domain 0 to allow seL4 to deliver messages

  { .domain = 4, .length = len },  // actuatorsMock_actuatorsMockThread 10 ms

  { .domain = 0, .length = 1000 - (100 + (15 * len) + (14 * 5)) },  // pad rest of frame period
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
