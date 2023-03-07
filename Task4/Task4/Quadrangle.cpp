#include "Quadrangle.h"

namespace Shapes
{
    Quadrilateral::Quadrilateral(const std::string & n, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
        int angleC, int angleD) : Figure(n) {
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;
        this->sideD = sideD;
        this->angleA = angleA;
        this->angleB = angleB;
        this->angleC = angleC;
        this->angleD = angleD;
    }

    void Quadrilateral::angles() const {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
    }

    void Quadrilateral::sides() const {
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
    }
}