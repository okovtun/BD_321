#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 5;
	int size; cout << "¬ведите размер доски: "; cin >> size;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size*n; j++)
		{
			if ((i + j) % 2 == 0)
			{
				for (int k = 0; k < n; k++)cout << "* ";
			}
			else
			{
				for (int k = 0; k < n; k++)cout << "  ";
			}
		}
		cout << endl;
	}
}