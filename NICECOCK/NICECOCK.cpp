#include <iostream>
#include <fstream>
#include <dos.h>
#include <windows.h>
#include <cstdlib>
#include <string>	
using namespace std;

int main()

{
	float curse[10],coef,amount;
	long n=9999999999999;
	char* buffer = new char[n + 1];
	buffer[n] = 0;
	int i = 0,count,j,meow=0,choose;
	string gg,s;
	ifstream file; 
	file.open("\u0043\u003A\u005C\u0055\u0073\u0065\u0072\u0073\u005C\u0073\u0074\u0075\u0064\u0065\u005C\u004F\u006E\u0065\u0044\u0072\u0069\u0076\u0065\u005C\u0420\u0430\u0431\u043E\u0447\u0438\u0439\u0020\u0441\u0442\u043E\u043B\u005C\u0412\u0441\u044F\u043A\u043E\u0435\u005C\u0424\u0430\u0439\u043B\u044B\u005C\u0076\u0069\u0073\u0075\u0061\u006C\u0020\u0053\u0074\u0075\u0064\u0069\u006F\u005C\u004C\u0061\u0062\u0061\u0020\u0031\u0033\u005C\u0064\u006F\u0070\u0020\u0035\u005C\u0031\u002E\u0074\u0078\u0074");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const char* ggg[1000] = { "\u0063\u0075\u0072\u006C\u0020\u0068\u0074\u0074\u0070\u0073\u003A\u002F\u002F\u0073\u0065\u006C\u0065\u0063\u0074\u002E\u0062\u0079\u002F\u006B\u0075\u0072\u0073\u002F\u0020\u0022\u0043\u003A\u005C\u0055\u0073\u0065\u0072\u0073\u005C\u0073\u0074\u0075\u0064\u0065\u005C\u004F\u006E\u0065\u0044\u0072\u0069\u0076\u0065\u005C\u0420\u0430\u0431\u043E\u0447\u0438\u0439\u0020\u0441\u0442\u043E\u043B\u005C\u0412\u0441\u044F\u043A\u043E\u0435\u005C\u0424\u0430\u0439\u043B\u044B\u005C\u0076\u0069\u0073\u0075\u0061\u006C\u0020\u0053\u0074\u0075\u0064\u0069\u006F\u005C\u004C\u0061\u0062\u0061\u0020\u0031\u0033\u005C\u0064\u006F\u0070\u0020\u0035\u0022\u003E\u003E\u0022\u0043\u003A\u005C\u0055\u0073\u0065\u0072\u0073\u005C\u0073\u0074\u0075\u0064\u0065\u005C\u004F\u006E\u0065\u0044\u0072\u0069\u0076\u0065\u005C\u0420\u0430\u0431\u043E\u0447\u0438\u0439\u0020\u0441\u0442\u043E\u043B\u005C\u0412\u0441\u044F\u043A\u043E\u0435\u005C\u0424\u0430\u0439\u043B\u044B\u005C\u0076\u0069\u0073\u0075\u0061\u006C\u0020\u0053\u0074\u0075\u0064\u0069\u006F\u005C\u004C\u0061\u0062\u0061\u0020\u0031\u0033\u005C\u0064\u006F\u0070\u0020\u0035\u005C\u0031\u002E\u0074\u0078\u0074\u0022" };
	system(*ggg);
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	system("cls");
	::ShowWindow(::GetConsoleWindow(), SW_SHOW);
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	::ShowWindow(::GetConsoleWindow(), SW_SHOW);


	file.get(buffer, n,EOF); 
	
		for (i = 140000; i < 200000; i++)
		{
			s = "";
			s += buffer[i];
			s += buffer[i + 1];
			s += buffer[i + 2];
			s += buffer[i + 3];
			s += buffer[i + 4];
			if (s == "value") {
				count = 0;
				gg = "";
				j = -1;
				while (buffer[i] != '\"' and count != 2)
				{
					j += 1;
					if (buffer[i + j] == '\"')count += 1;
					if (count == 1 and buffer[i+j]!='\"')
					{
						gg += buffer[i+j];
					}

					
				}

	curse[meow]=stof(gg);
	meow += 1;
			}
	}
		cout << "Today:" << endl;

		for (i = 0; i < meow; i++)
		{
			if (i == 0) cout << "BYN:" << curse[i]<<endl;
			if (i == 1) cout << "USD:" << curse[i]<<endl;
			if (i == 2) cout << "EUR:" << curse[i]<<endl;
			if (i == 3) cout << "RUB:" << curse[i]<<endl;
			if (i == 4) cout << "PLN:" << curse[i]<<endl;
			if (i == 5) cout << "UAH:" << curse[i]<<endl;

		}
	
		cout << endl<<"Choose operation:" << endl << "BYN-->USD --- 11      " << "USD-->BYN --- 21    " << "EUR-->BYN --- 31    " << "RUB-->BYN --- 41    " << "PLN-->BYN --- 51    " << "UAH-->BYN --- 61" << endl;
		cout << "BYN-->EUR --- 12      " << "USD-->EUR --- 22    " << "EUR-->USD --- 32    " << "RUB-->USD --- 42    " << "PLN-->USD --- 52    " << "UAH-->USD --- 62" << endl;
		cout  << "BYN-->RUB --- 13      " << "USD-->RUB --- 23    " << "EUR-->RUB --- 33    " << "RUB-->EUR --- 43    " << "PLN-->EUR --- 53    " << "UAH-->EUR --- 63" << endl;
		cout <<"BYN-->PLN --- 14      " << "USD-->PLN --- 24    " << "EUR-->PLN --- 34    " << "RUB-->PLN --- 44    " << "PLN-->RUB --- 54    " << "UAH-->RUB --- 64" << endl;
		cout <<  "BYN-->UAH --- 15      " << "USD-->UAH --- 25    " << "EUR-->UAH --- 35    " << "RUB-->UAH --- 45    " << "PLN-->UAH --- 55    " << "UAH-->PLN --- 65" << endl;

		cout << endl;
		cin >> choose;

		switch(choose)
		{
		case 11:
		{
			coef = curse[1]/curse[0];
			cout << "BYN:";
			cin >> amount;
			cout << endl << "USD:" << amount * coef;
			break;
		}
		case 12:
		{
			coef = curse[2] / curse[0];
			cout << "BYN:";
			cin >> amount;
			cout << endl << "EUR:" << amount * coef;
			break;
		}
		case 13:
		{
			coef = curse[3] / curse[0];
			cout << "BYN:";
			cin >> amount;
			cout << endl << "RUB:" << amount * coef;
			break;
		}
		case 14:
		{
			coef = curse[4] / curse[0];
			cout << "BYN:";
			cin >> amount;
			cout << endl << "PLN:" << amount * coef;
			break;
		}
		case 15:
		{
			coef = curse[5] / curse[0];
			cout << "BYN:";
			cin >> amount;
			cout << endl << "UAH:" << amount * coef;
			break;
		}











		case 21:
		{
			coef = curse[0] / curse[1];
			cout << "USD:";
			cin >> amount;
			cout << endl << "BYN:" << amount * coef;
			break;
		}
		case 22:
		{
			coef = curse[2] / curse[1];
			cout << "USD:";
			cin >> amount;
			cout << endl << "EUR:" << amount * coef;
			break;
		}
		case 23:
		{
			coef = curse[3] / curse[1];
			cout << "USD:";
			cin >> amount;
			cout << endl << "RUB:" << amount * coef;
			break;
		}
		case 24:
		{
			coef = curse[4] / curse[1];
			cout << "USD:";
			cin >> amount;
			cout << endl << "PLN:" << amount * coef;
			break;
		}
		case 25:
		{
			coef = curse[5] / curse[1];
			cout << "USD:";
			cin >> amount;
			cout << endl << "UAH:" << amount * coef;
			break;
		}













		case 31:
		{
			coef = curse[0] / curse[2];
			cout << "EUR:";
			cin >> amount;
			cout << endl << "BYN:" << amount * coef;
			break;
		}
		case 32:
		{
			coef = curse[1] / curse[2];
			cout << "EUR:";
			cin >> amount;
			cout << endl << "USD:" << amount * coef;
			break;
		}
		case 33:
		{
			coef = curse[3] / curse[2];
			cout << "EUR:";
			cin >> amount;
			cout << endl << "RUB:" << amount * coef;
			break;
		}
		case 34:
		{
			coef = curse[4] / curse[2];
			cout << "EUR:";
			cin >> amount;
			cout << endl << "PLN:" << amount * coef;
			break;
		}
		case 35:
		{
			coef = curse[5] / curse[2];
			cout << "EUR:";
			cin >> amount;
			cout << endl << "UAH:" << amount * coef;
			break;
		}















		case 41:
		{
			coef = curse[0] / curse[3];
			cout << "RUB:";
			cin >> amount;
			cout << endl << "BYN:" << amount * coef;
			break;
		}
		case 42:
		{
			coef = curse[1] / curse[3];
			cout << "RUB:";
			cin >> amount;
			cout << endl << "USD:" << amount * coef;
			break;
		}
		case 43:
		{
			coef = curse[2] / curse[3];
			cout << "RUB:";
			cin >> amount;
			cout << endl << "EUR:" << amount * coef;
			break;
		}
		case 44:
		{
			coef = curse[4] / curse[3];
			cout << "RUB:";
			cin >> amount;
			cout << endl << "PLN:" << amount * coef;
			break;
		}
		case 45:
		{
			coef = curse[5] / curse[3];
			cout << "RUB:";
			cin >> amount;
			cout << endl << "UAH:" << amount * coef;
			break;
		}


		case 51:
		{
			coef = curse[0] / curse[4];
			cout << "PLN:";
			cin >> amount;
			cout << endl << "BYN:" << amount * coef;
			break;
		}
		case 52:
		{
			coef = curse[1] / curse[4];
			cout << "PLN:";
			cin >> amount;
			cout << endl << "USD:" << amount * coef;
			break;
		}
		case 53:
		{
			coef = curse[2] / curse[4];
			cout << "PLN:";
			cin >> amount;
			cout << endl << "EUR:" << amount * coef;
			break;
		}
		case 54:
		{
			coef = curse[3] / curse[4];
			cout << "PLN:";
			cin >> amount;
			cout << endl << "RUB:" << amount * coef;
			break;
		}
		case 55:
		{
			coef = curse[5] / curse[4];
			cout << "PLN:";
			cin >> amount;
			cout << endl << "UAH:" << amount * coef;
			break;
		}







		case 61:
		{
			coef = curse[0] / curse[5];
			cout << "UAH:";
			cin >> amount;
			cout << endl << "BYN:" << amount * coef;
			break;
		}
		case 62:
		{
			coef = curse[1] / curse[5];
		cout << "UAH:";
		cin >> amount;
		cout << endl << "USD:" << amount * coef;
		break;
		}
		case 63:
		{
			coef = curse[2] / curse[5];
			cout << "UAH:";
			cin >> amount;
			cout << endl << "EUR:" << amount * coef;
			break;
		}
		case 64:
		{
			coef = curse[3] / curse[5];
			cout << "UAH:";
			cin >> amount;
			cout << endl << "RUB:" << amount * coef;
			break;
		}
		case 65:
		{
			coef = curse[4] / curse[5];
			cout << "UAH:";
			cin >> amount;
			cout << endl << "PLN:" << amount * coef;
			break;
		}


		}








	




	file.close();
	delete[] buffer;
}

