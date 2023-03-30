#include<iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FOR_BASICS
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define CLOCK

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

#ifdef FACTORIAL
	int number;
	cout << "������� ����� ��� ���������� ����������: "; cin >> number;
	int factorial = 1;
	for (int i = 1; i <= number; i++)
	{
		cout << i << "! = ";
		factorial *= i;
		cout << factorial << ";\n";
	}
#endif // FACTORIAL

#ifdef POWER
	double a;		//��������� �������
	int n;			//���������� �������
	double N = 1;	//�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;	//��������� ��������� � �����������
		n = -n;		//������ ���� ���������� �� ���������������
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
		cout << endl;
	}

#ifdef CLOCK
	for (int hh = 0; hh < 24; hh++)
	{
		for (int mm = 0; mm < 60; mm++)
		{
			for (int ss = 0; ss < 60; ss++)
			{
				system("CLS");
				cout << hh << ":" << mm << ":" << ss << endl;
				Sleep(100);
			}
		}
	}
#endif // CLOCK

}