#include "MathController.h"
#include <iostream>

// Ввод второго числа
double enterSecondNumber()
{
    double num2{};
    while (true)
    {
        std::cout << "Введите второе число: ";
        std::cin >> num2;
        if (!num2)
        {
            std::cout << "Второе число не должно быть 0" << std::endl;
        }
        else
        {
            break;
        }
    }
    return num2;
}

// Выбор операции
int opperationChoice()
{
    int oper{};
    while (true)
    {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> oper;
        if (oper < 1 || oper > 5)
        {
            std::cout << "Вы введи неверное число" << std::endl;
            continue;
        }
        return oper;
    }
}

// Выполнение операции
void operationRun(Operation operation, double num1, double num2, Calculator* calc)
{
    std::cout.precision(2);
    switch (operation)
    {
    case sum:
        std::cout << std::fixed << num1 << " + " << num2 << " = " << calc->sum() << std::endl;
        break;
    case sub:
        std::cout << std::fixed << num1 << " - " << num2 << " = " << calc->substract() << std::endl;
        break;
    case multi:
        std::cout << std::fixed << num1 << " x " << num2 << " = " << calc->multiply() << std::endl;
        break;
    case divide:
        std::cout << std::fixed << num1 << " / " << num2 << " = " << calc->divide() << std::endl;
        break;
    case power:
        std::cout << std::fixed << num1 << "  в степени  " << num2 << " = " << calc->power() << std::endl;
        break;
    default:
        break;
    }
}