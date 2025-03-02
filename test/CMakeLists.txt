target_sources(${TEST_TARGET} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/test_input.cpp
                                      ${CMAKE_CURRENT_SOURCE_DIR}/solve_test.cpp)

add_test(NAME InputTest COMMAND tests)
add_test(NAME SolveTest COMMAND tests)