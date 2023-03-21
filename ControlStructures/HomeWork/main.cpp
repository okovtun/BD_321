#include<iostream>
using namespace std;

//#define CALC_IF
//#define CALC_SWITCH
//#define LOOP


void main()
{
	setlocale(LC_ALL, "");
#ifdef CALC_IF
	//cout << "Calc " << endl;
	double a, b; // числа вводимые с клавиатуры
	char s; // sing знак операции
	cout << "Введите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " - " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error Operation " << endl;
	}
#endif
#ifdef CALC_SWITCH
	double a, b;
	char s;
	cout << "Введите простое арифмитическое выражение: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error Operation " << endl;
	}
#endif
#ifdef LOOP
	int  buffer, reverse, k, number;
	cout << "Введите число: "; cin >> number;
	buffer = number;
	reverse = 0;

	while (number != 0)
	{
		k = number % 10;
		number = number / 10;
		reverse = reverse * 10 + k;
	}
	if (buffer == reverse)
		cout << "Палиндром "; else cout << "Не палиндром" << endl;
#endif
}
