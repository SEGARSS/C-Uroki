/*���������� ������������� ������. 
��� ����� ����������. 
��� ����������� �����������.����#79 - ����� 92*/

#include<iostream>
#include<string>
using namespace std;

class human
{
public:
	int are;
	int witch;
	string name;

};

class CoffeeGrinder
{
private:
	bool CheckVoltage()
	{
		return true;
	}

public:
	void Start()
	{
		bool VoltageIsNormal = CheckVoltage();
		if (VoltageIsNormal == true)
		{
			cout << "ViiyyyYYUU!" << endl;
		}
		else
		{
			cout << "NEMA TRRR! NEMA TRRR!" << endl;
		}
	}
};

class point
{
private:

	int x;
	int y;

public:

	point()
	{
		x = 0;
		y = 0;
	}

	
	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

	point(int valueX, bool bal)
	{
		x = valueX;
		if (bal)
		{
			y = 1;
		}
		else
		{
			y = -7;
		}
	}
	
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "ru");

	point a;
	a.Print();

	point b(5, 6);
	b.Print();

	point c(30, false);
	c.Print();

	return 0;
}

/*���������� ������������. ��� �������� ��� �������� ������������ � ����� ������ � ����� �� ���������.
� ������� � ��� ���� � ����� ����� point ����������� � ����������� -

point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}
	
��� �������� � ������ ���� �� �� ����� ������ ������ ��� ������ ������, �� �� �� ����� ����.
��, ���� �� ����� �� ��������� ����� ������ ������� � ��� ���� �� ������ ������� �����?
�� ������ ���������� ������������ � ������ ��������� ��� ����������� point � ������ ��� ����������� - 

point()
	{
		x = 0;
		y = 0;
	}

� ����� ������, ������ ������ ����������� � ������ - 

point a;
a.Print();

�� �� ������� ����� ������, � ������� �� ��������� (0) - �� ��� ������ ���� ����� �� ��� �� ������� ������������.

�����������, ����� ���� � ���������� ���������, �� ��� ���� (������� ������ ���� ������)
��� ����� ���������� ������ ������.
���� ������, ���������� �� �������� �������������, �� � ��� ������ ����������.

	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

	point(int valueX, bool bal)
	{
		x = valueX;
		if (bal)
		{
			y = 1;
		}
		else
		{
			y = -7;
		}
	}

���������� ����������� �� ����������� ����������, �� ����� ������������ �������, ����������������� � ������������.
*/