//������������ ������� �������. public private protected ��� ���. ������������� �������. 
//C++ ���� #75 - ����� �88

#include<iostream>
#include<string>
using namespace std;

class Human
{
public:
	int age;
	int weight;
	string name;
	void main()
	{
		cout << "��� " << name << "\n��� " << weight << "\n������� " << age << endl << endl;
	}
};

class Point
{
public:
	int x;
	void Print()
	{
		cout << "x = " << x << "\ny = " << y << "\nz = " << z << endl << endl;
		PrintY();
	}
private:
	int z;
	int y;
	void PrintY()
	{
		cout << "Print() = y = " << y << endl;
	}
};

int main()
{
	Point a;
	a.Print();
}

/*� ������ class Point, �������� ����� public: � �� ��� ��� ����, ��� �������� ��� ������.
� �� ��� ��� ���� ������ private: �� ����� ������, �� ������������ � ������� �� �����.
�� ���� � ����� ������, � class Point �� ����� ����������������� �� ����� ��������, � ���� �������
��� ���������� ��� ���� � �� ��������. ������, ���� public: �� ������� void Print() ��� ������ ��������
� ��� ������, ������� ���������� � ������ private: � ����� ������ ������ ��� ������� � ������� a.Print();
�� � ����� int main() ���� �� �� ���������� �� ���������� � ������ ������� ���������� � ������ class Point
� ���������� ��������������� ���� private:, � ��� �� ������ �� �����, ����� ������.
��� ���� ��� ����� ��� � ������ �� ����������, ��� ������ �������������� ������, ������� ����� �� ������� � 
������� ����� ����� ��� ����������� �����������. �� � �������, ������ �����, ����� ����� ����� ������, �� ���
��������� �� ����� ��������.*/