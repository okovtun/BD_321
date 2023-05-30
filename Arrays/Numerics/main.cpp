#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "");
#ifdef DEC_2_BIN
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32;	//максимально-возможная разрядность двоичного числа
	bool bin[MAX_BIN_CAPACITY] = {};	//этот массив будет хранить разряды двоичного числа
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2;	//получаем двоичный разряд числа, и сохраняем его в массив
		decimal /= 2;			//убираем полученный двоичный разряд из исходного числа
	}
	//i--;//убираем лишний разряд
	for (/*int i=MAX_BIN_CAPACITY-1*/i--; i >= 0; i--)
	{
		cout << bin[i];
		//разделяем двоичное число на Байты и тетрады:
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";	//тетрада - это группа из 4-х двоичных разрядов
	}
#endif // DEC_2_BIN

	for (int i = 0; i < 256; i++)cout << i << "\t" << (char)i << endl;

	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_HEX_CAPACITY = 8;	//максимально возможная разрядность шестнадцатеричного числа
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
//	for(start;	   stop;	step	  )
	for (	 ;	decimal; decimal /= 16, i++)
	{
		hex[i] = decimal % 16;
		hex[i] += hex[i] < 10 ? 48 : 55;
	}

	for (i--; i >= 0; i--)
	{
		cout << hex[i];
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		/*if (hex[i] < 10)cout << hex[i];
		else cout << char(hex[i] + 55);*/
		/*switch (hex[i])
		{
		default:cout << hex[i]; break;
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		}*/
	}
	cout << endl;
}