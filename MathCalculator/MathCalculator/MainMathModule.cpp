#include <iostream>
#include "MainMathModule.h"
#include "Discriminant.h"
#include "CurvedTrapezoidArea.h"
#include "NLogarithm.h"
#include "Logarithm10.h"
using namespace std;



void MainMathModule()
{
	int exited = true;
	while (exited) {
		int UserChoise;
		printf("\033c");
		printf("Добро пожаловать в модуль МатАнализа!\nВыберите один из доступных пунктов:\n");
		printf("1.Нахождение корней уравнения\n");
		printf("2.Вычисление площади криволинейной трапеции\n");
		printf("3.Вычисление натурального логарифма числа\n");
		printf("4.Вычисление десятичного логарифма числа\n");
		printf("5.Выход\n");
		cin >> UserChoise;
		switch (UserChoise)
		{
		case 1: 
			Discriminant();
			break;
		case 2:
			CurvedTrapezoidArea();
			break;
		case 3:
			NLogarithm();
			break;
		case 4:
			Logarithm10();
			break;
		case 5:
			exited = false;
			break;
		default:
			printf("Выбран неверный вариант меню! Повторите ввод\n");
			system("pause");
			break;
		}

	}

}
