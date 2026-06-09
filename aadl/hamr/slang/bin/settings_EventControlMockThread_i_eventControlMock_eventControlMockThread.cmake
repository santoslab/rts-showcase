# This file will not be overwritten if HAMR codegen is rerun

add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(EventControlMockThread_i_eventControlMock_eventControlMockThread
                        muslc)
endif()