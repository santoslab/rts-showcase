add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread
                        muslc)
endif()