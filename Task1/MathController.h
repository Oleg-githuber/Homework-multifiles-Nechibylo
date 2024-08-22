#pragma once

#include "Calculator.h"

enum Operation
{
    sum = 1, sub, multi, divide, power
};

double enterSecondNumber();     // Ввод второго числа
int opperationChoice();     // Выбор математической операции
void operationRun(Operation operation, double num1, double num2, Calculator* calc);     // Выполнение математической операции
