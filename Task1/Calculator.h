#pragma once
class Calculator
{
private:
	double num1{};
	double num2{};



public:
	Calculator(double newMum1, double newNum2);

	double sum();	// Сумма

	double multiply();	// Произведение

	double substract();	// Вычитание

	double divide();	// Деление

	double power();		// Возведение в степень

};

