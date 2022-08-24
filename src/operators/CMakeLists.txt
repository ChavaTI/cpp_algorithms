add_subdirectory(sum)

target_link_directories(${PROJECT_NAME} PRIVATE sum)
target_include_directories(${PROJECT_NAME} PUBLIC sum)
