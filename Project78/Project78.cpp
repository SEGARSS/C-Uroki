//��� ����� ������� � ������� ��� ������. ������ get � set. ������������ ���. ������. C++ 
//���� #76 - ����� �89
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

class point
{

private:
	int x;
	int y;
public:

	int GetY()
	{
		return y;
	}
	void SetY(int valueY)
	{
		y = valueY*2;
	}

	int GetX()
	{
		return x;
	}
	void SetX(int valueX)
	{
		x = valueX;
	}
	
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Ru");

	point a;
	a.SetY(4);
	a.SetX(5);
	a.Print();
	int result = a.GetX();
	int result2 = a.GetY();
	cout << result2 << endl;
	cout << result << endl;

	return 0;
}
/*��� ������� ������ ������������. ������, �� �� ����� �������� � ������ ������ �������� � ����������� � � �,
��� ��� ��� � ��� ���������� � private:. �� �� ����� � ���� �������� ����� ������ � ������, ��� ��� - ��������,
��� ���������� ��� ��� - Get � Set. ��� ���������, ��������� ������� ���������, ������ ���� ����� ���������� � ���������� �,
�� ����������� GetX � ��� ��������� ����������� SetX.*/