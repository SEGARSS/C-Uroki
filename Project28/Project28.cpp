//rand. srand. rand ������ ��������. srand time null. ���������� ��������� �����. randomize. ���� #29.

#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	/*������� rand � ���������� ��������� �����. ��, ��� ����� ������ ���������, ��� ��� ���� � ����
	����� �������� �� �����. ��� ���������� ���������� #include<ctime>, ��� ���������� �����
	������� srand, ������� ������ ��� ����, ���� ����� ������ (���������) ��������� �����.
	���� ������� ��������� �������� ��� - srand(time(NULL));. �����, ���� �� ����� �������,
	��� ��������� ��� �� 10 � �������, �� ����� ��� ��� int a = rand()%10; ��� 10 ��� � ������
	�� ������ ����� �� ����� �������� ��������� �����. ���� ����� � ������� �� 100, �� � ����� 100,
	��, ����� � ������� ���������, ����� ������ - int a = rand()%10+50; - ������, ����� �� 60
	������������ ��������� �����.*/
	/*srand(time(NULL));

	int a = rand()%10;

	cout << a << endl;*/

	/*������ ��� ��������� ����� ���������� ����������.*/
	srand(time(NULL));
	int const SIZE = 10; // ���������� ���������.
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) // �������, ����� ������������.
	{
		arr[i] = rand() % 100; // ��������� ��������� ����� �� 100
		cout << arr[i] << endl;

	}

}