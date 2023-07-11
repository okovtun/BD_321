#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	//pa - pointer to 'a'
	cout << a << endl;	//вывод значения переменной 'a' на экран
	cout << &a << endl;	//взятие адреса переменной 'a' прямо привыводе
	cout << pa << endl;	//вывод адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;//Разыменовываем указатель 'pa', и получаем значение переменной 'a'

	int* pb;
	int b = 3;
	pb = &b;
	cout << *pb << endl;

	//int  - 'int'
	//int* - Указатель на 'int'
	//double  - 'double'
	//double* - Указатель на 'double'
	//char  - 'char'
	//char* - указатель на 'char'  
#endif // POINTERS_BASICS

	const int n = 5;
	short arr[n] = { 3, 5, 8, 13, 21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}

/*
----------------------------------
& - Оператор звятия адреса (Address-of operator)
* - Оператор разыменования (Dereference operator)
----------------------------------
*/

/*
----------------------------------
+
-
++
--
----------------------------------
*/