//strlen c++ ����������. ��������� ���������� �������� � ������ c++ 
//��#11 - ����� �76.

#include<iostream>
using namespace std;

int strLength1(const char *str)
{
	int counter = 0;
	while (str[counter]!='\0')
	{
		counter++;
	}
	return counter;
}

int strLength2(const char* str2)
{
	int counter = 0;
	while (str2[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "========������ ��� ���������==========" << endl;
	const char str[] = {'f','w','w','wf','\0'}; //��������� � ����� ������������ 0, ����� ������ ������ ������ ������.
	cout << strLength1(str) << endl;//������ ������ �������� - 'wf' - ��� �� ���� ������ ���!
	cout << "========������ � ����������==========" << endl;
	const char *str2 = "�����!";//� ���������� ������������ 0 �� �����, ��� ��� �� ��� ������� � ������� strLength2.
	cout << strLength2(str2) << endl;
	cout << "==================" << endl;
}

