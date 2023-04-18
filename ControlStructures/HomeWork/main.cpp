#include <iostream>
#include <iomanip>
#include<string>
#include <vector>
using namespace std;

string multistring(string str, int times)
{
	string result;
	while (times > 0)
	{
		result += str;
		times--;
	}
	return result;
}

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите высоту треугольника: "; cin >> n; n--;
	while (n < 0 || n > 20)
	{
		cout << "Невозможная высота треугольника. Повторите ввод: "; cin >> n; n--;
	}
	vector<int> v(n + 1);
	v[0] = 1;
	cout << multistring("   ", n) << v[0] << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j >= 1; j--)
		{
			v[j] = v[j - 1] + v[j];
		}
		cout << multistring("   ", n - i);
		for (int j = 0; j <= i; j++)
		{
			cout << std::left << std::setw(6) << v[j];
		}
		cout << endl;
	}
}