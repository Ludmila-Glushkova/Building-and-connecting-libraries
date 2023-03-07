#pragma once
#include "Isosceles_triangle.h"

namespace Shapes
{
    class SHAPES_API EquilateralTriangle : public IsoscelesTriangle {
    public:
        EquilateralTriangle(const std::string & n, int sideA);
    };
}