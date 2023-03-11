#pragma once
#include "Triangle.h"

namespace Shapes
{
    class RightTriangle : public Triangle {
    public:
        SHAPES_API RightTriangle(const std::string & n, int sideA, int sideB, int sideC,
            int angleA, int angleB);
    };
}
