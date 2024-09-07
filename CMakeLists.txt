cmake_minimum_required(VERSION 3.27)
project(unity_task)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)
add_executable(unity_task ${SOURCE_FILES})

include_directories(LinkedList_Lib)
add_subdirectory(LinkedList_Lib)

target_link_libraries(unity_task LinkedList_Lib)

add_subdirectory(Google_tests)




