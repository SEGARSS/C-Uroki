//������������ ������� ��� ������������. private public protected ������������� �������. ���. C++ #99 - ����� �115.
#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	string msgOne = "��������� ����";
private:

	string msgTwo = "��������� ���";
protected:
	string msgThree = "��������� ���";
};

class B : public A
{
public:
	void PrintMsg()
	{
		cout << msgOne << endl;
	}
};

int main()
{
	setlocale(LC_ALL,"ru");

	B b;
	b.PrintMsg();

	return 0;
}
/*�������� ����������� ��� �������� ����������� public - class B : public A. ���� protected:, �� ��� �������� ����������� �
��������, ��, ��� ����������� � �������. ������������ �������� ������.*/