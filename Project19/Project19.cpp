/* ������� ����� continue c++ ��� ���.�������� continue.������.���������.���� #19.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	
	/*������� ������� if (i == 2) ������������� continue; ��� �� ���?
	�� ��� �������� ���������� ���� �� �������� ���, ������ ������ �� �������, � ����� �������� ������
	��������� ������� � �������� ����� continue, ��� ���� ����������� ��������� ������ ��� �� ��������� ������������
	������� � ���������� ���� ������.*/

	for (int i = 0; i < 5; i++)
	{
		if (i == 2)
		{
			continue;
		}
		cout << "���������� i = " << i << endl;

	}


}