#include "Triangle.h"

namespace Shapes
{
    Triangle::Triangle(const std::string & n, int sideA, int sideB, int sideC,
        int angleA, int angleB, int angleC) : Figure(n) {
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;
        this->angleA = angleA;
        this->angleB = angleB;
        this->angleC = angleC;
    }

    void Triangle::sides() const {
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
    }

    void Triangle::angles() const {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
    }
}