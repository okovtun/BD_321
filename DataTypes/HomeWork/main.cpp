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
	cout << "������� �������� �����: "; cin >> money;
	money = money + 1e-10;
	cout << money << endl;
	int grn = money;	//������� �������������� ����� �� �������� (double), � �������� (int), � ������� ������.
	cout << grn << " ���.\t";
	int cop = (money - grn) * 100;
	cout << cop << " ���.\n";
#endif // TASK_1

#ifdef TASK_1_1
	double money;
	cout << "������� �������� �����: "; cin >> money;
	//money = money + 1e-10;
	cout << money << endl;
	int grn = money;	//������� �������������� ����� �� �������� (double), � �������� (int), � ������� ������.
	cout << grn << " ���.\t";
	int cop = money * 100 - grn * 100;
	cout << cop << " ���.\n";
#endif // TASK_1

#if defined number1 
	number1;
	double money, a;
	int b;
	cout << ("���") << endl;
	cin >> a;
	cout << ("���") << endl;
	cin >> b;
	cout << ("����") << endl;
	money = a, b;
	cout << a << ("���") << b << ("���") << endl;
#endif

#if defined number4
	number4;
	double consumption, price_per_liter, total_price;
	int distance;
	cout << "���������:   "; cin >> distance;
	cout << "������:      "; cin >> consumption;
	cout << "���� �� ����:"; cin >> price_per_liter;
	cout << "����������� ����� �������: " << distance * consumption / 100 << " �.\n";
	cout << "����������� ����� �������: " << ceil(distance * consumption / 100) << " �.\n";
	//https://legacy.cplusplus.com/reference/cmath/round/?kw=round
	total_price = ceil(distance * consumption / 100) * price_per_liter * 2;
	cout << "���.��������� �������: " << total_price << " ���.";
#endif
}