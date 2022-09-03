# build the project
set(OPERATOR_DIR operators)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${OPERATOR_DIR}/sum)
target_link_libraries(${PROJECT_NAME} sum)

add_subdirectory(operators)
