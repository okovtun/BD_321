//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];
	arr[2] = 123;	//обращение к элементу массива на запись
	cout << arr[2] << endl;//обращение к элементу массива на чтение
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}