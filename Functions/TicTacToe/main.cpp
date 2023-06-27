//TicTacToe
#include<iostream>
#include<conio.h>
using namespace std;

#define VERTICAL_OFFSET		"\n\n\n\n\n"
#define HORIZONTAL_OFFSET	"\t\t\t\t\t"

void PrintField(char field[], const int n, char player);
void Move(char field[], const int n, char player);
void Check(char field[], const int n, char player);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 9;
	char field[n] = { /*1, 2, 3, 4, 5, 6, 7, 8, 9*/ };
	PrintField(field, n, '0');
	//Move(field, n);
	cout << "Еще разочек?\nДа - Anykey\nНет - Escape" << endl;
	if (_getch() != 27) main();
}
void PrintField(char field[], const int n, char player)
{
	system("CLS");
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
		if (i > 0)cout << "--- --- ---";
		cout << endl;
	}
	//Move(field, n, player);
	Check(field, n, player);
}
void Move(char field[], const int n, char player)
{
	//for (int i = 0; i < 256; i++)cout << i << "\t" << (char)i << endl;
	cout << "Player " << player << endl;
	char key;
	do
	{
		key = _getch();
		if (key == 27)return;
		if (key < '1' || key > '9')	cout << "Error: выход за пределы игрового поля" << endl;
		else if (field[key - 49] != 0)	cout << "Error: клетка уже занята" << endl;
	} while (key < '1' || key > '9' || key[field - 49] != 0);
	field[key - 49] = player;
	/*if(player=='X')PrintField(field, n, '0');
	else PrintField(field, n, 'X');*/
	//PrintField(field, n, player == 'X' ? '0' : 'X');
	PrintField(field, n, player);
}
void Check(char field[], const int n, char player)
{
	bool game_over = false;
	
	if (field[0] == field[4] && field[4] == field[8] && field[4] != 0)game_over = true;
	if (field[2] == field[4] && field[4] == field[6] && field[4] != 0)game_over = true;

	if (field[0] == field[1] && field[1] == field[2] && field[0] != 0)game_over = true;
	if (field[3] == field[4] && field[4] == field[5] && field[3] != 0)game_over = true;
	if (field[6] == field[7] && field[7] == field[8] && field[6] != 0)game_over = true;

	if (field[0] == field[3] && field[3] == field[6] && field[0] != 0)game_over = true;
	if (field[1] == field[4] && field[4] == field[7] && field[1] != 0)game_over = true;
	if (field[2] == field[5] && field[5] == field[8] && field[2] != 0)game_over = true;

	bool draw = true;
	for (int i = 0; i < n - 1; i++)
	{
		if (/*field[i] == field[i + 1] && */field[i] == 0)
		{
			draw = false;
			break;
		}
	}
	if (draw)
	{
		cout << "Draw" << endl;
		return;
	}
	if (game_over)
	{
		cout << "Player " << player << " wins" << endl;
		return;
	}
	Move(field, n, player == 'X' ? '0' : 'X');
}