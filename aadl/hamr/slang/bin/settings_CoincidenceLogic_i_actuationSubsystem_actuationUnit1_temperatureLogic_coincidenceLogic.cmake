# This file will not be overwritten if HAMR codegen is rerun

add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic
                        muslc)
endif()