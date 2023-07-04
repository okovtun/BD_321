#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n----------------------------------\n"

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

//template - показывает объявление шаблона
//typename - показывает создание шаблонного типа
//T - имя шаблонного типа
template<typename T>
void Print(const T arr[], const int n);
template<typename T>
void Print(const T arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
template<typename T>
T  Sum(const T arr[], const int n);
template<typename T>
double Avg(const T arr[], const int n);
template<typename T>
T minValueIn(const T arr[], const int n);
template<typename T>
T maxValueIn(const T arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	const int SIZE = 8;
	int brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr,  SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);

	cout << delimiter << endl;

	double d_arr[8] = {2.5, 2.7, 3.14, 5.8, 4.3};
	Print(d_arr, 8);
	cout << "Сумма элементов массива: " << Sum(d_arr, 8) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, 8) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, 8) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, 8) << endl;

	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
template<typename T>
void Print(const T arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
void Print(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Sort(int arr[], const int n)
{
	//Сортировка массива:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
T  Sum(const T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
double Avg(const T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
T minValueIn(const T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>
T maxValueIn(const T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}