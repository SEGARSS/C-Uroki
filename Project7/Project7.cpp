//��������� � ���������. ����������� � ����������. ������. ���������. C++ ��� ����������. ���� #9

// ��������� � ���������

#include <iostream>
using namespace std;

void main()
{
	/*
	��������� ��� ����� ���������� � ������ � cout.
	int a = 1;
	cout << a << endl;
	cout << a++ << endl;
	*/

	/*
	��������� �������������� ����� ���������� � ������ � cout
	int a = 1;
	cout << a << endl;
	cout << ++a << endl;
	*/

	// ++ ������ ��������� �������, � ���� -- �� ���������� �� �������.


	int a = 1, b;
	b = ++a * a;
	cout << b << endl;
	cout << a << endl;
}