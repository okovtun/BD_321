#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int n;

	cout << "������� ���������� �����: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int coef = 1;
		// ��������� ������� ����� �������
		for (int j = 1; j <= n - i; j++)
		{
			cout.width(4);
			cout << "  ";
		}
		// ������� �������� � ������
		for (int j = 0; j <= i; j++)
		{
			cout.width(8);
			cout << coef /*<< "  "*/;
			coef = coef * (i - j) / (j + 1);
		}
		cout << endl;
	}

	// ���� ��� ��������� ������� �� ����� ����������� ������� ��� ��������� n.
	// ��� ������ ������ ������������ (i - �� ������, ������� � 0)
	// ����������� i + 1 ������������� � ������� ������� ��������� : coef = coef * (i - j) / (j + 1). 
	// ������ ���� ������� ������� ��� �������, ����� ����������� ��� �������� �� ������.
	// ������ ���� ������� ������������ i - �� ������.
	// ������������� ���������� coef ��� �������� �������� ������������ ��������� ��������� ��������� ����������� ����� ����������.
	// ������� �� ��������� ������ ���������� � ������� ������� endl.
}