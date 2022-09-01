set(TEST_BINARY ${PROJECT_NAME}_test)

add_executable(${TEST_BINARY} main.cpp)

target_link_libraries(${TEST_BINARY} gtest)
