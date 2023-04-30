//����������� ��������� �������. ����������� ���������. ����������� ���������. ��� ���������� ���� #57
//����������� ������������� ������� c++. ����������� ������ �++. �++ ��� ����������. ���� #58
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

	int size = 10;
	int* firsArray = new int[size];
	int* secondArray = new int[size];

	//��������� ���������� ��� ��������� ������������ ������ � ������� �� �����.

	FillArray(firsArray, size);
	FillArray(secondArray, size);

	cout << "firsArray = \t";
	ShowArray(firsArray, size);
	cout << "ShowArray = \t";
	ShowArray(secondArray, size);

	//����������� ������� ������, ��� ���������� �������� �������, ���� ������ � ���� ����� ������������� ������.
	delete[] firsArray;

	//������ ���������������� ����������� ������� ������� secondArray � ����� ��� ������ � firsArray.
	firsArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		firsArray[i] = secondArray[i];
	}
	cout << "================" << endl;

	//������ ����� ������ � ��������(� ��� �������) � ������ ����������, ��� ��� �� ������ ����������� ��.
	cout << "firsArray = \t";
	ShowArray(firsArray, size);
	cout << "ShowArray = \t";
	ShowArray(secondArray, size);

	
	// ���������� ��������� ������.
	delete[]secondArray;
	delete[]firsArray;

	
}
/*���� �����������. ����� ������������ ������ ������� � ������, ���������� ������ ��� �����, � ������� �� �����
���������� ������ � ������. ���� � ������� �� ������ ������� ��� - firsArray = secondArray; �� ������ �������
���� � ����� �����, � ����� �������, � ��� ���� ��� � �������� ������ ������, ��� ��� ������ � ������ firsArray
���� ��������� � ����������� ������ � � ��� ��� ������ �� �������.
�������, ����� ���������� ����� ��������, �� ������� delete[] firsArray; � �������������� ����� firsArray
����� ������ (�����������) ���� ������ ������� ������� secondArray.
� ����� ����� ��������� ��� �������.
���� �� ��������� �� ��������� �������� ������ ��������, �� ������ ��� ������ �� ������� ������ � ������ ������,
� ������ ���������, ��� ��� ����������� ���������.*/
