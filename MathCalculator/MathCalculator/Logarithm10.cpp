#include <iostream>
#include <cmath>
#include "MainMathModule.h"
#include "Windows.h"
#define MAX_SIZE 500
using namespace std;


int Logarithm10()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_CTYPE, "RU");
    char value[MAX_SIZE];
    float result;
    printf("Введите число, десятичный логарифм которого будет вычислен.\n");
    cin >> value;
    if (static_cast<int>(value[0]) > 57 && static_cast<int>(value[0]) != 45 || static_cast<int>(value[0]) < 48 && static_cast<int>(value[0]) != 45) {
        printf("Ошибка - введен неправильный символ...\n");
        system("pause");
        return 0;
    }
    if (atoi(value) == 0) {
        printf("Ошибка - укажите число больше нуля!\n");
        system("pause");
        return 0;
    }
    result = log10(atof(value));
    printf("Десятичный логарифм числа %f будет равен %f.\n", atof(value), result);
    system("pause");
    return 0;
}