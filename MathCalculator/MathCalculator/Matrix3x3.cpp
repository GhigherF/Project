#include <iostream>
#include "Windows.h"
#include "MainAlgebraModule.h"
using namespace std;
#define MAX_SIZE 500
#define n 3
int Matrix3x3()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char ElementValue[MAX_SIZE];
	int a[n][n], i, j, sum1 = 0, sum2 = 0, d = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++){
			printf("Ёлемент [%d][%d] = ", i, j);
			cin >> ElementValue;
			if (static_cast<int>(ElementValue[0]) > 57 && static_cast<int>(ElementValue[0]) != 45 || static_cast<int>(ElementValue[0]) < 48 && static_cast<int>(ElementValue[0]) != 45) {
				printf("ќшибка - введен неправильный символ....\n");
				system("pause");
				return 0;
			}else { a[i][j] = atoi(ElementValue);}
		}
			
	}
	printf("”казанна€ матрица:\n");
	printf("-------------------\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout.width(5);
			cout << a[i][j];
		}
		cout << endl;
	}
	printf("-------------------\n");
	d = (a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[1][0] * a[2][1] * a[0][2]) - ((a[0][2] * a[1][1] * a[2][0]) + (a[1][0] * a[2][2] * a[0][1]) + (a[1][2] * a[2][1] * a[0][0]));
	printf("ќпределитель матрицы равен: %d\n", d);
	system("pause");
	return 0;
}