/*����������� ������ ������. 
����� �����. ����������� � �����������. 
����������� �� ���������. ����#78 - ����� 91*/

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

	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}
	/*
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
	void SetY(int valueY)
	{
		y = valueY;
	}
	*/
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
	
};

int main() 
{
	setlocale(LC_ALL, "ru");
	
	point a( 0, 8);
	a.Print();
	point b(4, 66);
	b.Print();
	
	return 0;

}

/*�����������. �� ��������� � ������� ���������� ������������ �� �����, �� �� �� ����� � �� ������ ����������
� ������� �� ���������, ������ � �������.
� �������, class point � ���� ����������� �� ����� �� ��������� point(), � ����� ������ ��� ���������
������ ������ �� ������� ����� ���� �� �������������� ���� ������, ���������������� ����� Get � Set.
��, ���� �� ������� ����������� � ������, � ������ ��� ��� - 

point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

�� � ����� ������, ��� ������ ������, �� ��� ������ �� ����� �������� point a; �� ��� ����� �������� ������
point a(5�,5); ��� �������(����������������) ����� ������, ��� ���������� Get � Set, �� ���� � ��������� ������,
� ���� �� �������� ������������ ������������������� ������.

����� ����� ��������, ��������� ��������� � ����� ������ � ������ � ������� public:, ���� �� ��� ������� � 
������ private: �� �� ������ �� ���������������, �� ������ ������ ��� ���������� � ������ ����� �� �� ������
���� � ������� private: .

�����, �������� ������������ �� ����� ���������� �� �������� ������, ������ ���� ����� ����������� point
�� � ����������� ������ ���� � ����� �� ��������, ���� �������� � ������, �������� �� ����� �������.*/