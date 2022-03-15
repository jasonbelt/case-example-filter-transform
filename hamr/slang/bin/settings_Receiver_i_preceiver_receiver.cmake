add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(Receiver_i_preceiver_receiver
                        muslc)
endif()