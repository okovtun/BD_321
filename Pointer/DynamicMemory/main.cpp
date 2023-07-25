#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-----------------------------------------------\n"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* push_back(int* arr, int& n, int value);
int* push_front(int* arr, int& n, int value);
int* insert(int* arr, int& n, int value, int index);
int* pop_back(int arr[], int& n);

void main()
{
	setlocale(LC_ALL, "");
	int n;	//Количество элементов массива
	cout << "Введие размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_back(arr, n, value);
	Print(arr, n);

	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	int index;
	cout << "Введите добавляемое значение: "; cin >> value;
	cout << "Введите индекс добавляемого элемента:"; cin >> index;
	arr = insert(arr, n, value, index);
	Print(arr, n);

	Print(arr = pop_back(arr, n), n);
	Print(arr, n);


	//Memory leak
	//delete[] buffer;
	delete[] arr;
	//int fib[] = { 3,5,8,13,21 };
	//delete[] fib;
}

/*
------------------------------------------------
1. Удаляется stack, например, статический массив;
2. Оператор 'delete[]' два раза получает один и тот же адрес,
   т.е., получает адрес уже удаленной памяти;
------------------------------------------------
*/

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

int* push_back(int* arr, int& n, int value)
{
	//1) Создаем буферный массив:
	int* buffer = new int[n + 1];
	//2) Копируем данные из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходны массив:
	delete[] arr;
	//4) Поменяем адрес исходного массива адресом нового массива:
	arr = buffer;
	//5) Только после этого можно добавить элемент в конец массива 'arr':
	arr[n] = value;
	//6) Посде добавления элемента в конец массива, количество его элементов увеличивается на 1:
	n++;
	//7) Mission complete, проверяем результат:
	return arr;
}

int* push_front(int* arr, int& n, int value)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	//arr = buffer;
	buffer[0] = value;
	n++;
	return buffer;
}
int* insert(int* arr, int& n, int value, int index)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i < n; i++)buffer[i + 1] = arr[i];
	delete[] arr;
	//arr = buffer;
	buffer[index] = value;
	n++;
	return buffer;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}