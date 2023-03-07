#include "Isosceles_triangle.h"

namespace Shapes
{
    IsoscelesTriangle::IsoscelesTriangle(const std::string & n, int sideA, int sideB, int angleA,
        int angleB) : Triangle(n, sideA, sideA, sideB, angleA, angleA,
            angleB) {}
}