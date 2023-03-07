#include "Right_triangle.h"

namespace Shapes
{
    RightTriangle::RightTriangle(const std::string & n, int sideA, int sideB, int sideC,
        int angleA, int angleB) : Triangle(n, sideA, sideB,
            sideC, angleA, angleB, 90) {}
}