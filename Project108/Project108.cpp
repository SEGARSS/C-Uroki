//����� ����������� ���������� c++. ������������. �����������. virtual. override. ��� ���������� #106 - ����� 123.

#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	A()
	{
		
	}
	virtual ~A()
	{
		
	}
};

A::~A() {};

class B: public A
{
public:
	B()
	{
		
	}
	~B() override
	{
		
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	A *bptr = new B;
	delete bptr;

	return 0;
}
/*����� ���������� ���� �������� �����������, �� ��������� ������ A::~A() {}; 
�� ������ �� ����� ����������� ������������ ������� (�), ��� ��� �� ��� �������� ������� �����������.*/