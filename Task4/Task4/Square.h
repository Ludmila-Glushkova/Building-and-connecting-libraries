#pragma once
#include "Rhombus.h"

namespace Shapes
{
    class SHAPES_API Square : public Rhombus {
    public:
        Square(const std::string & n, int sideA);
    };
}