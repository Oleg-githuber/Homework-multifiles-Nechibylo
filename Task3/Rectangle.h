#pragma once

#include "Quadrangle.h"

// Прямоугольник
class Rectangle : public Quadrangle
{
protected:

    Rectangle(std::string newName, int a, int b);

public:

    Rectangle();

    Rectangle(int a, int b);
};

