//��� ����� �����. ��� ����� ������ ������. ��������� ������ ���. ����� ��� ���. 
//���� #73 - �86

#include<iostream>
#include<string>
using namespace std;

class Human
{
public: // ����������� �������.
	int age;
	int weight;
	string dost;
	string name;
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
	Human firstHuman;
	firstHuman.age = 30;
	firstHuman.name = "Ryabkov Sergey Olegovich";
	firstHuman.weight = 100;
	cout << firstHuman.age << endl;
	cout << firstHuman.name << endl;
	cout << firstHuman.weight << endl<< endl;

	cout << "========================== " << endl << endl;

	Human secondHuman;
	secondHuman.age = 34;
	secondHuman.name = "Ryabkov Sergey Olegovich";
	secondHuman.dost = "Stal PROGRAMISTOM";
	cout << secondHuman.age << endl << secondHuman.name << endl << secondHuman.dost << endl << endl;

	cout << "========================== " << endl << endl;

	Point a;
	a.x = 1;
	a.y = 4;
	a.z = 3;

	cout << a.x << endl;
	cout << a.y << endl;
	cout << a.z << endl;

	return 0;
}
/*����, ���������� ��� ��� class Human ���� ���������, � ������ �� � ���� �� ��������, �������� ������� ��� 
�� ����������, �� �� ����� ��� ��� �������� � �� ��� ����������, � ������ ����� Human firstHuman; � ����� firstHuman.
��� ����� ����� �� ����� �������, ���� ���, ���� ������� � ��� �����. ��� � ���� ������, � ���� ��� ��������� �
��������, � �� ��� ������ �������� ����, �������� ������ � �������� ����, � ��� ������.
�� ������� ������ class Point, ��� ����� �� ��� ���������� ������������ �������� ����� x,y,z. 
��� ����������� ��� ���������� ���.*/
/*� ��������� �������. ����� ������� � ��������, � ������� ��� � ��������. ������, ��� ��������� � ��������
class Human � ����� � ��� ���� ������� ��� ������������ ��� ���������, � ������� ���, ������, ���� � ��� �����, ��
�����, ���������� Human firstHuman � ����� firstHuman. �� ����� �����, �� �������� ��� ��� �����, ��� ��� ������
��� ��� �����. � � ������ ����� ��� ��� �����, ���������� � �������, �� �������� �� �������������� �� �������,
�������� firstHuman[1][2] - � �� ������ ���� �� ������� ��� ��������, � ��� ��������� � ���� ����� ������ � ���
���������, ��� �� ������.*/