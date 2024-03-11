add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic
                        muslc)
endif()