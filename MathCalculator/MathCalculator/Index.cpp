#include <iostream>
#include <Windows.h>
#include "exit.h"
#include "MainMathModule.h"
#include "MainAlgebraModule.h"
#include "ConverterModule.h"
using namespace std;

int main()
{
	int UserOption, NotExit = true;
    setlocale(LC_CTYPE, "Russian");
    printf("Здравствуйте!\n");
    Sleep(1000);
	printf("Выберите режим работы:\n");
	printf("1. Калькулятор\n");
	printf("2. Конвертер валют\n");
	cin >> UserOption;
	switch (UserOption)
	{
	case 1:
		while (NotExit) 
		{
			printf("\033c");
			printf("Выберите один из доступных вариантов:\n");
			printf("1. Математический анализ\n");
			printf("2. Линейная Алгебра\n");
			printf("3. Выход\n");
			cin >> UserOption;
			switch (UserOption)
			{
			case 1:
				MainMathModule();
				break;
			case 2:
				MainAlgebraModule();
				break;
			case 3:
				printf("\033c");
				printf("Выход....");
				exit(NotExit);
				break;
			default:
				printf("Ошибка, повторите ввод!\n");
				break;
			}
		}
	case 2: 
		while (NotExit) 
		{
			printf("\033c");
			printf("Выберите один из доступных вариантов:\n");
			printf("1. За работу!\n");
			printf("2. Выход\n");
			cin >> UserOption;
			switch (UserOption)
			{
			case 1:
				MainConverterModule();
				
				break;
				
			case 2:
				printf("Выход....");
				exit(NotExit);
				break;
			default:
				printf("Ошибка, повторите ввод!\n");
				break;
			}
		}
	default:
		printf("Ошибка, повторите ввод!\n");
		break;
	}
	
}