//Operators
#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS	//1) Арифметические операторы
#define ASSIGNMENT_OPERATOR			//2) Оператор присваивания (Assignment operator) = 

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Operators" << endl;
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary aster
	//*3;	//Оператор '*' бывает только бинарным

#ifdef ARITHMETICAL_OPERATORS
	//Unary: +, -;
	//Binary:+, -, *, /, %;
	//% - остаток от деления
	cout << -17 / 3 << endl;
	//cout << 17. % 3 << endl;
	cout << -17 % 3 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//	= Assignment operator

	//			l-value = r-value;
	//	l-value (left value) - переменная слева, в которую производится запись.
	//	r-value (right value) - выражение справа, значение которого записывается налево.

	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

}