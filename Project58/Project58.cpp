//������������ ������ �++ ������. ��������, ����������, ��������, ������ ������������� �������. #55

#include<iostream>
#include<string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int size = 0;
	cout << "������� ������ �������: ";
	cin >> size;
	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
		cout << arr + i << endl;
	}
	delete [] arr;
}
/*������� � ������������ ��������, �� ����� ��������� ��� �� �������� ���������. �� ��������� ���
��� ����� ��������� int *arr = new int[size]; ��� ��� �������. �����, �� �������� �� ����� ��������� �����,
����� ����������� delete [] arr;. � �������� ��������.
�����, �� ����� ����� �� ����� �������. � ������� ����� �� 5 ���������, � ���������� � 6�� ��������, � �� ��� ���
������, ��� ��� ������ �� �����, ������� ������� ������� � ������ ������, � ���������� ������������.
������ ���� ���� ���� ���������, �� ������� ������ �� ��������, �������� � ��� ���������, ������� ���������.
��� ������� ��� �� ���� ������.
int size = 5;
for (int i = 0; i <= size; i++) - ������� ������ ���.
	{
		cout << arr[i] << "\t";
		cout << arr + i << endl;
	}
	delete [] arr;
������� ������� ����, for (int i = 0; i <= size; i++) ������ i < size �� ������� i <= size, ��� �������
��� �� ������ �� ������� ������, � � ������ ������ ������� ������, � ������, ������ � �������� �� ������ ��������.
� �� ������? �� �� ����� �����, �� ��� ������� ������ �������, ��� ������� �� ������� i ����� ����� �������, 
�� ��� ��� �� �����.
*/