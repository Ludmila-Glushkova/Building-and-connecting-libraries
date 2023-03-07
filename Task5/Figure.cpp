#include "Figure.h"

namespace Shapes
{
    Figure::Figure(const std::string & n): name(n) {}
    Figure::~Figure() {}
    void Figure::sides() const {}
    void Figure::angles() const {}
    void Figure::print() {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << std::endl;
        sides();
        std::cout << std::endl;
        std::cout << "Углы: " << std::endl;
        angles();
    }
}