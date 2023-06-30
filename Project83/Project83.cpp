/*�������� ����� this � ���. ��� ��������. ��� ��� �����. ��� ���� ����� this ��������� C++ #81 ����� - 94*/

#include<iostream>
#include<string>
using namespace std;

class Human
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
	void start()
	{
		bool VoltageIsNormal = CheckVoltage();
		if (VoltageIsNormal == true)
		{
			cout << "ViiyyyYYUU" << endl;
		}
		else
		{
			cout << "NEMA TRR! NEMA TRRR!" << endl;
		}
	}
};

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

class MyClass
{
	int* data;

public:
	MyClass(int size)
	{
		data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "����� " << data << " �������� �����������" << endl;
	}

	~MyClass()
	{
		delete[] data;
		cout << "����� " << data << " �������� ����������" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	point a;
	a.SetY(5);
	a.Print();
		

	return 0;
}

/*�������� ����� this. �� �� ���������, ������ ������ � �������.
������ ��� ����������, ������ ��� �� ��� �������.
������� ����������� ����� ����, ��� �� �� �����.
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
	void SetY(int valueY)
	{
		y = valueY;
	}
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
};
��� ���������, ��� ���� �� �������� ����� ������ 
int main()
{
	setlocale(LC_ALL, "ru");

	point a;
	a.SetY(5);
	a.Print();


	return 0;
}
�� ������ � ����������� ��� ������ ����������� 5.
��, ������� ������� ���� point �� �������.
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
	void SetY(int y)
	{
		y = y;
	}
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
};
�� � ������������ ����� �������� ������ ������ � SetY(int valueY) �� SetY(int y), � ��� ������
{
	setlocale(LC_ALL, "ru");

	point a;
	a.SetY(5);
	a.Print();


	return 0;
}
�� ������� 0, ���� ������� � ��������� a.SetY(5);
���������, ���������� �� ��������� ������� �� y = 0;
����� ��� ������, ����������� � ������ this.y = y;
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
	void SetY(int y)
	{
		this.y = y;
	}
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
};
� ��� ������� �����������, �� ������ ����������� 5 ���������� y.
� ���������� ��������� ����� this �� ��� ������ ���������, ��� ������ ������ ������� ��� ���������� ������ ���, 
��� �� ��� ��������� � ������������, ������ - 
void SetY(int y)
	{
		this.y = y;
	}
*/