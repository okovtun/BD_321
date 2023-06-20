#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void elevator(int floor);
int factorial(int n);
double power(int a, int n);
void fibonacci(long long int n, long long int a = 0, long long int b = 1);

//#define ELEVATOR
//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Recursion";
	//Stack - ��� ������ ������, �� ������� ��������� ���������� ������� ����������� ������.
	//Caller - ���������� �������
	//Callee - ���������� �������
	//Stack overflow exception
	//cout << "��� ������ ������� Escape, ��� ����������� ������� ����� �������" << endl;
	//if(_getch() != 27)main();
	//Call stack

#ifdef ELEVATOR
	int floor;
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);
#endif // ELEVATOR

#ifdef FACTORIAL
	int n;
	cout << "������� �����: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a;	//��������� �������
	int n;	//���������� �������
	cout << "������� ��������� � ���������� �������: "; cin >> a >> n;
	cout << power(a, n) << endl;
#endif // POWER

	long long int n;
	cout << "������� ���������� �����: "; cin >> n;
	fibonacci(n);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����\n";
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����\n";
}

int factorial(int n)
{
	/*if (n == 0)return 1;
	else return n * factorial(n - 1);*/
	return n == 0 ? 1 : n * factorial(n - 1);
}
double power(int a, int n)
{
	//a - ��������� ������
	//n - ���������� �������
	/*if (n == 0)return 1;
	else if (n > 0) return power(a, n - 1)*a;
	else return 1 / power(a, -n);*/
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);
}
void fibonacci(long long int n, long long int a, long long int b)
{
	if (a > n)return;
	cout << a << "\n";
	fibonacci(n, b, a + b);
}