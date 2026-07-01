cmake_minimum_required(VERSION 3.10)
project(lab03)

add_subdirectory(formatter_lib)
add_subdirectory(formatter_ex)
add_subdirectory(solver_lib)

add_executable(hello_world hello_world.cpp)
target_link_libraries(hello_world formatter_ex)

add_executable(solver solver.cpp)
target_link_libraries(solver formatter_ex solver_lib)

