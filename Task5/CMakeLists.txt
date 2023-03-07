cmake_minimum_required (VERSION 3.22.0)
project ("Homework")
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(Shapes SHARED Figure.h Figure.cpp Triangle.h Triangle.cpp
Right_triangle.h Right_triangle.cpp Isosceles_triangle.h Isosceles_triangle.cpp
Equilateral_triangle.h Equilateral_triangle.cpp Quadrangle.h Quadrangle.cpp
Rectangle.h Rectangle.cpp Square.h Square.cpp Parallelogram.h Parallelogram.cpp
Rhombus.h Rhombus.cpp Shapes.h)

add_executable (Homework Client.cpp)
target_link_libraries(Homework Shapes)