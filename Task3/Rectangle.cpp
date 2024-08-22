#include "Rectangle.h"		// Прямоугольник

Rectangle::Rectangle() : Rectangle{ 10, 20 }
{}

Rectangle::Rectangle(int a, int b) : Quadrangle{ "Прямоугольник", a, b, a, b, 90, 90, 90, 90 }
{}

Rectangle::Rectangle(std::string newName, int a, int b) : Quadrangle{ newName, a, b, a, b, 90, 90, 90, 90 }
{}
