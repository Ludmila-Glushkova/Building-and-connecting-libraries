#include "Equilateral_triangle.h"

namespace Shapes
{
	EquilateralTriangle::EquilateralTriangle(const std::string & n, int sideA) : IsoscelesTriangle(n,
		sideA, sideA, 60, 60) {}
}