cmake_minimum_required(VERSION 3.20.3)

project(game-of-life)

add_executable(${PROJECT_NAME} main.c)

add_subdirectory(game)
add_subdirectory(console)

target_link_libraries(${PROJECT_NAME} game)
target_link_libraries(${PROJECT_NAME} console)