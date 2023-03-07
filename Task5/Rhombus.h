#pragma once
#include "Parallelogram.h"

namespace Shapes
{
    class SHAPES_API Rhombus : public Parallelogram {
    public:
        Rhombus(const std::string & n, int sideA, int angleA, int angleB);
    };
}
