#include<iostream>
#include<time.h>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 250000;
	int arr[n];

	//rand();	//���������� ��������������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND)

	int minRand;
	int maxRand;
	/*do
	{
		cout << "������� �������� ��������� ��������� �����: "; cin >> minRand;
		cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;
		if (maxRand <= minRand)
		{
			cout << "Error: ������� ��������" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (maxRand <= minRand);*/
	cout << "������� �������� � ����������� ��������� ��������� �����: "; cin >> minRand >> maxRand;
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
	cout << "������ ��������" << endl;

	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/
	clock_t t_start = clock();
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - ��������� �������
			//arr[j] - ������������ �������
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	clock_t t_end = clock();

	cout << "������ ������������ �� " << double(t_end - t_start) / CLOCKS_PER_SEC << endl;

	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/
}