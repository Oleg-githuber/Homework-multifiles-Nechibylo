#include "Rhombus.h"	// ����

Rhombus::Rhombus() : Rhombus{ 30, 30, 40 }
{}

Rhombus::Rhombus(int a, int A, int B) : Quadrangle{ "����", a, a, a, a, A, B, A, B }
{}