#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	for (
		int i = 0; 
		i < n; 
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
}