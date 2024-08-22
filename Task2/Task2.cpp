/*
В этом задании вы вынесете класс в отдельный файл.

Возьмите класс счётчика из предыдущего домашнего задания.

Вынесите этот класс в отдельный файл, продемонстрируйте работу программы таким же образом, как в предыдущем домашнем задании.
*/

#include <iostream>
#include "Counter.h"
#include "CounterController.h"
#include <Windows.h>
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter* counter = nullptr;

    while (true)        // Использовал цикл на случай ввода неправильного слова
    {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: " << std::flush;
        std::string word{};
        std::getline(std::cin, word);
        if (word == "да")
        {
            std::cout << std::flush << "Введите начальное значение счётчика: " << std::flush;
            int startCount{};
            std::cin >> startCount;
            counter = new Counter(startCount);
            break;
        }
        else if (word != "нет")
        {
            std::cout << std::flush << "Ответ должен быть да или нет!" << std::endl;
            continue;
        }
        else
        {
            counter = new Counter();
            break;
        }
    }

    enterCommand(counter);
    delete counter;

    system("pause");
    return EXIT_SUCCESS;
}
