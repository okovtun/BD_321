#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_1_1
//#define number1
#define number4

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	double money;
	cout << "Введите денежную сумму: "; cin >> money;
	money = money + 1e-10;
	cout << money << endl;
	int grn = money;	//неявное преобразование типов от бОльшего (double), к меньшему (int), с потерей данных.
	cout << grn << " грн.\t";
	int cop = (money - grn) * 100;
	cout << cop << " коп.\n";
#endif // TASK_1

#ifdef TASK_1_1
	double money;
	cout << "Введите денежную сумму: "; cin >> money;
	//money = money + 1e-10;
	cout << money << endl;
	int grn = money;	//неявное преобразование типов от бОльшего (double), к меньшему (int), с потерей данных.
	cout << grn << " грн.\t";
	int cop = money * 100 - grn * 100;
	cout << cop << " коп.\n";
#endif // TASK_1

#if defined number1 
	number1;
	double money, a;
	int b;
	cout << ("грн") << endl;
	cin >> a;
	cout << ("коп") << endl;
	cin >> b;
	cout << ("итог") << endl;
	money = a, b;
	cout << a << ("грн") << b << ("коп") << endl;
#endif

#if defined number4
	number4;
	double consumption, price_per_liter, total_price;
	int distance;
	cout << "Растояние:   "; cin >> distance;
	cout << "Расход:      "; cin >> consumption;
	cout << "Цена за литр:"; cin >> price_per_liter;
	cout << "Необходимый объем топлива: " << distance * consumption / 100 << " л.\n";
	cout << "Необходимый объем топлива: " << ceil(distance * consumption / 100) << " л.\n";
	//https://legacy.cplusplus.com/reference/cmath/round/?kw=round
	total_price = ceil(distance * consumption / 100) * price_per_liter * 2;
	cout << "грн.обойдется поездка: " << total_price << " грн.";
#endif
}