#include "CounterController.h"

// Функция управления счётчиком
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
        std::cout << "До свидания!" << std::endl;
        break;
    default:
        std::cout << "Введена некорректная команда!" << std::endl;
    }
}

// Функция ввода команды ('+', '-', '=' или 'x')
void enterCommand(Counter* counter)
{
    char command{};
    while (command != 'x')
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        countController(counter, command);
    }
}