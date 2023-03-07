#pragma once
#include "Figure.h"

namespace Shapes
{
    class SHAPES_API Triangle : public Figure {
    protected:
        int sideA, sideB, sideC, angleA, angleB, angleC;
        void sides() const override;
        void angles() const override;

    public:
        Triangle(const std::string & n, int sideA, int sideB, int sideC,
            int angleA, int angleB, int angleC);
    };
}
