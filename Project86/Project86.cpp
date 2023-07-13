//���������� ��������� ��������� == � �� ����� !=. ���������� ���������� ���������� ���������. C++ #84 - ����� 97.

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
		cout << this << " Constructor" << endl;

	}
	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << " Constructor" << endl;
	}

	bool operator == (const point & other)
	{
		return this->x == other.x && this->y == other.y;
	}

	bool operator != (const point& other)
	{
		return !(this->x == other.x && this->y == other.y);
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

	void SetY(int y)
	{
		this->y = y;
	}
			
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	point a(5, 1);
	point b(6, 3);

	point t(5, 1);
	point y(6, 3);

	bool result2 = a == b;

	cout << result2 << endl;
		
	bool result = a != b;
	
	cout << result << endl;
			
	return 0;
}

/*��������� ��������� - �� ��������� ��� (== - !=)
� ������ point ������� �������� ������� ���������� bool;
� ������� ��� ����������, ����� ����� ���� ��������� � �� ��������� - == � �� ����������� - !=.
���������� ��������� bool ��� ������ ������� ���������� ����� �������� ��� - 

bool resul = a == b;
if(a==b)
{
	return true;
}
else
{
	return false
};
������ ������� ������, �������) ���������� ������ �����������
if(a == b);
� ��, ��������� ��� �������� ����������, �� ������� ������������� ����� ���������,
��� � ��� ����� ���� ��������� � �� �������, ����� ���� false, ���� ������������ �������
�� ����� true �������� �� �����. ���������� � � ������������.*/