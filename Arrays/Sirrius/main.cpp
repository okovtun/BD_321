#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n--------------------------------\n"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 3;
	int matrix[n][n] =
	{
		{ 1, 2, 3},
		{ 4, 5, 6},
		{ 7, 8, 9},
	};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = rand() % 100;
			cout << matrix[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;

	//1) ������� ����������� �������:
	int extended_matrix[n][n * 2] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			extended_matrix[i][j] = extended_matrix[i][j + n] = matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n*2; j++)
		{
			cout << extended_matrix[i][j] << tab;
		}
		cout << endl;
	}

	//2) ������� ����� ������������ ��������� ������� ���������:
	int main_sum = 0;
	for (int i = 0; i < n; i++)
	{
		int product = 1;
		for (int j = 0; j < n; j++)
		{
			product *= extended_matrix[j][j + i];
		}
		main_sum += product;
	}
	cout << "����� ������������ ��������� ������� ���������: " << main_sum << endl;

	//3) ������� ����� ������������ ��������� ��������������� ���������:
	int aux_sum = 0;
	for (int i = 0; i < n; i++)
	{
		int product = 1;
		for (int j = 0; j < n; j++)
		{
			product *= extended_matrix[j][n - 1 - j + i];
		}
		aux_sum += product;
	}
	cout << "����� ������������ ��������� ��������������� ���������: " << aux_sum << endl;
	int determinant = main_sum - aux_sum;
	cout << "������������ �������: " << determinant << endl;
}