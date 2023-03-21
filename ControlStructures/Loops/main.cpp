#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1

void main()
{
	setlocale(LC_ALL, "");

#ifdef WHILE_1
	int i = 0;	//Счетчик цикла
	int n;		//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << " Loops" << endl;
		i++;
	}
#endif // WHILE_1

	char key;	//эта переменная будет хранить код нажатой клавиши
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатия клавиши, и возвращает ASCII-код нажатой клавиши,
		//этот ASCII-код мы присваиваем переменной 'key'
		//Функция _getch() находится в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование переменной 'key' в тип данных 'int',
		//для того что бы увидеть ASCII-код нажатой клавиши
	} while (true);
}