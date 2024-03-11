add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic
                        muslc)
endif()