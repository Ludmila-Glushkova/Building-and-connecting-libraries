#pragma once
#include "Figure.h"

namespace Shapes
{
    class Quadrilateral : public Figure {
    protected:
        int sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD;
        void sides() const override;

        void angles() const override;

    public:
        Quadrilateral(const std::string & n, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
            int angleC, int angleD);
    };
}
