#include "Rhombus.h"

namespace Shapes
{
	Rhombus::Rhombus(const std::string & n, int sideA, int angleA, int angleB) : Parallelogram(n, sideA, sideA, angleA, angleB) {}
}