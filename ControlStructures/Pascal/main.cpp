#include<iostream>
#include<Windows.h>
using namespace std;

typedef double f_type;

void main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = {800, 250};
	SetConsoleScreenBufferSize(hConsole, coord);
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);

	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	GetCurrentConsoleFontEx(hConsole, 0, &fontex);
	fontex.FontWeight = 400;
	fontex.dwFontSize.X = 5;
	fontex.dwFontSize.Y = 10;
	//SetCurrentConsoleFontEx(hConsole, 0, &fontex);

	//CONSOLE_SCREEN_BUFFER_INFOEX scbi{ sizeof(CONSOLE_SCREEN_BUFFER_INFOEX) };
	//GetConsoleScreenBufferInfoEx(hConsole, &scbi);
	//scbi.

	setlocale(LC_ALL, "");
	int h;
	do
	{
		cout << "Введите высоту треугольника: "; cin >> h;
		//if (h > 19)cout << "Error:Очень болшая высота, введите меньшее значение" << endl;
	} while (false);
	int width = 4;
	for (int i = 0; i < h; i++)
	{
		cout.width(width);
		cout << " ";
	}
	cout << 1 << endl;
	f_type nf = 1;
	for (int n = 1; n <= h; n++)
	{
		for (int i = 0; i < h - n; i++)
		{
			cout.width(width);
			cout << " ";
		}
		cout << 1;
		nf *= n;
		f_type mf = 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			f_type nmf = 1;
			for (int nm = 1; nm <= n - m; nm++)
			{
				nmf *= nm;
			}
			cout.width(width * 2);
			cout << nf / (mf*nmf);
		}
		cout << endl;
	}
}