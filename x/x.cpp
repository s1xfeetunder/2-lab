#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


int main() {
	int c;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


do{
	
	cin >> c;
	switch (c) {
	case 1: 
	{

		{
			
			string a;
			cout << "Как Вас зовут? " << endl;
			cin >> a;
			cout << "Добрый день," << a << endl;
		}

	}break;
	case 2: {
		string  n, m;
		int g;
		cout << "Как Вас зовут?" << endl;
		cin >> n;
		cout << "Где Вы учитесь?" << endl;
		cin >> m;
		cout << "Сколько Вам лет" << endl;
		cin >> g;
		cout << "Добрый день," << n << endl;
		cout << "Поздравляем Вас," << "Вам всего " << g << ", а Вы уже добились таких высот " << endl;
		cout << m << " будет гордится вами" << endl;
	}break;
	case 3: {

		{

			int  x, x2;
			cout << "Загадайте число" << endl;
			cout << "Умножте число 2" << endl;
			cout << "Прибавте 10" << endl;
			cout << "Умножте число на 4" << endl;
			cout << "Введите получившееся число:" << endl;
			cin >> x;
			x2 = ((x/4)-10)/2;
			cout << "--------------------------" << endl;
			cout << "Загаданное вами число:" << x2 << endl;;
		}

	}break;
	case 4:
	{

		{

			int a, b, t;
			cout << "Введите число A:" << endl;
			cin >> a;
			cout << "Введите число B:" << endl;
			cin >> b;
			cout << "A=" << a << " " << "B=" << b << endl;
			t=a;
			a=b;
			b=t;
			cout << "Меняем местами:" << endl;
			cout << "A=" << a << " " << "B=" << b;
		}

	}break;
	case 5:
	{

		{

			int a, b, c, t, u;
			cout << "Введите число A:" << endl;
			cin >> a;
			cout << "Введите число B:" << endl;
			cin >> b;
			cout << "Введите число C:" << endl;
			cin >> c;
			cout << "A=" << a << " " << "B=" << b << " " << " C=" << c << endl;
			u=b;
			b=a;
			t=c;
			a=t;
			c=u;
			cout << "Меняем местами:" << endl;
			cout << "A=" << a << " " << "B=" << b << " " << " C=" << c << endl;
		}

	}break;
	case 6:
	{

		{

			int a, b, c, d, t, u, y;
			cout << "Введите число A:" << endl;
			cin >> a;
			cout << "Введите число B:" << endl;
			cin >> b;
			cout << "Введите число C:" << endl;
			cin >> c;
			cout << "Введите число D:" << endl;
			cin >> d;
			cout << "A=" << a << " " << "B=" << b << " " << " C=" << c << " " << "D=" << d << endl;
			
			y = d;
			u = b;
			b = a;
			t = c;
			a = y;
			c = u;
			d = t;

			cout << "Меняем местами:" << endl;
			cout << "A=" << a << " " << "B=" << b << " " << " C=" << c << " " << "D=" << d << endl;
		}

	}break;
	case 7:
	{

		{

			string b;
			cout << "Введите строку текста:" << endl;
			cin >> b;
			cout << b << endl;
			return 0;
		}

	}break;
	case 8:
	{

		{

			string a, b, n, m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
			cout << "Заполните анкету:" << endl;
			cout << "Фамилия:";
			cin >> a1;
			cout << "Имя:";
			cin >> a2;
			cout << "Отчество:";
			cin >> a3;
			cout << "Пол:";
			cin >> a4;
			cout << "Дата рождения:";
			cin >> a5;
			cout << "Адрес:";
			cin.ignore();
			getline(cin, a6);
			cout << "Номер телефона:";
			getline(cin, a7);
			cout << "Место обучения:";
			getline(cin, a8);
			cout << "Группа:";
			getline(cin, a9);
			cout << "Хобби:";
			getline(cin, a10);
			cout << "       Фамилия:" << a1 << endl;
			cout << "           Имя:" << a2 << endl;
			cout << "      Отчество:" << a3 << endl;
			cout << "           Пол:" << a4 << endl;
			cout << " Дата рождения:" << a5 << endl;
			cout << "         Адрес:" << a6 << endl;
			cout << "Номер телефона:" << a7 << endl;
			cout << "Место обучения:" << a8 << endl;
			cout << "        Группа:" << a9 << endl;
			cout << "         Хобби:" << a10 << endl;
			cout << "                                                        Анкета" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "                           ";
			cout << "Фамилия:" << a1;
			cout << "       ";
			cout << "Имя:" << a2;
			cout << "       ";
			cout << "Отчество:" << a3 << endl;;
			cout << "                           ";
			cout << "Номер телефона:" << a7;
			cout << "            ";
			cout << "Хобби:" << a10 << endl;;
			cout << "                           ";
			cout << "Место обучения:" << a8;
			cout << "            ";
			cout << "Группа:" << a9 << endl;
			cout << "                           ";
			cout << "Дата рождения:" << a5;
			cout << "            ";
			cout << "Пол:" << a4 << endl;
			cout << "                           ";
			cout << "Адрес:" << a6 << endl;
		}

	}break;
	}


}while(c!=0);
}