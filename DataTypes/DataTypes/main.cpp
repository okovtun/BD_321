//DataTypes
#include<iostream>
using namespace std;

#define delimiter "\n-----------------------\n"

//#define LOGICAL_TYPES

//Строчный комментарий (действует от // до конца строки)
/*	(начало блочного комментария)
	Блочный комментарий 
	(конец блочного комментария)
*/

/*
	1. Для комментирования своих действий в исходном коде;
	2. Для временного отключения фрагментов кода, без удаления;
*/

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

	cout << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << 0 << " ... " << UINT_MAX << endl;
	cout << delimiter << endl;

	cout << "long long занимает " << sizeof(long long) << " Байт памяти" << endl;
	cout << "unsigned long long:" << 0 << " ... " << ULLONG_MAX << endl;
	cout << "  signed long long:" << LLONG_MIN << " ... " << LLONG_MAX << endl;
}