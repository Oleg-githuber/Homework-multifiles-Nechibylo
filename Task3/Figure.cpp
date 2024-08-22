#include "Figure.h"     // Базовый класс

Figure::Figure() = default;

Figure::Figure(int value, std::string str) : sidesCount{ value }, name{ str }
{}

void Figure::setSides(int* array)
{
    for (int i{ 0 }; i < sidesCount; ++i)
    {
        sides[i] = array[i];
    }
}

void Figure::setAngles(int* array)
{
    for (int i{ 0 }; i < sidesCount; ++i)
    {
        angles[i] = array[i];
    }
}

std::string Figure::getName() { return name; }

int Figure::getSidesCount() { return sidesCount; }

int* Figure::getSides() { return sides; }

int* Figure::getAngles() { return angles; }