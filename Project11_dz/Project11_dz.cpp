//�������� ��������� ����������� � ������� switch.

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int che1, che2, selection;
	cout << "������� ��� �����: " << endl;
	cout << "������� ������ ����� - ";
	cin >> che1;
	cout << "������� ������ ����� - ";
	cin >> che2;
	cout << "�������� �������� � �������" << endl <<
		"1. ��������" << endl <<
		"2. ���������" << endl <<
		"3. ���������" << endl <<
		"4. �������" << endl;
	cin >> selection;


	switch (selection)
	{
	case 1:
		cout << "��� �������� ����� ����� = " << che1 + che2;
		break;
	case 2:
		cout << "��� ��������� ����� ����� = " << che1 - che2;
		break;
	case 3:
		cout << "��� ��������� ����� ����� = " << che1 * che2;
		break;
	case 4:
		cout << "��� ������� ����� ����� = " << (double)che1 / che2;
		/* ���� ����� ����� - ��������� ������� � ������ �����,
		� ������� �� � ���� � � �������� � ������ ������ ���� ������.
		���� �� ���������� �������� �������� double ������ int, �� �� ���������� �������. */
		break;
	default:
		cout << "����� ��� ����� ������� �����������!";
		break;
	}
}