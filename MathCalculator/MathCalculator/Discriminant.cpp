#include <iostream>
#include <cmath>
#include "MainMathModule.h"
#include "Windows.h"
#define MAX_SIZE 500
using namespace std;


int Discriminant()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_CTYPE, "RU");
    char a[MAX_SIZE], b[MAX_SIZE], c[MAX_SIZE];
    double x1, x2;
   
    printf("Введите значение a: ");
    cin >> a;
    if (static_cast<int>(a[0]) > 57 && static_cast<int>(a[0]) != 45 || static_cast<int>(a[0]) < 48 && static_cast<int>(a[0]) != 45) {
        printf("Ошибка - введен неправильный символ...\n");
        system("pause");
        return 0;
    }
    printf("Введите значение b: ");
    cin >> b;
    if (static_cast<int>(b[0]) > 57 && static_cast<int>(b[0]) != 45 || static_cast<int>(b[0]) < 48 && static_cast<int>(b[0]) != 45) {
        printf("Ошибка - введен неправильный символ...\n");
        system("pause");
        return 0;
    }
    printf("Введите значение c: ");
    cin >> c;
    if (static_cast<int>(c[0]) > 57 && static_cast<int>(c[0]) != 45 || static_cast<int>(c[0]) < 48 && static_cast<int>(c[0]) != 45) {
        printf("Ошибка - введен неправильный символ...\n");
        system("pause");
        return 0;
    }
    

    if ((atof(b) * atof(b) - 4 * atof(a) * atof(c)) >= 0) //Если дискриминант больше или равен 0
    {
        x1 = (-1 * atof(b) + sqrt(atof(b) * atof(b) - 4 * atof(a) * atof(c))) / (2 * atof(a));
        printf("Первый корень равен %f\n", x1);
        x2 = (-1 * atof(b) - sqrt(atof(b) * atof(b) - 4 * atof(a) * atof(c))) / (2 * atof(a));
        printf("Второй корень равен %f\n", x2);
    }
    else
    {
        printf("Дискриминант меньше 0, корни невещественные!\n");
    }
  
    system("pause");
    return 0;
}