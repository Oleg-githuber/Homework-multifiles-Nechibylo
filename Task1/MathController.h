#pragma once

#include "Calculator.h"

enum Operation
{
    sum = 1, sub, multi, divide, power
};

double enterSecondNumber();     // ���� ������� �����
int opperationChoice();     // ����� �������������� ��������
void operationRun(Operation operation, double num1, double num2, Calculator* calc);     // ���������� �������������� ��������
