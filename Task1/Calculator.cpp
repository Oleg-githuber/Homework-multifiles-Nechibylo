#include "Calculator.h"
#include <math.h>

Calculator::Calculator(double newNum1, double newNum2) : num1{ newNum1 }, num2{ newNum2 }
{}

double Calculator::sum() { return num1 + num2; }

double Calculator::multiply() { return num1 * num2; }

double Calculator::substract() { return num1 - num2; }

double Calculator::divide() { return num1 / num2; }

double Calculator::power() { return pow(num1, num2); }