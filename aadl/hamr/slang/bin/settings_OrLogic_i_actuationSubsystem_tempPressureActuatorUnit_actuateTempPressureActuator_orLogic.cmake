add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic
                        muslc)
endif()