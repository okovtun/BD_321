//ControlStructures
#include<iostream>
using namespace std;

//#define TEMPERATURE

void main()
{
	setlocale(LC_ALL, "");

#ifdef TEMPERATURE
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif

	int n;
	cout << "Введите число: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Вы попали" << endl;
	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}
	
}