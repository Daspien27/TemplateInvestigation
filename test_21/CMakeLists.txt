set(TEST_NAME test_21)

project(${TEST_NAME})

file(GLOB CppFiles "gen/*")

add_library(${TEST_NAME} "pch.h" "10percent.h" "95percent.h" ${CppFiles})

target_include_directories(${TEST_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_precompile_headers(${TEST_NAME} PUBLIC "pch.h")