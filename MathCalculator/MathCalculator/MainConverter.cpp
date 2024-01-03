#include <iostream>
#include <fstream>
#include <dos.h>
#include <windows.h>
#include <cstdlib>
#include <string>
#include "ConverterModule.h"
using namespace std;

void MainConverterModule()
{


	float curse[10], coeficent, amount;
	long n = 9999999999;
	char* buffer = new char[n + 1];
	buffer[n] = 0;
	int i = 0, count, j, counter = 0, choose;
	string number, search, control;
	ifstream file;
	file.open("\u0043\u003A\u005C\u0055\u0073\u0065\u0072\u0073\u005C\u0073\u0074\u0075\u0064\u0065\u005C\u004F\u006E\u0065\u0044\u0072\u0069\u0076\u0065\u005C\u0420\u0430\u0431\u043E\u0447\u0438\u0439\u0020\u0441\u0442\u043E\u043B\u005C\u0412\u0441\u044F\u043A\u043E\u0435\u005C\u0050\u0052\u004F\u004A\u0045\u0043\u0054\u005F\u0054\u004F\u005F\u004A\u0041\u0043\u0055\u0042\u0045\u004E\u004B\u004F\u005C\u0050\u0072\u006F\u006A\u0065\u0063\u0074\u005C\u004E\u0049\u0043\u0045\u0043\u004F\u0043\u004B\u005C\u0031\u002E\u0074\u0078\u0074");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const char* comand[1000] = { "\u0063\u0075\u0072\u006C\u0020\u0068\u0074\u0074\u0070\u0073\u003A\u002F\u002F\u0073\u0065\u006C\u0065\u0063\u0074\u002E\u0062\u0079\u002F\u006B\u0075\u0072\u0073\u002F\u0020\u003E\u0022\u0043\u003A\u005C\u0055\u0073\u0065\u0072\u0073\u005C\u0073\u0074\u0075\u0064\u0065\u005C\u004F\u006E\u0065\u0044\u0072\u0069\u0076\u0065\u005C\u0420\u0430\u0431\u043E\u0447\u0438\u0439\u0020\u0441\u0442\u043E\u043B\u005C\u0412\u0441\u044F\u043A\u043E\u0435\u005C\u0050\u0052\u004F\u004A\u0045\u0043\u0054\u005F\u0054\u004F\u005F\u004A\u0041\u0043\u0055\u0042\u0045\u004E\u004B\u004F\u005C\u0050\u0072\u006F\u006A\u0065\u0063\u0074\u005C\u004E\u0049\u0043\u0045\u0043\u004F\u0043\u004B\u005C\u0031\u002E\u0074\u0078\u0074\u0022" };
	system(*comand);
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	system("cls");
	::ShowWindow(::GetConsoleWindow(), SW_SHOW);
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	::ShowWindow(::GetConsoleWindow(), SW_SHOW);


	file.get(buffer, n, EOF);
	for (i = 0; i < strlen(buffer); i++)
	{
		search = "";
		search += buffer[i];
		search += buffer[i + 1];
		search += buffer[i + 2];
		search += buffer[i + 3];
		search += buffer[i + 4];
		if (search == "value" and (buffer[i + 7] > '0' and buffer[i + 7] < '9')) {
			count = 0;
			number = "";
			j = -1;
			while (buffer[i] != '\"' and count != 2)
			{
				j += 1;
				if (buffer[i + j] == '\"')count += 1;
				if (count == 1 and buffer[i + j] != '\"')
				{
					number += buffer[i + j];
				}


			}

			curse[counter] = stof(number);
			counter += 1;
		}
	}
	cout << "Today:" << endl;

	for (i = 0; i < counter; i++)
	{
		if (i == 0) cout << "BYN:" << curse[i] << endl;
		if (i == 1) cout << "USD:" << curse[i] << endl;
		if (i == 2) cout << "EUR:" << curse[i] << endl;
		if (i == 3) cout << "RUB:" << curse[i] << endl;
		if (i == 4) cout << "PLN:" << curse[i] << endl;
		if (i == 5) cout << "UAH:" << curse[i] << endl;

	}

	cout << endl << "Choose operation:" << endl << "BYN-->USD --- 11      " << "USD-->BYN --- 21    " << "EUR-->BYN --- 31    " << "RUB-->BYN --- 41    " << "PLN-->BYN --- 51    " << "UAH-->BYN --- 61" << endl;
	cout << "BYN-->EUR --- 12      " << "USD-->EUR --- 22    " << "EUR-->USD --- 32    " << "RUB-->USD --- 42    " << "PLN-->USD --- 52    " << "UAH-->USD --- 62" << endl;
	cout << "BYN-->RUB --- 13      " << "USD-->RUB --- 23    " << "EUR-->RUB --- 33    " << "RUB-->EUR --- 43    " << "PLN-->EUR --- 53    " << "UAH-->EUR --- 63" << endl;
	cout << "BYN-->PLN --- 14      " << "USD-->PLN --- 24    " << "EUR-->PLN --- 34    " << "RUB-->PLN --- 44    " << "PLN-->RUB --- 54    " << "UAH-->RUB --- 64" << endl;
	cout << "BYN-->UAH --- 15      " << "USD-->UAH --- 25    " << "EUR-->UAH --- 35    " << "RUB-->UAH --- 45    " << "PLN-->UAH --- 55    " << "UAH-->PLN --- 65" << endl;

	cout << endl;
	cin >> choose;

	switch (choose)
	{
	case 11:
	{
		coeficent = curse[1] / curse[0];
		cout << "BYN:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "USD:" << amount * coeficent;
		break;
	}
	case 12:
	{
		coeficent = curse[2] / curse[0];
		cout << "BYN:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "EUR:" << amount * coeficent;
		break;
	}
	case 13:
	{
		coeficent = curse[3] / curse[0];
		cout << "BYN:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "RUB:" << amount * coeficent;
		break;
	}
	case 14:
	{
		coeficent = curse[4] / curse[0];
		cout << "BYN:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "PLN:" << amount * coeficent;
		break;
	}
	case 15:
	{
		coeficent = curse[5] / curse[0];
		cout << "BYN:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "UAH:" << amount * coeficent;
		break;
	}




	case 21:
	{
		coeficent = curse[0] / curse[1];
		cout << "USD:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "BYN:" << amount * coeficent;
		break;
	}
	case 22:
	{
		coeficent = curse[2] / curse[1];
		cout << "USD:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "EUR:" << amount * coeficent;
		break;
	}
	case 23:
	{
		coeficent = curse[3] / curse[1];
		cout << "USD:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "RUB:" << amount * coeficent;
		break;
	}
	case 24:
	{
		coeficent = curse[4] / curse[1];
		cout << "USD:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "PLN:" << amount * coeficent;
		break;
	}
	case 25:
	{
		coeficent = curse[5] / curse[1];
		cout << "USD:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "UAH:" << amount * coeficent;
		break;
	}













	case 31:
	{
		coeficent = curse[0] / curse[2];
		cout << "EUR:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "BYN:" << amount * coeficent;
		break;
	}
	case 32:
	{
		coeficent = curse[1] / curse[2];
		cout << "EUR:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "USD:" << amount * coeficent;
		break;
	}
	case 33:
	{
		coeficent = curse[3] / curse[2];
		cout << "EUR:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "RUB:" << amount * coeficent;
		break;
	}
	case 34:
	{
		coeficent = curse[4] / curse[2];
		cout << "EUR:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "PLN:" << amount * coeficent;
		break;
	}
	case 35:
	{
		coeficent = curse[5] / curse[2];
		cout << "EUR:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "UAH:" << amount * coeficent;
		break;
	}















	case 41:
	{
		coeficent = curse[0] / curse[3];
		cout << "RUB:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "BYN:" << amount * coeficent;
		break;
	}
	case 42:
	{
		coeficent = curse[1] / curse[3];
		cout << "RUB:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "USD:" << amount * coeficent;
		break;
	}
	case 43:
	{
		coeficent = curse[2] / curse[3];
		cout << "RUB:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "EUR:" << amount * coeficent;
		break;
	}
	case 44:
	{
		coeficent = curse[4] / curse[3];
		cout << "RUB:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "PLN:" << amount * coeficent;
		break;
	}
	case 45:
	{
		coeficent = curse[5] / curse[3];
		cout << "RUB:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "UAH:" << amount * coeficent;
		break;
	}


	case 51:
	{
		coeficent = curse[0] / curse[4];
		cout << "PLN:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "BYN:" << amount * coeficent;
		break;
	}
	case 52:
	{
		coeficent = curse[1] / curse[4];
		cout << "PLN:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "USD:" << amount * coeficent;
		break;
	}
	case 53:
	{
		coeficent = curse[2] / curse[4];
		cout << "PLN:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "EUR:" << amount * coeficent;
		break;
	}
	case 54:
	{
		coeficent = curse[3] / curse[4];
		cout << "PLN:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "RUB:" << amount * coeficent;
		break;
	}
	case 55:
	{
		coeficent = curse[5] / curse[4];
		cout << "PLN:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "UAH:" << amount * coeficent;
		break;
	}







	case 61:
	{
		coeficent = curse[0] / curse[5];
		cout << "UAH:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "BYN:" << amount * coeficent;
		break;
	}
	case 62:
	{
		coeficent = curse[1] / curse[5];
		cout << "UAH:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "USD:" << amount * coeficent;
		break;
	}
	case 63:
	{
		coeficent = curse[2] / curse[5];
		cout << "UAH:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "EUR:" << amount * coeficent;
		break;
	}
	case 64:
	{
		coeficent = curse[3] / curse[5];
		cout << "UAH:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "RUB:" << amount * coeficent;
		break;
	}
	case 65:
	{
		coeficent = curse[4] / curse[5];
		cout << "UAH:";
		cin >> control;
		for (i = 0; i < size(control); i++)
		{
			if (control[i] < '0' or control[i]>'9')
			{
				cout << endl << "An error has occured";
				exit(999);
			}
		}
		amount = stof(control);
		if (amount * coeficent == 0 and control[0] != '0') { cout << endl << "An error has occured"; break; }
		cout << endl << "PLN:" << amount * coeficent;
		break;
	}


	}













	file.close();
	delete[] buffer;
}