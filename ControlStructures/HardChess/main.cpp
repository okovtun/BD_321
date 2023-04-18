#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	COORD coord;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);

	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (i % 2 == k % 2)cout << "* ";
					else cout << "  ";
				}
			}
			cout << endl;
		}
	}*/
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if ((i + k) % 2 == 0)cout << "* ";
					else cout << "  ";
				}
			}
			cout << endl;
		}
	}*/
	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			if (
				j % (n * 2) < n && i % (n * 2) < n ||
				j % (n * 2) >= n && i % (n * 2) >= n
				)cout << "* ";
			else cout << "  ";
		}
		cout << endl;
	}
}