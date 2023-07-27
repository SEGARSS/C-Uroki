//���������� ��������� �������������� . ���������� ���������� ������. C++ ��� ����������. ����#87 - ����� �102.

#include<iostream>
#include<string>
using namespace std;

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
};

class TestClass
{
public:

	int& operator[](int index)
	{
		return arr[index];
	}

private:
	
	int arr[5]{ 5,68,4,6,348 };
};

int main()
{
	setlocale(LC_ALL, "ru");

	TestClass a;

	cout << a[0] << endl;

	a[0] = 100;

	cout << a[0] << endl;

	return 0;
}
/*���������� ������ ������� � ���.*/