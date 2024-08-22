#include "IsoscelesTriangle.h"		// �������������� �����������

IsoscelesTriangle::IsoscelesTriangle() : IsoscelesTriangle{ 10, 20, 50, 60 }
{}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : Triangle{ "�������������� �����������", a, b, a, A, B, A }
{}

IsoscelesTriangle::IsoscelesTriangle(std::string newName, int a, int b, int A, int B) : Triangle{ newName, a, b, a, A, B, A }
{}