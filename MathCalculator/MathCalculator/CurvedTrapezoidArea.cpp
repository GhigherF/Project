#include <iostream>
#include "CurvedTrapezoidArea.h"
#include <Windows.h>
#define MAX_PARTS 200
#define MAX_SIZE 500
using namespace std;
int CurvedTrapezoidArea() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int UserOption, NotExit = true;
	while (NotExit) {
		printf("\033c");
		printf("Âûáåðèòå ôóíêöèþ, êîòîðàÿ áóäåò îãðàíè÷èâàòü êðèâîëèíåéíóþ òðàïåöèþ: \n");
		printf("1. Ñèíóñ â êóáå\n");
		printf("2. Êîñèíóñ â êóáå\n");
		printf("3. Ýêñïîíåíòà\n");
		printf("4. X â êâàäðàòå\n");
		printf("5. Âûõîä\n");
		cin >> UserOption;
		switch (UserOption) {
		case 1:
			SinCubeFunction();
			break;
		case 2:
			CosCubeFunction();
			break;
		case 3:
			ExpFunction();
			break;
		case 4: 
			XSquared();
			break;
		case 5:
			return 0;
			break;
		default:
			printf("Âûáðàí íåâåðíûé âàðèàíò ìåíþ! Ïîâòîðèòå ââîä\n");
			system("pause");
			break;
		}
	}
	system("pause");
	return 0;
}
	int SinCubeFunction() {
		char ElementValue[MAX_SIZE];
		double a, b, h, S = 0;
		printf("\033c");
		printf("Ââåäèòå ãðàíèöû îòðåçêîâ: \n");
		cin >> ElementValue;
		if (static_cast<int>(ElementValue[0]) > 57 && static_cast<int>(ElementValue[0]) != 45 || static_cast<int>(ElementValue[0]) < 48 && static_cast<int>(ElementValue[0]) != 45) {
			printf("Îøèáêà - ââåäåí íåïðàâèëüíûé ñèìâîë....\n");
			system("pause");
			return 0;
		}
		else {
			a = atoi(ElementValue);
		}
		cin >> ElementValue;
		if (static_cast<int>(ElementValue[0]) > 57 && static_cast<int>(ElementValue[0]) != 45 || static_cast<int>(ElementValue[0]) < 48 && static_cast<int>(ElementValue[0]) != 45) {
			printf("Îøèáêà - ââåäåí íåïðàâèëüíûé ñèìâîë....\n");
			system("pause");
			return 0;
		}
		else {
			b = atoi(ElementValue);
		}
		h = abs((a - b) / MAX_PARTS);
		double x = b;
		S = S + h * ((pow(sin(x), 3)) + (pow(sin(x), 3) + h)) / 2;
		x = x + h;
		if (x > (a - h)) {
			printf("Ïëîùàäü êðèâîëèíåéíîé òðàïåöèè, îãðàíè÷åííîé ãðàôèêîì (sin(x))^3 = %lf\n", abs(S));
		}
		else {
			S = S + h * ((pow(sin(x), 3)) + (pow(sin(x), 3) + h)) / 2;
			x = x + h;
			if (x > (a - h)) {
				printf("Ïëîùàäü êðèâîëèíåéíîé òðàïåöèè, îãðàíè÷åííîé ãðàôèêîì (sin(x))^3 = %lf\n", abs(S));
			}
		}
		system("pause");
		return 0;
	}

	int CosCubeFunction() {
		char ElementValue[MAX_SIZE];
		double a, b, h, S = 0;
		printf("\033c");
		printf("Ââåäèòå ãðàíèöû îòðåçêîâ: \n");
		cin >> ElementValue;
		if (static_cast<int>(ElementValue[0]) > 57 && static_cast<int>(ElementValue[0]) != 45 || static_cast<int>(ElementValue[0]) < 48 && static_cast<int>(ElementValue[0]) != 45) {
			printf("Îøèáêà - ââåäåí íåïðàâèëüíûé ñèìâîë....\n");
			system("pause");
			return 0;
		}
		else {
			a = atoi(ElementValue);
		}
		cin	>> ElementValue;
		if (static_cast<int>(ElementValue[0]) > 57 && static_cast<int>(ElementValue[0]) != 45 || static_cast<int>(ElementValue[0]) < 48 && static_cast<int>(ElementValue[0]) != 45) {
			printf("Îøèáêà - ââåäåí íåïðàâèëüíûé ñèìâîë....\n");
			system("pause");
			return 0;
		}
		else {
			b = atoi(ElementValue);
		}
		h = abs((a - b) / MAX_PARTS);
		double x = b;
		S = S + h * ((pow(cos(x), 3)) + (pow(cos(x), 3) + h)) / 2;
		x = x + h;
		if (x > (a - h)) {
			printf("Ïëîùàäü êðèâîëèíåéíîé òðàïåöèè, îãðàíè÷åííîé ãðàôèêîì (cos(x))^3 = %lf\n", abs(S));
		}
		else {
			S = S + h * ((pow(cos(x), 3)) + (pow(cos(x), 3) + h)) / 2;
			x = x + h;
			if (x > (a - h)) {
				printf("Ïëîùàäü êðèâîëèíåéíîé òðàïåöèè, îãðàíè÷åííîé ãðàôèêîì (cos(x))^3 = %lf\n", abs(S));
			}
		}
		system("pause");
		return 0;
	}
	int ExpFunction() {
		char ElementValue[MAX_SIZE];
		double a, b, h, S = 0;
		printf("\033c");
		printf("Ââåäèòå ãðàíèöû îòðåçêîâ: \n");
		cin >> ElementValue;
		if (static_cast<int>(ElementValue[0]) > 57 && static_cast<int>(ElementValue[0]) != 45 || static_cast<int>(ElementValue[0]) < 48 && static_cast<int>(ElementValue[0]) != 45) {
			printf("Îøèáêà - ââåäåí íåïðàâèëüíûé ñèìâîë....\n");
			system("pause");
			return 0;
		}
		else {
			a = atoi(ElementValue);
		}
		cin >> ElementValue;
		if (static_cast<int>(ElementValue[0]) > 57 && static_cast<int>(ElementValue[0]) != 45 || static_cast<int>(ElementValue[0]) < 48 && static_cast<int>(ElementValue[0]) != 45) {
			printf("Îøèáêà - ââåäåí íåïðàâèëüíûé ñèìâîë....\n");
			system("pause");
			return 0;
		}
		else {
			b = atoi(ElementValue);
		}
		h = abs((a - b) / MAX_PARTS);
		double x = b;
		S = S + h * (exp(x) + ((exp(x) + h))) / 2;
		x = x + h;
		if (x > (a - h)) {
			printf("Ïëîùàäü êðèâîëèíåéíîé òðàïåöèè, îãðàíè÷åííîé ãðàôèêîì e^x = %lf\n", abs(S));
		}
		else {
			S = S + h * ((pow(cos(x), 3)) + (pow(cos(x), 3) + h)) / 2;
			x = x + h;
			if (x > (a - h)) {
				printf("Ïëîùàäü êðèâîëèíåéíîé òðàïåöèè, îãðàíè÷åííîé ãðàôèêîì e^x = %lf\n", abs(S));
			}
		}
		system("pause");
		return 0;
	}
	int XSquared() {
		char ElementValue[MAX_SIZE];
		double a, b, h, S = 0;
		printf("\033c");
		printf("Ââåäèòå ãðàíèöû îòðåçêîâ: \n");
		cin >> ElementValue;
		if (static_cast<int>(ElementValue[0]) > 57 && static_cast<int>(ElementValue[0]) != 45 || static_cast<int>(ElementValue[0]) < 48 && static_cast<int>(ElementValue[0]) != 45) {
			printf("Îøèáêà - ââåäåí íåïðàâèëüíûé ñèìâîë....\n");
			system("pause");
			return 0;
		}
		else {
			a = atoi(ElementValue);
		}
		cin >> ElementValue;
		if (static_cast<int>(ElementValue[0]) > 57 && static_cast<int>(ElementValue[0]) != 45 || static_cast<int>(ElementValue[0]) < 48 && static_cast<int>(ElementValue[0]) != 45) {
			printf("Îøèáêà - ââåäåí íåïðàâèëüíûé ñèìâîë....\n");
			system("pause");
			return 0;
		}
		else {
			b = atoi(ElementValue);
		}
		h = abs((a - b) / MAX_PARTS);
		double x = b;
		S = S + h * (pow(x, 2) + ((pow(x, 2) + h))) / 2;
		x = x + h;
		if (x > (a - h)) {
			printf("Ïëîùàäü êðèâîëèíåéíîé òðàïåöèè, îãðàíè÷åííîé ãðàôèêîì x^2 = %lf\n", abs(S));
		}
		else {
			S = S + h * ((pow(x, 2)) + (pow(x, 2)) + h) / 2;
			x = x + h;
			if (x > (a - h)) {
				printf("Ïëîùàäü êðèâîëèíåéíîé òðàïåöèè, îãðàíè÷åííîé ãðàôèêîì x^2 = %lf\n", abs(S));
			}
		}
		system("pause");
		return 0;
	}
