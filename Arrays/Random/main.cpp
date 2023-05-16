#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	//rand();	//¬озвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)

	int minRand;
	int maxRand;
	/*do
	{
		cout << "¬ведите минимано возможное случайное число: "; cin >> minRand;
		cout << "¬ведите максимально возможное случайное число: "; cin >> maxRand;
		if (maxRand <= minRand)
		{
			cout << "Error: Ќулевой диапазон" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (maxRand <= minRand);*/
	cout << "¬ведите минимано и максимально возможное случайное число: "; cin >> minRand >> maxRand;
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (maxRand - minRand < 10)
	{
		maxRand = minRand + 10;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}