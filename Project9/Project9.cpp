// ���������� ��������.��������� ���������, ���������, �����������, ��������.C++ ���� #11.

#include<iostream>
using namespace std;

/*                                  ���������� ��������.

/////////////  1. �������� ���������

< - ������
> - ������
<= - ������\�����
>= - ������\�����

/////////////  2. �������� ���������

== - �����
!= - �� �����

/////////////  3. ���������� ��������� ����������� � ������������� ������.

&& - �
|| - ���
!= - ��

*/

// false - ����������� ��� - 0 (����, ���). 
// true - ����������� ��� - 1 (������, ��).

void main()
{
	setlocale(LC_ALL, "Rus");
	/*
	// �������

	// true - ��� �� ������� - (1) ��� �� ������� - (��), ������ ������ ������.
	// 4 ������� 5, true - 1 - ������ - ��.
	cout << "��� ����������� ������� true - " << (4 < 5 )<< " - " << " ������ - " << " �� " << endl;
	// false - ��� �� ������� - (0) ��� �� ������� - (���), ������ ������ ����.
	// 4 ������ 5, false - 0 - ���� - ���.
	cout << "��� ����������� ������� false - " << (4 > 5 ) << " - " << " ���� - " << " ��� " << endl;
	*/

	/* ���� �� ��������� ��� (!) - ��� ��� - !(a != b) �� �� ������ ������� ������,
	� false �� true */
	//int a = 2;
	//int b = 3;

	//cout << !(a > b) << endl;


	// � ������ �������, ���� ���� ���� ��������� ����, �� ���� ����� ���� 0 (false).
	// && - �� ��� ����� ���� ������������������. ((3 == 3) � (5 > 4) � (1 == 1))
	//int a = 3;
	//int b = 3;

	//cout << ((3 == 3) && (5 > 4) && (1 == 1)) << endl;

	/* � ������ �������, ��� ��� ���� ���� ���� ���� ����� ������,
	�� �� ��������� ��� - cout << ((3 != 3) || (1 > 0)) << endl; ����� ������ -  true. ��������� - || - ����� �����.*/

	int a = 3;
	int b = 3;

	cout << ((3 != 3) || (1 > 0)) << endl;


}