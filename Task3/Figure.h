#pragma once

#include <string>

// Базовый класс
class Figure
{
private:

    std::string name{};
    int sidesCount{};
    int sides[4] = {};
    int angles[4] = {};

protected:

    Figure(int value, std::string str);

    void setSides(int* array);

    void setAngles(int* array);

public:

    Figure();

    std::string getName();

    int getSidesCount();

    int* getSides();

    int* getAngles();
};

