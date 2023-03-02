//DataTypes
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define delimiter "\n-----------------------\n"


//Строчный комментарий (действует от // до конца строки)
/*	(начало блочного комментария)
	Блочный комментарий
	(конец блочного комментария)
*/

/*
	1. Для комментирования своих действий в исходном коде;
	2. Для временного отключения фрагментов кода, без удаления;
*/

//#define LOGICAL_TYPES
//#define NUMERIC_TYPES
//#define DECLARATION_AND_INITIALISATION_OF_VARIABLES

void main()
{
	setlocale(LC_ALL, "Russian");	//Эта строка нужна для вывода Кириллицы в консоль.

#if defined LOGICAL_TYPES
	cout << "DataTypes" << endl;
	//оба этих выражения приводят к одному и тому же результату
	cout << "\n";	//newline
	cout << endl;	//endline
	cout << true << endl;
	cout << false << endl;
#endif

#ifdef NUMERIC_TYPES
	cout << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << 0 << " ... " << UINT_MAX << endl;
	cout << delimiter << endl;

	cout << "long long занимает " << sizeof(long long) << " Байт памяти" << endl;
	cout << "unsigned long long:" << 0 << " ... " << ULLONG_MAX << endl;
	cout << "  signed long long:" << LLONG_MIN << " ... " << LLONG_MAX << endl;
	cout << delimiter << endl;

	cout << "FLOAT:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << delimiter << endl;

	cout << "DOUBLE:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
#endif // NUMERIC_TYPES

#ifdef DECLARATION_AND_INITIALISATION_OF_VARIABLES
	float Price;
	//cout << Price << endl;

	//snake_case_style
	//PascalCaseStyle
	//CamelCaseStyle
	//BigCamel
	//smallCamel
	double price_of_coffee;
	int number_of_cups;
	//Инициализация вводом с клавиатуры: 
	cout << "Введите стоимость чашки кофе: "; cin >> price_of_coffee;
	cout << "Введите количество чашек: "; cin >> number_of_cups;
	cout << price_of_coffee << endl;
	cout << number_of_cups << endl;
	double total_price = price_of_coffee * number_of_cups;
	cout << "Общая стоимость: " << total_price << endl;
#endif // DECLARATION_AND_INITIALISATION_OF_VARIABLES

	int speed = 0;
	const int MAX_SPEED = 250;
	speed = 10;
	//cout << speed << endl;
	//MAX_SPEED = 320;	//Expression must be a modifiable l-value

	5;	//числовая константа типа 'int'
	//По умолчанию целочисленные константы типа 'int'
	/*cout << sizeof(5) << endl;
	cout << typeid(5ULL).name() << endl;
	long long int a;
	cout << typeid(a).name() << endl;*/

	//По умолчанию вещественные константы типа 'double'
	5.0;	//числовая константа типа 'double'
	5.;		//числовая константа типа 'double'
	0.5;	//числовая константа типа 'double'
	.5;		//числовая константа типа 'double'
	//cout << typeid(5.f).name() << endl;

	//Символьная константа - это один единственный символ, заклюенный в одинарные кавычки.
	cout << typeid('+').name() << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;	//NULL terminator
	cout << sizeof("Hello") << endl;
}