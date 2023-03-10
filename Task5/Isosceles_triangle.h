#pragma once
#include "Triangle.h"

namespace Shapes
{
    class IsoscelesTriangle : public Triangle {
    public:
        IsoscelesTriangle(const std::string & n, int sideA, int sideB, int angleA,
            int angleB);
    };
}
