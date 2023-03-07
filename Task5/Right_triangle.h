#pragma once
#include "Triangle.h"

namespace Shapes
{
    class SHAPES_API RightTriangle : public Triangle {
    public:
        RightTriangle(const std::string & n, int sideA, int sideB, int sideC,
            int angleA, int angleB);
    };
}
