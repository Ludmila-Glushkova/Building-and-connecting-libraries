#pragma once
#include "Rhombus.h"

namespace Shapes
{
    class Square : public Rhombus {
    public:
        Square(const std::string & n, int sideA);
    };
}