cmake_minimum_required(VERSION 3.8)
project(P3)

find_package(Threads  REQUIRED)

include_directories("inc")


set(CMAKE_CXX_STANDARD 20)

add_compile_options("-std=c++2a" "-fconcepts" "-O3")

set(Sources
        src/main.cpp)
add_compile_options("-fconcepts")

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} )

add_executable(a.out ${Sources})

target_link_libraries(a.out ${CMAKE_THREAD_LIBS_INIT})
