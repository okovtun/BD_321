#include<iostream>
#include<ctime>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FOR_BASICS
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define MULTIPLICATION_TABLE
//#define CLOCK
//#define PYTHAGORAS_TABLE
//#define FIBONACCI_1
//#define FIBONACCI_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	int n;
	cout << "Введите количество итераций: "; cin >> n;
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
	cout << "Введите число для вычисления Факториала: "; cin >> number;
	int factorial = 1;
	for (int i = 1; i <= number; i++)
	{
		cout << i << "! = ";
		factorial *= i;
		cout << factorial << ";\n";
	}
#endif // FACTORIAL

#ifdef POWER
	double a;		//основание степени
	int n;			//показатель степени
	double N = 1;	//Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;	//переносим основание в знаменатель
		n = -n;		//меняем знак показателя на противоположный
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

#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			/*if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << endl;*/
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

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

#ifdef PYTHAGORAS_TABLE
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			//cout << left;
			cout << i * j;
		}
		cout << endl;
	}
#endif // PYTHAGORAS_TABLE

#ifdef FIBONACCI_1
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1

#ifdef FIBONACCI_2
	int n;
	cout << "Введите количество членов ряда Фибоначчи: "; cin >> n;
	for (unsigned long long int i = 0, a = 0, b = 1, c = a + b; i++ < n; c = (a = b) + (b = c))
	{
		cout << i << "\t" << a << "\n";
	}
	cout << endl;
#endif // FIBONACCI_2

	int n;
	cout << "Введите предельное число: "; cin >> n;
	time_t t_start = time(NULL);
	for (int i = 0; i < n; i++)
	{
		bool simple = true;	//предположим что число простое,
		//но это нужно проветрить:
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;	//если условие уже выполнилось, значит мы уже выяснили,
				//что число составное, а это значит что дальше искать нет смысла,
				//мы уже нашли все что нужно.
				//Ключевое слово 'break' прерывает текущую итерацию, и все последующие
				//break; //прервет только j-й for, на i-й for, оно никак не подействует
			}
		}
		if (simple)cout << i << "\t";
	}
	time_t t_end = time(NULL);
	cout << endl;
	cout << "Поиск занял " << t_end - t_start << " секунд\n";
}