//���������� ����� � ����� ����� (�). ����� � ������� �������������� �����. 
//�������������� �����. �++ ���� #61 - ����� �73.

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	//����� � �� ����� �������������� ������.

	/*�� �������� ������ ������ �������������� ������. � ������. ������� ���������� double a, �����������
	���� ��������� ��� ����� �������� � �� ���������� ���� int - cout << (int)a << endl; ��� ����� ����������. */
	cout << "����� �����������" << endl;
	double a = 33.3;
	cout << (int)a << endl;
	cout << "==============" << endl << endl;

	/*�� ����� ���������, ���������� �� ��� ����������� ������. ��������� ���������� v ���� double �� ��������
	� ���������� f ���� int*/
	cout << "�� ����� �����������" << endl;
	double v = 33.3;
	int f = v;
	cout << f << endl;
	cout << "==============" << endl << endl;

	//��� �������� ��� ����������� ������

	/*������ ������ ����������, �� ��������� int ����� � ���������� ���� double. �� ��������, �� ������� �����
	� �������, ��� ��� ��� double ����� ������� � ���� ������ ��������(�������) ������ ��� ��� int. � �����
	������, ����� ������ ������ ����� ���� ����������.*/
	cout << "�����������" << endl;
	int p = 33.4846;
	double r = p;
	cout << p << endl;
	cout << "==============" << endl << endl;

	/*�������, �� ���������� ���� double ����� � ��������� ���� int - ������� ���� �� ���� ����� ������ �������
	������(��� ��� � ������� ������� ������ ������� �����) ����, ��� ���������� ����, ����� ��������� ������
	������. (�������� ������� ����� ���������� � ������ �� ��������������).*/
	cout << "�������" << endl;
	double h = 33.4846;
	int j = h;
	cout << j << endl;
	cout << "==============" << endl << endl;

	//����������, ������ ���������� �������� ������ ������

	/*���� �� ���������, ���������� � ������� ���� int � double �� �� ������, ����������, ������ � ����������
	������� ������ ������� ���� ������ ��� ������, ���� �� ������� �� ���� ��� ����� �� �������.
	� �� ����� �������� cout << e / t << endl; � � ����� �������� ������ ������� �������� �����, ��� ��� ��� ���
	������������. ������������� ���������� ���������� ����� ����� �� ���� �� �������� ������.
	��� �� ��������, ���������� ����� ������ ��������� � �������� �������� ���� ������, ����� ���������� ��������
	������ ������.*/
	cout << "������ ����������� �����������" << endl;
	int e = 33;
	double t = 442.56;
	cout << e / t << endl;
	cout << "==============" << endl << endl;
}


