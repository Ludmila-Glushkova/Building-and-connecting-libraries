#include "Rectangle.h"

namespace Shapes
{
	Rectangle::Rectangle(const std::string & n, int sideA, int sideB) : Parallelogram(n, sideA, sideB, 90, 90) {}
}