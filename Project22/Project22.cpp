/* ��� ����� ��������� ����. ��������� �����������. C++ ��� ����������. ���� #24. ����� - 31.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	for (int i = 1; i < 5; i++)
	{
		cout << "�������� 1� ���� for ���������� � " << i << endl;

		for (int j = 1; j < 5; j++)
		{
			cout << "\t�������� 2� ���� for ���������� � " << j << endl;
		}
	}
}