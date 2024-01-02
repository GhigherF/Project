#include <iostream>
#include "MainAlgebraModule.h"
#include <Windows.h>
#define MAX_SIZE 500
using namespace std;
int Factorial() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char number[MAX_SIZE];
	int i, result = 1;
	printf("Введите число, факториал которого будет вычислен: ");
	cin >> number;
	if (static_cast<int>(number[0]) > 57 && static_cast<int>(number[0]) != 45 || static_cast<int>(number[0]) < 48 && static_cast<int>(number[0]) != 45) {
		printf("Ошибка - введен неправильный символ...\n");
		system("pause");
		return 0;
	}
	else { 
		for (i = 1; i <= atoi(number); i++) {
			result = result * i;
		}
		printf("Результат: %d\n", result);
	}
	system("pause");
	return 0;
}