#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n------------------------------------------------\n"

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);

	//1) Определяем количество четных и нечетных значений исходного массива:
	//even - четный
	//odd  - нечетный
	int even_count = 0;
	int odd_count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_count++;
		else odd_count++;
		//arr[i] % 2 == 0 ? even_count++ : odd_count++;
	}

	//2) Выделяем память под массивы:
	int* even_arr = new int[even_count];
	int* odd_arr = new int[odd_count];

	//3) Копируем значения в соответствующие массивы:
	for (int i = 0, j = 0, k = 0; i < n; i++)
	{
		/*if (arr[i] % 2 == 0)even_arr[j++] = arr[i];
		else odd_arr[k++] = arr[i];*/
		//arr[i] % 2 == 0 ? even_arr[j++] = arr[i] : odd_arr[k++] = arr[i];
		//condition		?	value_1		:		value_2;
		(arr[i] % 2 == 0 ? even_arr[j++] : odd_arr[k++]) = arr[i];
	}

	//4) Выводим результаты:
	Print(even_arr, even_count);
	Print(odd_arr, odd_count);

	delete[] odd_arr;
	delete[] even_arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}