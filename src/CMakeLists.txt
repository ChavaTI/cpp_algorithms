# build the project
set(OPERATOR_DIR operators)
set(SORTING_DIR sorting)
set(DATA_STRUCTURES_DIR data_structures)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(
  ${PROJECT_NAME} PUBLIC
  ${PROJECT_BINARY_DIR}
  ${OPERATOR_DIR}/sum
  ${OPERATOR_DIR}/subtraction
  ${OPERATOR_DIR}/multiplication
  ${OPERATOR_DIR}/division
  ${OPERATOR_DIR}/modulus
  ${SORTING_DIR}/bubble
  ${DATA_STRUCTURES_DIR}/binary_tree
)

target_link_libraries(
  ${PROJECT_NAME}
  sum
  subtraction
  multiplication
  division
  modulus
  bubble
  Binary_tree
)

add_subdirectory(${OPERATOR_DIR})
add_subdirectory(${SORTING_DIR})
add_subdirectory(${DATA_STRUCTURES_DIR})
