//Arrays
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8, 13, 21 };
	//arr[2] = 123;	//обращение к элементу массива на запись
	//cout << arr[2] << endl;//обращение к элементу массива на чтение
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее-арифметическое элементов массива: " << (double)sum / SIZE << endl;

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}