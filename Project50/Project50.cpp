//������� ���������� �������� ������� ����� ���������. ������� ���������� ��������� ��������. #49

#include<iostream>
using namespace std;

/*������ ����, ��� ����� ��������� ����� ���������� ���������� � ������� � � ���� ��������. */

void foo(int *pa, int *pb, int *pc)
{
	(*pa) = 555;
	(*pb) ++;
	(*pc) = -20;
}

void main()
{
	setlocale(LC_ALL, "Rus");

	int a = 0, b = 0, c =1;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "==================" << endl;

	cout << "foo" << endl;
	foo(&a,&b,&c); 
	cout << a << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "==================" << endl;
}