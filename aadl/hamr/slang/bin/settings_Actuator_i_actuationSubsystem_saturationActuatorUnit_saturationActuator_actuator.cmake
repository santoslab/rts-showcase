# This file will not be overwritten if HAMR codegen is rerun

add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator
                        muslc)
endif()