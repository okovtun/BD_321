#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		//���������, ����������� �� ��������� �������� ������:
		bool met_before = false;	//������������, ��� ��������� ����� ������ �� �����������,
		//�� ��� ����� ����������:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;	//����������, ��� ����� ����������� �����
				break;	//�������� ����� 'break' ��������� ������� �������� � ��� �����������
			}
		}
		if (met_before)continue;	//'continue' ��������� ������� �������� � ��������� � ���������
		//����� ����������:
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		//if (count)cout << "�������� " << arr[i] << " ����������� " << count << " ���" << endl;
		if (count)printf("�������� %d ����������� %d ���\n", arr[i], count);
	}
}