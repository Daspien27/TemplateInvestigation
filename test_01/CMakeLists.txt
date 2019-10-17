set(TEST_NAME test_01)

project(${TEST_NAME})

file(GLOB CppFiles $ENV{GLOB_LOC_1000_CPP})
add_library(${TEST_NAME} ${CppFiles})

