//TicTacToe
#include<iostream>
using namespace std;

#define VERTICAL_OFFSET		"\n\n\n\n\n"
#define HORIZONTAL_OFFSET	"\t\t\t\t\t"

void PrinField(char field[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 9;
	char field[n] = { /*1, 2, 3, 4, 5, 6, 7, 8, 9*/ };
	PrinField(field, n);
}

void PrinField(char field[], const int n)
{
	cout << VERTICAL_OFFSET;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HORIZONTAL_OFFSET;
		cout << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << /*(int)*/field[i + j];
			if (j < 2)cout << " | ";
		}
		cout << endl;
		cout << HORIZONTAL_OFFSET;
		if(i>0)cout << "--- --- ---";
		cout << endl;
	}
}