#pragma once

#include "Figure.h"

// Треугольник
class Triangle : public Figure
{
private:

    void initTriangle(int aSide, int bSide, int cSide, int AAngle, int BAngle, int CAngle);

protected:

    Triangle(std::string newName, int aSide, int bSide, int cSide, int AAngle, int BAngle, int CAngle);

public:

    Triangle();

    Triangle(int aSide, int bSide, int cSide, int AAngle, int BAngle, int CAngle);
};

