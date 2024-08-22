#include "MathController.h"
#include <iostream>

// ���� ������� �����
double enterSecondNumber()
{
    double num2{};
    while (true)
    {
        std::cout << "������� ������ �����: ";
        std::cin >> num2;
        if (!num2)
        {
            std::cout << "������ ����� �� ������ ���� 0" << std::endl;
        }
        else
        {
            break;
        }
    }
    return num2;
}

// ����� ��������
int opperationChoice()
{
    int oper{};
    while (true)
    {
        std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
        std::cin >> oper;
        if (oper < 1 || oper > 5)
        {
            std::cout << "�� ����� �������� �����" << std::endl;
            continue;
        }
        return oper;
    }
}

// ���������� ��������
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
        std::cout << std::fixed << num1 << "  � �������  " << num2 << " = " << calc->power() << std::endl;
        break;
    default:
        break;
    }
}