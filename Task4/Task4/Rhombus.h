#pragma once
#include "Parallelogram.h"

namespace Shapes
{
    class Rhombus : public Parallelogram {
    public:
        SHAPES_API Rhombus(const std::string & n, int sideA, int angleA, int angleB);
    };
}
