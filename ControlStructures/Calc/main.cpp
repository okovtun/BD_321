#include<iostream>
using namespace std;

//#define CALC_IF
#define CALC_SWITCH

void main()
{
	setlocale(LC_ALL, "");

#ifdef CALC_IF
	//cout << "Calc" << endl;
	double a, b;	//числа, вводимые с клавиатуры
	char s;			//Sign - знакоперации
	cout << "Введите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
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
		cout << "Error: No operation" << endl;
	}
#endif // CALC_IF

#ifdef CALC_SWITCH
	//TODO: Калькулятор при помощи switch:

#endif // CALC_SWITCH

}