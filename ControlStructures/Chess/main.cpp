#include<iostream>
using namespace std;

#define offset "\t\t\t"
#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		"\xC4\xC4"//(char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xB2\xB2"//"\xDB\xDB"//(char)219
#define BLACK_BOX			"  "

/*
--------------
Escape-последовательность "\xNN" позволяет добавить в строковую константу символ по ASCII-коду.
NN - ASCII-код символа.
--------------
*/

//#define ASCII

void main()
{
	setlocale(LC_ALL, "");	//Включает кирилицу

#ifdef ASCII
	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "C");	//Включает кодировку по умолчанию
	for (int i = 176; i < 224; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << i << "\t" << (char)i << "\n";
	}
#endif // ASCII
	//cout << 2 << 2 << endl;
	int n;
	cout << "Введите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		cout << offset;
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
			/*{
				if (i % 2 == j % 2)cout << WHITE_BOX << WHITE_BOX;
				else cout << "  ";
			}*/
		}
		cout << endl;
	}
}