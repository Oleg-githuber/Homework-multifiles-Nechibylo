#pragma once

#include "Figure.h"

// ��������������
class Quadrangle : public Figure
{
private:

    void initQuadrangle(int aSide, int bSide, int cSide, int dSide, int AAngle, int BAngle, int CAngle, int DAngle);

protected:

    Quadrangle(std::string newName, int aSide, int bSide, int cSide, int dSide, int AAngle, int BAngle, int CAngle, int DAngle);

public:

    Quadrangle();

    Quadrangle(int aSide, int bSide, int cSide, int dSide, int AAngle, int BAngle, int CAngle, int DAngle);
};

