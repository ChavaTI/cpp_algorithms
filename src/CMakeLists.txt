# build the project
set(OPERATOR_DIR operators)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${OPERATOR_DIR}/sum ${OPERATOR_DIR}/subtraction)
target_link_libraries(${PROJECT_NAME} sum subtraction)

add_subdirectory(operators)
