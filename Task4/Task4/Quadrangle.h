#pragma once
#include "Figure.h"

namespace Shapes
{
    class Quadrilateral : public Figure {
    protected:
        int sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD;
        SHAPES_API void sides() const override;

        SHAPES_API void angles() const override;

    public:
        SHAPES_API Quadrilateral(const std::string & n, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
            int angleC, int angleD);
    };
}
