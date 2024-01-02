#include <iostream>
#include "MainAlgebraModule.h"
#include "Matrix3x3.h"
#include "VectorDistance.h"
#include "VectorAddition.h"
#include "VectorSubstraction.h"
#include "Factorial.h"
#include "MatrixSummation.h"
using namespace std;

void MainAlgebraModule()
{
	int exited = true;
	while (exited) {
		int UserChoise;
		printf("\033c");
		printf("Добро пожаловать в модуль Линейной Алгебры!\nВыберите один из доступных пунктов:\n");
		printf("1.Посчитать определитель матрицы 3*3\n");
		printf("2.Нахождение вектора\n");
		printf("3.Сложение векторов\n");
		printf("4.Вычитание векторов\n");
		printf("5.Посчитать факториал числа\n");
		printf("6.Сложение матриц\n");
		printf("7.Выход\n");
		cin >> UserChoise;
		switch (UserChoise)
		{
		case 1:
			Matrix3x3();
			break;
		case 2:
			VectorDistance();
			break;
		case 3:
			VectorAddition();
			break;
		case 4:
			VectorSubstraction();
			break;
		case 5:
			Factorial();
			break;
		case 6: 
			MatrixSummation();
			break;
		case 7:
			exited = false;
			break;
		default:
			printf("Выбран неверный вариант меню! Повторите ввод\n");
			system("pause");
			break;
		}
		
	}
}
