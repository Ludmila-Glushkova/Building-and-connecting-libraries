cmake_minimum_required(VERSION 3.22.0)
project("HomeworkLeaver")
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(Leaver SHARED Leaver.h Leaver.cpp)
add_executable(HomeworkLeaver main.cpp)
target_link_libraries(HomeworkLeaver Leaver)