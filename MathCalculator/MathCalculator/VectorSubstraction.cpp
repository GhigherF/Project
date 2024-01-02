#include <iostream>
#include <cmath>
#include  "MainAlgebraModule.h"
#define MAX_SIZE 500
using namespace std;

int VectorSubstraction()
{
    setlocale(LC_CTYPE, "RU");
     char x1[MAX_SIZE], y1[MAX_SIZE], z1[MAX_SIZE], x2[MAX_SIZE], y2[MAX_SIZE], z2[MAX_SIZE];
     int x, y, z;
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
    printf("Введите значение z1: ");
    cin >> z1;
    if (static_cast<int>(z1[0]) > 57 && static_cast<int>(z1[0]) != 45 || static_cast<int>(z1[0]) < 48 && static_cast<int>(z1[0]) != 45) {
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
    printf("Введите значение z2: ");
    cin >> z2;
    if (static_cast<int>(z2[0]) > 57 && static_cast<int>(z2[0]) != 45 || static_cast<int>(z2[0]) < 48 && static_cast<int>(z2[0]) != 45) {
        printf("Ошибка - введен неправильный символ...\n");
        system("pause");
        return 0;
    }
    x = atoi(x1) - atoi(x2);
    y = atoi(y1) - atoi(y2);
    z = atoi(z1) - atoi(z2);
    printf("При вычитании двух векторов получаем новый вектор с координатами (%d, %d,%d)\n", x, y, z);
    system("pause");
    return 0;
}