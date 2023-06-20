#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void elevator(int floor);
int factorial(int n);
double power(int a, int n);
void fibonacci(long long int n, long long int a = 0, long long int b = 1);

//#define ELEVATOR
//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Recursion";
	//Stack - это модель памяти, из которой последний записанный элемент считывается первым.
	//Caller - вызывающая функция
	//Callee - вызываемая функция
	//Stack overflow exception
	//cout << "Для выхода нажмите Escape, для продолжения нажмите любую клавишу" << endl;
	//if(_getch() != 27)main();
	//Call stack

#ifdef ELEVATOR
	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
#endif // ELEVATOR

#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a;	//основание степени
	int n;	//показатель степени
	cout << "Введите основание и показатель степени: "; cin >> a >> n;
	cout << power(a, n) << endl;
#endif // POWER

	long long int n;
	cout << "Введите предельное число: "; cin >> n;
	fibonacci(n);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже\n";
	elevator(floor - 1);
	cout << "Вы на " << floor << " этаже\n";
}

int factorial(int n)
{
	/*if (n == 0)return 1;
	else return n * factorial(n - 1);*/
	return n == 0 ? 1 : n * factorial(n - 1);
}
double power(int a, int n)
{
	//a - основание стпени
	//n - показатель степени
	/*if (n == 0)return 1;
	else if (n > 0) return power(a, n - 1)*a;
	else return 1 / power(a, -n);*/
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);
}
void fibonacci(long long int n, long long int a, long long int b)
{
	if (a > n)return;
	cout << a << "\n";
	fibonacci(n, b, a + b);
}