//��������� �� ���������. �������� ���������� � ������� �� ���������. ��������� �� ���������. ���� #38

#include<iostream>
using namespace std;
/*�������� ���������� ���������. ��������� � ��������� - void foo(int c, int a = 5, double b = 5.5) ��� void foo
���������, � - (int c, int a = 5, double b = 5.5) ��� ���������. ��������� �� ���������, ��� ��������� ���
������������ �������� - int c. �� ����� ������ ���� �����, � ������. � ������� ��� ����� ������ - 
(int a = 5, double b = 5.5, int c,) �� ����� ��������. ���� ������ �������� �������� - int c � �����, ��
���� ��� ��������� �������� ��� �������� ��� � ����� ������.*/
void foo(int c, int a = 5, double b = 5.5)
{
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
	for (int i = 0; i < b; i++)
	{
		cout << "#" ;
	}

}
/*�����, foo, ����� ��������� ��� - foo(); ���� ��� ���������� �� ��������, ������, ���� ���������� ��������� ��������.
� ���� � ���������, ����� ��������� �� ��������� - int c � �������, �� ����� ����� ��������� ������� ��������,
��� ������ - foo(3). ������ ���� ������ ����� ���������� - (int c, int a = 5, double b = 5.5), �� ����� �������
������ �������� �� ���������, � ��������� �� ����������� ���� �� �����, ��� ��� �� ��� ��������� ��������.*/
void main()
{
	setlocale(LC_ALL, "Ru");
	foo(3);
}