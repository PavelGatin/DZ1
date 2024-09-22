#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 0;
	int a1, b1, c1;
	string a2, b2, c2;

	cout << "0 - Присоединение слов" << endl << "1 - Сумма чисел" << endl << "2 - Вычитание чисел" << endl << "3 - Умножение чисел" << endl << "4 - Деление чисел" << endl;
	cout << "Выберите команду: ";
	cin >> i;

	if (i == 0) {
		cout << "Введите 1-ое слово: ";
		cin >> a2;
		cout << "Введите 2-ое слово: ";
		cin >> b2;
		c2 = a2 + " " + b2;
		cout << "Результат: " << c2 << endl;
	}
	else {
		cout << "Введите 1-ое число: ";
		cin >> a1;
		cout << "Введите 2-ое число: ";
		cin >> b1;
		if (i == 1) {
			c1 = a1 + b1;
		}else if (i == 2) {
			c1 = a1 - b1;
		}else if (i == 3) {
			c1 = a1 * b1;
		}else if (i == 4) {
			c1 = a1 / b1;
		}
		cout << "Результат: " << c1 << endl;
	}
}