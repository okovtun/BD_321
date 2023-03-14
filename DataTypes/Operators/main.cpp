//Operators
#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS	//1) Арифметические операторы
//#define ASSIGNMENT_OPERATOR		//2) Оператор присваивания (Assignment operator) = 
//#define INCREMENT_DECREMENT		//3) Increment/Decrement(++/--)
//#define COMPOUND_ASSIGNMENTS		//4) Составные присваивания
#define COMPARISON_OPERATOR			//5) Операторы сравнения

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Operators" << endl;
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary aster
	//*3;	//Оператор '*' бывает только бинарным
	true;
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

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор, который увеличивает значение переменной на 1.
	//Decrement (--) - это унарный оператор, который уменьшает значение переменной на 1.
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement
	//cout << i << endl;

	int j = ++i;
	
	cout << i << "\t" << j << endl;
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;


	a += b;		a = a + b;
	a -= b;		a = a - b;
	a *= b;		a = a * b;
	a /= b;		a = a / b;
	a %= b;		a = a % b;

#endif // COMPOUND_ASSIGNMENTS

#ifdef COMPARISON_OPERATOR
	//cout << (!true == false) << endl;
	cout << (true || false || false) << endl;
	cout << (true && true && false) << endl;

#endif // COMPARISON_OPERATOR

}