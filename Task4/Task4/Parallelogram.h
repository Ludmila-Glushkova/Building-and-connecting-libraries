#pragma once
#include "Quadrangle.h"

namespace Shapes
{
    class Parallelogram : public Quadrilateral {
    public:
        SHAPES_API Parallelogram(const std::string & n, int sideA, int sideB, int angleA, int angleB);
    };
}
