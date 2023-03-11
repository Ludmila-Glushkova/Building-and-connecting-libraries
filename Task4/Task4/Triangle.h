#pragma once
#include "Figure.h"

namespace Shapes
{
    class Triangle : public Figure {
    protected:
        int sideA, sideB, sideC, angleA, angleB, angleC;
        SHAPES_API void sides() const override;
        SHAPES_API void angles() const override;

    public:
        SHAPES_API Triangle(const std::string & n, int sideA, int sideB, int sideC,
            int angleA, int angleB, int angleC);
    };
}
