#pragma once

#include <iostream>
#include "Counter.h"

// ������� ���������� ���������
void countController(Counter* counter, char command);

// ������� ����� ������� ('+', '-', '=' ��� 'x')
void enterCommand(Counter* counter);