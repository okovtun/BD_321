#include <iostream>
using namespace std;
#define delimetr "------------------------"
void main()
{
	setlocale(LC_ALL, "");

	char a = '*';
	int size;
	cout << "Введите размер: "; cin >> size;
	// 1 фигура
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << a;
		}
		cout << endl;
	}
	cout << delimetr << endl;
	// 2 фигура
	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << a;
		}
		cout << endl;
	}

	cout << delimetr << endl;
	// 3 фигура
	for (int i = size; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << a;
		}
		cout << endl;
		if (i == 0)
		{
			break;
		}
	}

	cout << delimetr << endl;

	// 4,5,6 - не получилось


	// 7 фигура
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j % 2 == 0)
			{
				cout << "+";
			}
			else
			{
				cout << "-";
			}
		}
		cout << endl;

	}

}