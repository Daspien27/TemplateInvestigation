set(TEST_NAME test_02)

project(${TEST_NAME})

file(GLOB CppFiles $ENV{GLOB_LOC_1000_CPP_W_PCH})

add_library(${TEST_NAME} "pch.h" ${CppFiles})

target_include_directories(${TEST_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})