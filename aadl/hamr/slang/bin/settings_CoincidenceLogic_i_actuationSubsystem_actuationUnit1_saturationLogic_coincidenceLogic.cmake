add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic
                        muslc)
endif()