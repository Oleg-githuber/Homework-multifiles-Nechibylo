#include "Parallelogram.h"		// �������������

Parallelogram::Parallelogram() : Parallelogram{ 20, 30, 30, 40 }
{}

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle{ "�������������", a, b, a, b, A, B, A, B }
{}