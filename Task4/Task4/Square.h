#pragma once
#include "Rhombus.h"

namespace Shapes
{
    class Square : public Rhombus {
    public:
        SHAPES_API Square(const std::string & n, int sideA);
    };
}