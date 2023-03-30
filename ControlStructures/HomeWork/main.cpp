#include <iostream>
using namespace std;

#define delimiter "----------------------------------------------------------------------------------------\n"
#define FACTORIAL
#define POWER

void ascii()
{
	cout << "ASCII" << endl;
	for (int i = 0; i <= 255; i++)
	{
		cout << (char)i;
		if ((i + 1) % 16 == 0)
		{
			cout << endl;
		}
	}
	cout << delimiter;
}

void main()
{
	ascii();
	setlocale(LC_ALL, "");
	ascii();						//����� setlocale ��������� ������� �������� �� ������ ��� �� ���������
#ifdef FACTORIAL
	cout << "Factorial" << endl;
	int num;
	int factorial = 1;
	cout << "������� �����: "; cin >> num;
	for (int i = 1; i <= num; i++)
	{
		factorial *= i;
	}
	cout << num << "! = " << factorial << endl;
	cout << delimiter;
#endif
#ifdef POWER
	cout << "Power" << endl;
	int a;
	int n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "� ����� ������� ���������: "; cin >> n;
	int power = 1;
	for (int i = 1; i <= n; i++)
	{
		power *= a;
	}
	cout << a << "^" << n << " = " << power << endl;
	cout << delimiter;
#endif
}