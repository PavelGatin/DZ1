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

	cout << "0 - ������������� ����" << endl << "1 - ����� �����" << endl << "2 - ��������� �����" << endl << "3 - ��������� �����" << endl << "4 - ������� �����" << endl;
	cout << "�������� �������: ";
	cin >> i;

	if (i == 0) {
		cout << "������� 1-�� �����: ";
		cin >> a2;
		cout << "������� 2-�� �����: ";
		cin >> b2;
		c2 = a2 + " " + b2;
		cout << "���������: " << c2 << endl;
	}
	else {
		cout << "������� 1-�� �����: ";
		cin >> a1;
		cout << "������� 2-�� �����: ";
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
		cout << "���������: " << c1 << endl;
	}
}