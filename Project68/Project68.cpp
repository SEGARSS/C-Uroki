//��������� �� ������� � �������� ���������. �������� ������� � �������� ���������. �++ 
//���� #65 - ����� �78

#include<iostream>
#include<string>
using namespace std;

int foo1(int a)
{
	return a - 1;
}
int foo2(int a)
{
	return a * 2;
}

//������� ���� ������� ��� ���������� ������� ������������� ���������� ���������.

string GetDataFromBD()
{
	return "Data From BD";
}

string GetDataFromWebServer()
{
	return "Data From WebServer";
}

string GetDataAstral()
{
	return "Data Astral";
}

void ShowInfo(string(*foo)())
{
	cout << foo() << endl;
}

void main()
{
	setlocale(LC_ALL, "ru");

	ShowInfo(GetDataAstral);

	int(*fooPoint)(int a);
	fooPoint = foo2;
	cout << fooPoint(5)  << endl;
}

/*������� ������, ���� �� �� ��������� ������� ��� �������, ����� ������, ��������� ������ () - �������
	void(*fooPoint)();


	fooPoint = foo1;
	fooPoint();
	cout << "=========" << endl << endl;
���� �� ��� ����� � ������� � � ���������� ������ �� ������ ������ - 
	int(*fooPoint)(int a);
	fooPoint = foo2;
	cout << fooPoint(5)  << endl;
��� �������, ��� � � �������� �� �������� int - int foo1(int a).

������ ����� ������� � �����������?
� ������� ������� �� 2 �������
string GetDataFromBD
string GetDataFromWebServer
��� ����������, �� ����� ����������� � ������� ShowInfo �������� ������, ������� ����� �� ��������,
� ������� ����� if � else - ��� ���� string GetDataFromBD � ���� ��� �� string GetDataFromWebServer,
� ����� ��������� ��� ���������, � ���� ����� ������ �������? ����� ���������? �����, �� �����?
��� � ��� 3 ������� 
string GetDataFromBD()
string GetDataFromWebServer()
string GetDataAstral()
������ �� ��� �� ����� ��������� 
void ShowInfo(string(*foo)())
{
	cout << foo() << endl;
}
����� �������, �� ����� ������� ����� �������� ������, ������� void ShowInfo(string(*foo)()) ������
�� ���, ��������� ����� ��� ���������.*/