//�������� ������� � �������. ��� �������� ������ � �������. C++ ��� ����������. ���� #35.

#include<iostream>
using namespace std;

/*��� �������, ���������. void ������ �� ����������. ��, � �������� ��� �� ����������.
������, ������ ��� ������ � ��������, void �����, ������� ��������.*/

void FillArray(int arr[], const int SIZE)//FillArray - ��������� ������.
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
 	}
}

void PrintArray(int arr[], const int SIZE) //PrintArray - ������� �� ������ ( � �������� ����������� ������)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}

void main()
{
	setlocale(LC_ALL, "Ru");

	const int SIZE = 10; //SIZE - ������.
	int arr[SIZE];
	//���� �������, �� � ������� ��������� ������, ����� ��������� ����� � ������ ��� � ��������.
	FillArray(arr, SIZE); // �������� �����.
	PrintArray(arr, SIZE);/* ����� ������ ����������� ������� � ��������, ��� ��� � ���� �������
	���� ������� ���� - cout << arr[i] << endl;*/
}