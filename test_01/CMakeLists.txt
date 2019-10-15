set(TEST_NAME test_01)

project(${TEST_NAME})

file(GLOB CppFiles "gen/*")

add_library(${TEST_NAME} ${CppFiles})

