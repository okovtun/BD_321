#include<iostream>
#include<conio.h>
using namespace std;

#define Enter 13
#define Escape 27

#define UP_ARROW	72
#define DOWN_ARROW	80
#define LEFT_ARROW	75
#define RIGHT_ARROW	77

//#define IF_SHOOTER

void main()
{
	setlocale(LC_ALL, "");
#ifdef IF_SHOOTER
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UP_ARROW)cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == Enter)cout << "Огонь" << endl;
		else if (key == Escape)cout << "Выход" << endl;
		else if (key != -32)cout << "Error" << endl;
	} while (key != Escape);
#endif // IF_SHOOTER

	char key;
	do
	{
		key = _getch();
		switch (key)
		{
		case 'w':case 'W':case UP_ARROW:	cout << "Вперед" << endl;	break;
		case 's':case 'S':case DOWN_ARROW:	cout << "Назад" << endl;	break;
		case 'a':case 'A':case LEFT_ARROW:	cout << "Влево" << endl;	break;
		case 'd':case 'D':case RIGHT_ARROW:	cout << "Вправло" << endl;	break;
		case ' ':	cout << "Прыжок" << endl;	break;
		case Enter:	cout << "Огонь" << endl;	break;
		case Escape:cout << "Выход" << endl;
		case -32:break;
		default:	cout << "Error" << endl;	break;
		}
	} while (key != Escape);
}