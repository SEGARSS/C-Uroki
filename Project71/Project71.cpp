//�������� ��������� �������� ��� ���. ��� ��������. ��� ������������. C ++ ��� ����������. 
//���� #69 - ����� 82
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a = 5;
	cin >> a;

	//���� ������� ������ ����.
	if (a < 10)
	{
		cout << "a ����� 10" << endl;
	}
	else if(a > 10)
	{
		cout << "a ������ 10" << endl;
	}
	else
	{
		cout << "a ����� 10" << endl;
	}

	//������ �������, �� ����� ������� �� ������.
	a < 10 ? cout << "� ������ 10 " << a + 5 << endl : 
		a > 10 ? cout << "� ������ 10 " << a - 4 << endl : cout << "a ����� 10" << endl;
}
/*��������� ��������, � ������ ����� ��������� ���������� ������� ������ � if else.
������, �� ����� ������� ����� ?: � ������, ��������� ����� ��������� ���������� ��� ? - (a < 10)?
� ����� ����� � ����� ���� ��� ���, ������� �� ��� ����������, � ���� �� ��� ������������ �����, �� 
����������� ���� (:) � ��������� ��� � ����� ������ ��������.
���� ����� if �������� �� ?, � else �������� �� (:).*/