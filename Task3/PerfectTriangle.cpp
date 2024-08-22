#include "PerfectTriangle.h"		// Равносторонний треугольник

PerfectTriangle::PerfectTriangle() : PerfectTriangle{ 30 }
{}

PerfectTriangle::PerfectTriangle(int a) : IsoscelesTriangle{ "Равносторонний треугольник", a, a, 60, 60 }
{}