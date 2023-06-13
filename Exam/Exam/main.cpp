#include<iostream>
using namespace std;

void main()
{
	cout << sizeof("Hello") << endl;
	int a = 2;
	a = 3;
	a = 4;
	a = 5;
	cout << &a << endl;
}