#pragma once
#include "Parallelogram.h"

namespace Shapes
{
    class Rectangle : public Parallelogram {
    public:
        SHAPES_API Rectangle(const std::string & n, int sideA, int sideB);
    };
}
