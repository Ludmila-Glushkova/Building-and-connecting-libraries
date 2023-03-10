#pragma once
#include "Isosceles_triangle.h"

namespace Shapes
{
    class EquilateralTriangle : public IsoscelesTriangle {
    public:
        EquilateralTriangle(const std::string & n, int sideA);
    };
}