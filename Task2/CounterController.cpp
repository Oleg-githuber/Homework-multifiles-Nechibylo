#include "CounterController.h"

// ������� ���������� ���������
void countController(Counter* counter, char command)
{
    switch (command)
    {
    case '+':
        counter->increaseCount();
        break;
    case '-':
        counter->decreaseCount();
        break;
    case '=':
        std::cout << counter->getCount() << std::endl;
        break;
    case 'x':
        std::cout << "�� ��������!" << std::endl;
        break;
    default:
        std::cout << "������� ������������ �������!" << std::endl;
    }
}

// ������� ����� ������� ('+', '-', '=' ��� 'x')
void enterCommand(Counter* counter)
{
    char command{};
    while (command != 'x')
    {
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
        std::cin >> command;
        countController(counter, command);
    }
}