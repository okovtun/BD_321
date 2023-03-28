#include<iostream>
using namespace std;

//#define PALINDROME

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef PALINDROME
	int number;		//Число, введенное с клавиатуры
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	int reverse = 0;
	while (buffer > 0)
	{
		reverse *= 10;			//1) сдвигаем число на 1 разряд влево
		reverse += buffer % 10;	//2) добавляем следующий младший разряд
		buffer /= 10;			//3) удаляем полученный разряд из исходного числа 
		//(в противном случае мы всегда быдем получать один и тот же разряд)
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
#endif // PALINDROME

	int number;
	cout << "Введите номер билета: "; cin >> number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	while (number > 1000)
	{
		sum1 += number % 10;	//прибавляем младший разраяд к сумме
		number /= 10;			//убираем младший разряд из номера билета
	}
	while (number)
	{
		sum2 += number % 10;
		number /= 10;
	}
	cout << sum1 << endl;
	cout << sum2 << endl;
	if (sum1 == sum2)
	{
		cout << "Счастливый билет" << endl;
	}
	else
	{
		cout << "Обычный билет" << endl;
	}
}