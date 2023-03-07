#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print(Shapes::Figure& fig) {
    fig.print();
    std::cout << std::endl;
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Shapes::Triangle tr("Треугольник", 10, 15, 20, 30, 70, 80);
    Shapes::RightTriangle right("Прямоугольный треугольник", 3, 4, 5, 40, 50);
    Shapes::IsoscelesTriangle iso("Равнобедренный треугольник", 10, 20, 50, 40);
    Shapes::EquilateralTriangle equ("Правильный треугольник", 55);
    Shapes::Quadrilateral qua("Четырехугольник", 10, 11, 12, 13, 80, 90, 110, 80);
    Shapes::Parallelogram par("Параллелограмм", 40, 10, 80, 100);
    Shapes::Rectangle rec("Прямоугольник", 12, 18);
    Shapes::Rhombus rho("Ромб", 40, 70, 110);
    Shapes::Square square("Квадрат", 10);

    print(tr);
    print(right);
    print(iso);
    print(equ);
    print(qua);
    print(par);
    print(rec);
    print(rho);
    print(square);
}

