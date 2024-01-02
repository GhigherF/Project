#include <iostream>
#include <cmath>
#include "Windows.h"
#include  "MainAlgebraModule.h"
#define MAX_SIZE 500
using namespace std;

int VectorDistance()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "RU");
    char x1[MAX_SIZE], y1[MAX_SIZE], x2[MAX_SIZE], y2[MAX_SIZE];
    int x, y;
    
    printf("Введите значение x1: ");
    cin >> x1;
    if (static_cast<int>(x1[0]) > 57 && static_cast<int>(x1[0]) != 45 || static_cast<int>(x1[0]) < 48 && static_cast<int>(x1[0]) != 45) {
        printf("Ошибка - введен неправильный символ...\n");
        system("pause");
        return 0;
    }
    printf("Введите значение y1: ");
    cin >> y1;
    if (static_cast<int>(y1[0]) > 57 && static_cast<int>(y1[0]) != 45 || static_cast<int>(y1[0]) < 48 && static_cast<int>(y1[0]) != 45) {
        printf("Ошибка - введен неправильный символ...\n");
        system("pause");
        return 0;
    }
    printf("Введите значение x2: ");
    cin >> x2;
    if (static_cast<int>(x2[0]) > 57 && static_cast<int>(x2[0]) != 45 || static_cast<int>(x2[0]) < 48 && static_cast<int>(x2[0]) != 45) {
        printf("Ошибка - введен неправильный символ...\n");
        system("pause");
        return 0;
    }
    printf("Введите значение y2: ");
    cin >> y2;
    if (static_cast<int>(y2[0]) > 57 && static_cast<int>(y2[0]) != 45 || static_cast<int>(y2[0]) < 48 && static_cast<int>(y2[0]) != 45) {
        printf("Ошибка - введен неправильный символ...\n");
        system("pause");
        return 0;
    }
    x = abs(atoi(x2) - atoi(x1));
    y = abs(atoi(y2) - atoi(y1));
        printf("Расстояние между точками равно (%d, %d)\n", x, y);
        system("pause");
        return 0;
}

