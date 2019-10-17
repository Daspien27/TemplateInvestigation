set(TEST_NAME test_20)

project(${TEST_NAME})

file(GLOB CppFiles $ENV{GLOB_LOC_1000_CPP_W_PCH_10PER_95PER})

add_library(${TEST_NAME} "pch.h" "10percent.h" "95percent.h" ${CppFiles})

target_include_directories(${TEST_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_precompile_headers(${TEST_NAME} PUBLIC "pch.h")