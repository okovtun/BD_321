#include<iostream>
using namespace std;

int Add(int a = 0, int b = 0, int c = 0);	//Прототип функции (Объявление функции - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

//Default arguments, Default parameters

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a,b);	//Вызов (использование) функции (Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	//cout << a << " ^ " << b << " = " << power(a, b) << endl;
}

int Add(int a = 0, int b = 0, int c = 0)		//Реализация функции (Определение функции - Function definition)
{
	//Addition - сложение
	int sum = a + b + c;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction - вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - умножение
	return a * b;
}
double Div(int a, int b)
{
	//Division - деление
	return (double)a / b;
}
