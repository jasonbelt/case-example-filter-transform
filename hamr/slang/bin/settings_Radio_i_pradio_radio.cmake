add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(Radio_i_pradio_radio
                        muslc)
endif()