/*
В этом задании вы вынесете математические функции в отдельный файл.

Даны следующие математически функции: сложение, вычитание, умножение, деление, возведение в степень.

Вам нужно разместить их в отдельном файле исходного кода и воспользоваться ими из функции main.

Попросите пользователя ввести два числа и выбрать операцию. Выведите результат ему на консоль.
*/

#include <iostream>
#include <string>
#include <clocale>
#include "Calculator.h"
#include "MathController.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите первое число: ";
    double num1{};
    std::cin >> num1;
    double num2{ enterSecondNumber() };

    Calculator calculator{ num1, num2 };
    Operation oper{ static_cast<Operation>(opperationChoice()) };
    operationRun(oper, num1, num2, &calculator);

    system("pause");
    return EXIT_SUCCESS;
}
