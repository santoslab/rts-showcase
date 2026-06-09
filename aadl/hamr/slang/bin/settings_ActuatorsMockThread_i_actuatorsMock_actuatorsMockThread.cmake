# This file will not be overwritten if HAMR codegen is rerun

add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread
                        muslc)
endif()