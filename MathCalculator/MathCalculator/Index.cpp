#include <iostream>
#include <Windows.h>
#include "exit.h"
#include "MainMathModule.h"
#include "MainAlgebraModule.h"
using namespace std;

int main()
{
	int UserOption, NotExit = true;
    setlocale(LC_CTYPE, "Russian");
    printf("Здравствуйте!\n");
    Sleep(1000);
    while (NotExit) {
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
}