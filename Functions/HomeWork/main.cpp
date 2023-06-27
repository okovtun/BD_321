#include<iostream>
using namespace std;

#define VERTICAL_OFFSET		"\n\n\n\n\n"
#define HORIZONTAL_OFFSET	"\t\t\t\t\t"

void print_field(char field[], const int n)
{
	cout << VERTICAL_OFFSET;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HORIZONTAL_OFFSET;
		cout << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << field[i + j];
			if (j < 2)cout << " | ";
		}
		cout << endl;
		cout << HORIZONTAL_OFFSET;
		if (i > 0)cout << "--- --- ---";
		cout << endl;
	}
}

void move(char field[], const int n, int player, int moves[])
{
	int cell;
	bool exists = false;
	do {
		if (player == 1)cout << "Player X moves" << endl;
		else cout << "Player O moves" << endl;
		cout << "Input cell number between 1 and 9: "; cin >> cell;
		exists = find(moves, moves + n, cell) != moves + n;
	} while (cell < 1 || cell > 9 || exists);
	for (int i = 0; i < n; i++)
	{
		if (cell - 1 == i)
		{
			player == 1 ? field[i] = 'X' : field[i] = 'O';
			moves[i] = cell;
		}
	}
}

bool check_win_condition(char field[], const int n)
{
	int XXX = 264; //ascii X = 88; X + X + X = 264
	int OOO = 237; //ascii O = 79; O + O + O = 237
	if (field[0] + field[1] + field[2] == XXX || field[0] + field[1] + field[2] == OOO)
	{
		return true;
	}
	else if (field[3] + field[4] + field[5] == XXX || field[3] + field[4] + field[5] == OOO)
	{
		return true;
	}
	else if (field[6] + field[7] + field[8] == XXX || field[6] + field[7] + field[8] == OOO)
	{
		return true;
	}
	else if (field[0] + field[3] + field[6] == XXX || field[0] + field[3] + field[6] == OOO)
	{
		return true;
	}
	else if (field[1] + field[4] + field[7] == XXX || field[1] + field[4] + field[7] == OOO)
	{
		return true;
	}
	else if (field[2] + field[5] + field[8] == XXX || field[2] + field[5] + field[8] == OOO)
	{
		return true;
	}
	else if (field[0] + field[4] + field[8] == XXX || field[0] + field[4] + field[8] == OOO)
	{
		return true;
	}
	else if (field[2] + field[4] + field[6] == XXX || field[2] + field[4] + field[6] == OOO)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void main()
{
	setlocale(LC_ALL, "");
	const int n = 9;
	char field[n]{ ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	int moves[n]{};
	int player_1 = 1, player_2 = 2;
	int draw = 9;
	do {
		print_field(field, n);
		move(field, n, player_1, moves);
		system("cls");
		if (check_win_condition(field, n))
		{
			print_field(field, n);
			cout << "Player X wins!";
			break;
		}
		draw--;
		if (draw == 0)
		{
			break;
		}
		print_field(field, n);
		move(field, n, player_2, moves);
		system("cls");
		if (check_win_condition(field, n))
		{
			print_field(field, n);
			cout << "Player O wins!";
			break;
		}
		draw--;
	} while (draw);
	if (!draw)
	{
		print_field(field, n);
		cout << "Draw!";
	}
}