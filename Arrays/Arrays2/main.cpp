#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 4;
	const int COLS = 5;
	int arr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8, 9}
	};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < ROWS; i++)	//i - нумерует строки двумерного массива
	{
		for (int j = 0; j < COLS; j++)//j - нумерует элементы строки (столбики)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее-арифметическое элементов массива: " << (double)sum / (ROWS*COLS) << endl;

	//Поиск минимального и максимаьлного значения:
	int min, max;
	min = max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;

	//Сортировка двумерного массива:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//arr[i][j] - выбранный элемент
					//arr[k][l] - перебираемый элемент
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}

	for (int i = 0; i < ROWS; i++)	//i - нумерует строки двумерного массива
	{
		for (int j = 0; j < COLS; j++)//j - нумерует элементы строки (столбики)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}