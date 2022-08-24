add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(operators)

target_link_libraries(${PROJECT_NAME} sum)
