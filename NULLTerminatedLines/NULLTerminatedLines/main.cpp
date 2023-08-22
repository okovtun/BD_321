#include<iostream>
#include<Windows.h>
using namespace std;

//ASCII-символ с кодом '\0'
//NULL-terminated lines

int StringLength(const char str[]);
char* to_upper(char str[]);	//переводит строку в верхний регистр

void main()
{
	setlocale(LC_ALL, "");
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//char str[] = "Hello";
	const int SIZE = 20;
	char str[SIZE] = {};
	cout << "Введите строку: ";
	//cin >> str;
	SetConsoleCP(1251);
	cin.getline(str, SIZE);
	SetConsoleCP(866);
	cout << str << endl;
	cout << "Длина введенной строки: " << StringLength(str) << endl;
	//to_upper(str);
	cout << to_upper(str) << endl;
}

int StringLength(const char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
char* to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')str[i] -= 32;
		if (str[i] >= 'а' && str[i] <= 'я')str[i] -= 32;
	}
	return str;
}