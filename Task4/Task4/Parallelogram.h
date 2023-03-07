#pragma once
#include "Quadrangle.h"

namespace Shapes
{
    class SHAPES_API Parallelogram : public Quadrilateral {
    public:
        Parallelogram(const std::string & n, int sideA, int sideB, int angleA, int angleB);
    };
}
