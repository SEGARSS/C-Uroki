//����������� ��������� �������. ����������� ���������. ����������� ���������. ��� ���������� ���� #57 - ���� #58
#include<iostream>
#include<string>
#include<ctime>
using namespace std;

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "Ru");

	
	
}
