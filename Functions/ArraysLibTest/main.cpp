#include<iostream>
using namespace std;

#include<FillRand.h>
#include<Print.h>
#include<Statistics.h>

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	double arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
}