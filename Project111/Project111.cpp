//������������� ������������ c++ ������. ���. �������� �++ � ���� ��� ����������. ���� #109 - ����� 126.

#include<iostream>
#include<string>
using namespace std;

class Car
{
public:
	string str1 = "���� ������ ������!";
	void Drive()
	{
		cout << "� ���!" << endl;
	}
};

class Airplan
{
public:
	string str2 = "���� ������ ������!";
	void Fly()
	{
		cout << "� ����!" << endl;
	}
};

class FlyingCar : public Car, public Airplan
{
public:
	
};

int main()
{
	setlocale(LC_ALL,"ru");

	FlyingCar fc;
	fc.Drive();
	fc.Fly();
	
	Car *ptrC = &fc;

	return 0;
}
/*������������� ������������ ��� ����� ������� - class FlyingCar : public Car, public Airplan
� ���� �������, ����� FlyingCar ����� ������������ ��� ������ � ������� ������� Car � Airplan.*/