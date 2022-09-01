set(TEST_BINARY ${PROJECT_NAME}_test)

add_executable(${TEST_BINARY} main.cpp)

add_test(NAME ${TEST_BINARY} COMMAND ${TEST_BINARY})

target_link_libraries(${TEST_BINARY} gtest)
