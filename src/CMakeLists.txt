# build the project
set(OPERATOR_DIR operators)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC 
  ${PROJECT_BINARY_DIR} 
  ${OPERATOR_DIR}/sum 
  ${OPERATOR_DIR}/subtraction 
  ${OPERATOR_DIR}/multiplication
  ${OPERATOR_DIR}/division
  )

target_link_libraries(${PROJECT_NAME} 
  sum 
  subtraction 
  multiplication
  division
  )

add_subdirectory(operators)
