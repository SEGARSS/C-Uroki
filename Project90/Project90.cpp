//������������� ������� � ������ ������. ��� ���� ������������. ��� ������������. ��� ���� ������� #88 - ����� �103.

#include<iostream>
#include<string>
using namespace std;

class Test;

class point
{
	int x;
	int y;
public:

	point()
	{
		x = 0;
		y = 0;
		cout << this << "Constructor" << endl;
	}
	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << "Constructor" << endl;
	}

	bool operator == (const point& other)
	{
		return this->x == other.x && this->y == other.y;
	}

	bool operator != (const point& other)
	{
		return !(this->x == other.x && this->y == other.y);
	}

	point operator +(const point& other)
	{
		point temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}

	int GetX()
	{
		return x;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}

	int GetY()
	{
		return y;
	}

	int SetY()
	{
		this->y = y;
	}

	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

	point& operator ++(int value) // ���������
	{
		point temp(*this);
		this->x++;
		this->y++;
		return temp;
	}

	point& operator ++ () // ���������
	{
		//������ ���������� ������, �� ��� ����� ������ ����������. ������ ��� ��������� ��� ����� �������� ������ ���.
		this->x++;
		this->y += 1;

		return *this;
	}
	
	point& operator --(int value) // ���������
	{
		point temp(*this);
		this->x--;
		this->y--;
		return temp;
	}

	point& operator -- () // ���������
	{
		//������ ���������� ������, �� ��� ����� ������ ����������. ������ ��� ��������� ��� ����� �������� ������ ���.
		this->x--;
		this->y -= 1;

		return *this;
	}

	friend void ChangeX(point& value, Test& testvalue);
};

class Test
{
	int data = 0;

	friend void ChangeX(point& value, Test &testvalue);
public:
	void PrintD()
	{
		cout << "���� " << data << endl << endl;
	}
};

void ChangeX(point& value, Test& testvalue) // ������������� �������.
{
	value.x = -1;
	value.y = +5;
	testvalue.data = 20;
}

int main()
{
	setlocale(LC_ALL, "ru");

	Test test;

	point a(5, 13);
	a.Print();
	ChangeX(a, test);
	a.Print();
	test.PrintD();

	return 0;
}

/*������� ������������� �������.
void ChangeX(point& value, Test& testvalue)
� ��������� � � �������� point � ����� Test.
��� ���� ����� ������� ��������� � ��������, ���������� � ��������� � ����� �������, ������ �� ����� ���, ���� � public: ����
� private. ����� ������� ������� ������������ ������� ������, � ���� ������ ������������� �� ������.
����� ����� �������� ���� ����, � ������� ������������� ����� � ���� point � Test, �������� ��� ��� � ���� ����� � ������ point
��� ��� - friend void ChangeX(point& value, Test &testvalue); ����� �� ������ �������� ������ Test &testvalue, ������?
��������� ����� ���� Test ������ ���� ����� point � �� ����� ����� ��� ���� ������ ���� �� ���������.
� ��� ����� ���� ���������� ������ point �� ������ ����������� class Test; � ����� ����� point ����� �������� ��� �� ����,
� ������ �� ���� ����� ������.*/