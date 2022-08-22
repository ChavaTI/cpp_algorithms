add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(operators)

target_include_directories(${PROJECT_NAME} PUBLIC  operators)
target_link_directories(${PROJECT_NAME} PRIVATE operators)
target_link_libraries(${PROJECT_NAME} sum)

