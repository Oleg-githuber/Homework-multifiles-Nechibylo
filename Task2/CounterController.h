#pragma once

#include <iostream>
#include "Counter.h"

// Функция управления счётчиком
void countController(Counter* counter, char command);

// Функция ввода команды ('+', '-', '=' или 'x')
void enterCommand(Counter* counter);