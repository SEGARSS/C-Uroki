//����� ������������ �������� ������ �� ������������ ������-����������. ������������. ��� C++ #102 - ����� �118.
#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	A()
	{
		msg = "������ ���������";
	}

	A(string msg)
	{
		this->msg = msg;
	}

	A(string msg, int a)
	{
		this->msg = msg;
	}

	void PrintMsg()
	{
		cout << msg << endl;
	}

private:
	string msg;
};

class B : public A
{
public:
	B():A("���� ����� ���������")
	{
		
	}
};

int main()
{
	setlocale(LC_ALL,"ru");

	B b;
	b.PrintMsg();

	return 0;
}
/*��� ����� ������ B():A() ����� ������� ����������� �� ���������. ���, ���� ����� ������, � � ��� �� ��� 4, ���� ��
������� �� ���������, �� �� � ������� A() ����� �� �������, ������� ���� ������� � ������������.*/