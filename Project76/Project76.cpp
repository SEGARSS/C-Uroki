//������ ������. ��� ����� ������ � ����������������. ����� ������ ������. �������. 
//C++ ���� #74 - ����� �87

#include<iostream>
#include<string>
using namespace std;

class Human
{
public:

	int age;
	int weight;
	string name;

	void Print()
	{
		cout << "��� " << name << "\n��� " << weight << "\n������� " << age << endl << endl;
	}
};

class Point
{
public:

	int x;
	int y;
	int z;

};

int main()
{
	setlocale(LC_ALL, "ru");
	Human firstHuman;
	firstHuman.age = 30;
	firstHuman.name = "Ryabkov Sergey";
	firstHuman.weight = 85;
	firstHuman.Print();


	return 0;
}

/*��� �� ���� ������� �������� ���� ����� ��� � �������� �� ��� ������� �������� �������.
������, ������ �� �� Human firstHuman; ���, ������ ���, �� �� ����� ���� ������� � ��������, � ���� �����������
cout, �� ����������� �� �����������, ��� ������ � ��� �����. � ��� �� ������� �������, �� � ����� ������ - class Human
� ��� ���� �������� ��� - cout << "��� " << name << "\n��� " << weight << "\n������� " << age << endl << endl;
� ����� ������ �������� �������� ��� � ���� �����, � ������� firstHuman.Print(); � ��� ������� ������,
������� �� ��������� � �������.*/