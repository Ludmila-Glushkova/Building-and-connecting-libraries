#include "Parallelogram.h"

namespace Shapes
{
	Parallelogram::Parallelogram(const std::string & n, int sideA, int sideB, int angleA, int angleB) : Quadrilateral(n,
		sideA, sideA, sideB, sideB, angleA, angleA, angleB, angleB) {}
}