#pragma once

#include "Triangle.h"

// �������������� �����������
class IsoscelesTriangle : public Triangle
{
protected:

    IsoscelesTriangle(std::string newName, int a, int b, int A, int B);

public:

    IsoscelesTriangle();

    IsoscelesTriangle(int a, int b, int A, int B);
};

