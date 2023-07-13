#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-----------------------------------------------\n"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;	//Количество элементов массива
	cout << "Введие размер массива: "; cin >> n;
	int* arr = new int[n];
	
	FillRand(arr, n);
	Print(arr, n);

	//Memory leak
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива через арифметику указателей и оператор разыменования:
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива через опеатор индексирования
		cout << arr[i] << tab;
		//[] - оператор индексирования (subscript operator)
	}
	cout << endl;
}