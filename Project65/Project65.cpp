//��������� ���������� ������ � �������. ������ � ��������� � c++. C ++ ��� ����������.
//���� #63 - ����� �75.

#include<iostream>
using namespace std;

void foo(const char *str)
{
	cout << strlen(str) << endl;
}

void main()
{
	setlocale(LC_ALL, "RU");
	//������ ��������� ��������� �������.
	const char *strArr[] = {"Hello","World","PRINT"};
	for (int i = 0; i < 3; i++)
	{
		cout << strArr[i] << endl;
	}
	cout << "=====================" << endl;
	//������ ����� ��������� ������, ��������� ��� ����� ��������� (*).
	const char *str = "Hello""World""PRINT";
	for (int i = 0; i < 15; i++)
	{
		cout << str[i] << endl;
	}
	cout << "=====================" << endl;
	foo(str); //������ �������, � ������� strlen ������������ ���������� ���������� ��������.
}

