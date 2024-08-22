#include "PrintInfo.h"
#include <iostream>

// ������ ���������� � ������
void printInfo(Figure* figure)
{
    const int arrSize{ figure->getSidesCount() };
    int* arrSides = figure->getSides();
    std::cout << figure->getName() << "\n�������: ";
    for (int i{}; i < arrSize; ++i)
    {
        char letter = 97 + i;
        std::cout << letter << " = " << arrSides[i] << ' ';
    }

    int* arrAngles = figure->getAngles();
    std::cout << "\n����: ";
    for (int i{}; i < arrSize; ++i)
    {
        char letter = 65 + i;
        std::cout << letter << " = " << arrAngles[i] << ' ';
    }
    std::cout << '\n' << std::endl;
}