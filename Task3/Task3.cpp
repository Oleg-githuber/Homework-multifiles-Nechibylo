/*
В этом задании вы вынесете иерархию классов в отдельные файлы.

Возьмите иерархию классов геометрических фигур из предыдущего домашнего задания.

Разнесите иерархию классов по отдельным файлам, продемонстрируйте работу программы таким же образом, как в предыдущем домашнем задании.

Обратите внимание на то, что для каждого класса должна быть создана своя пара — заголовочный файл + файл исходного кода.
*/

#include "Header.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle;
    RectangularTriangle rectTriangle;
    IsoscelesTriangle isoTriangle;
    PerfectTriangle perfectTriangle;
    Quadrangle quadrangle;
    Rectangle rectangle;
    Quadrate quadrate;
    Parallelogram parallelogram;
    Rhombus rhombus;

    printInfo(&triangle);
    printInfo(&rectTriangle);
    printInfo(&isoTriangle);
    printInfo(&perfectTriangle);
    printInfo(&quadrangle);
    printInfo(&rectangle);
    printInfo(&quadrate);
    printInfo(&parallelogram);
    printInfo(&rhombus);

    system("pause");
    return EXIT_SUCCESS;
}
