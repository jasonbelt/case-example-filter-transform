# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (s_impl_Instance C)

add_definitions(-DCAMKES)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_CakeMLOptions.cmake)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_TranspilerOptions.cmake)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/Radio_i_pradio_radio)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/Receiver_i_preceiver_receiver)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/Filter_Impl_Filter_Filter)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SlangTypeLibrary)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(Radio_i_pradio_radio
  SOURCES components/Radio_i_pradio_radio/src/sb_Radio_i.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/Radio_i_pradio_radio/includes/ types/includes
  LIBS Radio_i_pradio_radio
)

DeclareCAmkESComponent(Receiver_i_preceiver_receiver
  SOURCES components/Receiver_i_preceiver_receiver/src/sb_Receiver_i.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/Receiver_i_preceiver_receiver/includes/ types/includes
  LIBS Receiver_i_preceiver_receiver
)

DeclareCAmkESComponent(Filter_Impl_Filter_Filter
  SOURCES components/Filter_Impl_Filter_Filter/src/sb_Filter_Impl_ffi.c components/Filter_Impl_Filter_Filter/src/AttestationGate_Filter.S components/Filter_Impl_Filter_Filter/src/basis_ffi.c components/Filter_Impl_Filter_Filter/src/sb_Filter_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/Filter_Impl_Filter_Filter/includes/ types/includes
  LIBS Filter_Impl_Filter_Filter
)

DeclareCAmkESRootserver(s_impl_Instance.camkes)
