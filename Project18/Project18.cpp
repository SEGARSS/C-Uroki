/*�������� ����� break. �������� break. ��������. ������. ���������. ���� #18.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	cout << "������ ����� " << endl;

	for (int i = 0; ; i++)
	{
		cout << "���������� i = " << i << endl;

		/*������� �������� ������, �� ��� ������� ������� ��� �� ���������, � ������:
		for (int i = 0; ; i++) � ������ ������ ����� ������� � ������� i<10 ���� ����� �����������.
		� ����� ���������� ��� �� ������� �����������, � ������ ������� if, ������ ������� ����, ���
		����� ����� � ������� �� ����� 5, ���� ������ ������������ � ����������� ��������� ������� 
		break;. �����, �� ����� �������� ������� � ���� (int i = 0; i < 10 ; i++), ��� ����� ��� i <10,
		�� �������� if � ��������� ���� ��� i==5 � � �������� break, ���� ��� �� ������� �� ���������� �� 10
		� ���������� �� 5. ������ ������� if � ������������ break �������� � ��� ����� while � switch.*/

		if (i==5)
		{
			break
		}
	}

	cout << "����� �����" << endl;
}