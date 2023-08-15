#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n-----------------------------------------------\n"

int** Allocate(const int rows, const int cols);
void Clear(int** arr, const int rows);

void FillRand(int arr[], const int n);
void FillRand(int** arr, const int rows, const int cols);

void Print(int arr[], const int n);
void Print(int** arr, const int rows, const int cols);

int* push_back(int* arr, int& n, int value);
int* push_front(int* arr, int& n, int value);
int* insert(int* arr, int& n, int value, int index);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n, int index);

int** push_row_back(int** arr, int& rows, const int cols);	//добавляет пустую строку в конец двумерного динамическтого массива
int** pop_row_back(int** arr, int& rows, const int cols);	//удаляет строку с конца двумерного динамическтого массива

void push_coll_back(int** arr, const int rows, int& cols);
void pop_coll_back(int** arr, const int rows, int& cols);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
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
	/ cout << "Введите добавляемое значение: "; cin >> value;
	/ cout << "Введите индекс добавляемого элемента:"; cin >> index;
	/ arr = insert(arr, n, value, index);
	/ Print(arr, n);

	Print(arr = pop_back(arr, n), n);
	Print(arr = pop_front(arr, n), n);
	cout << "Введите индекс удаляемого элемента:"; cin >> index;
	Print(arr = erase(arr, n, index), n);
	//arr[-1] = 0;
	//Memory leak
	//delete[] buffer;
	delete[] arr;
	//int fib[] = { 3,5,8,13,21 };
	//delete[] fib;  
#endif // DYNAMIC_MEMORY_1

	int rows;
	int cols;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;

	int** arr = Allocate(rows, cols);
	
	//////////////////////////////////////////////////////////////////////////////////
	///				Использование двумерного динамического массива					//
	//////////////////////////////////////////////////////////////////////////////////

	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	cout << delimiter << endl;

	arr = push_row_back(arr, rows, cols);
	Print(arr, rows, cols);
	cout << delimiter << endl;
	Print(arr = pop_row_back(arr, rows, cols), rows, cols);
	cout << delimiter << endl;
	push_coll_back(arr, rows, cols);
	Print(arr, rows, cols);
	cout << delimiter << endl;
	pop_coll_back(arr, rows, cols);
	Print(arr, rows, cols);

	Clear(arr, rows);
}

/*
------------------------------------------------
1. Удаляется stack, например, статический массив;
2. Оператор 'delete[]' два раза получает один и тот же адрес,
   т.е., получает адрес уже удаленной памяти;
------------------------------------------------
*/

int** Allocate(const int rows, const int cols)
{
	//////////////////////////////////////////////////////////////////////////////////
	///				Объявление двумерного динамического массива						//
	//////////////////////////////////////////////////////////////////////////////////

	//1) Создаем массив указателей:
	int** arr = new int*[rows];
	//2) Выделяем память под строки:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
void Clear(int** arr, const int rows)
{
	//////////////////////////////////////////////////////////////////////////////////
	///				Удаление двумерного динамического массива						//
	//////////////////////////////////////////////////////////////////////////////////
	//1) Удаляем строки:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//2) Удаление массива указателей:
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
void FillRand(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
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
void Print(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
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

int* pop_front(int arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}

int* erase(int arr[], int& n, int index)
{
	int* buffer = new int[--n]{};
	/*for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index+1; i <= n; i++)buffer[i-1] = arr[i];*/
	for (int i = 0; i < n; i++)
	{
		/*if (i < index)	buffer[i] = arr[i];
		else			buffer[i] = arr[i + 1];*/
		//i < index ? buffer[i] = arr[i] : buffer[i] = arr[i + 1];
		//buffer[i] = i < index ? arr[i] : arr[i + 1];
		buffer[i] = arr[i < index ? i : i + 1];
	}
	delete[] arr;
	return buffer;
}

int** push_row_back(int** arr, int& rows, const int cols)
{
	//1) Создаем буферный массив указателей:
	int** buffer = new int*[rows + 1]{};
	//2) Копируем адреса строк в новый массив:
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	//3) Удаляем исходный массив указателей:
	delete[] arr;
	//4) Создаем добавляемую строку:
	buffer[rows] = new int[cols] {};
	//5) После добавления строки, количество строк увеличивается на 1:
	rows++;
	return buffer;
}
int** pop_row_back(int** arr, int& rows, const int cols)
{
	delete[] arr[rows - 1];
	int** buffer = new int*[--rows]{};
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}
void push_coll_back(int** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
void pop_coll_back(int** arr, const int rows, int& cols)
{
	cols--;
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols] {};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
}