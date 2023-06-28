/*���������� ��� ���. ����� ����� ���������� ������ � ���. ���������� � �����������. ����������. #80 ����� - 93.*/

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

void foo()
{
	cout << "Foo ����� ������" << endl;
	MyClass a(1);
	cout << "Foo ����� ����������" << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	foo();
	cout << endl;

	MyClass a(1);

	MyClass b(2);

	MyClass c(3);

	return 0;
}

/*���������. ��� ������ ������� �������������� � ������, ��� �� �� ������� ��������� public: �� ��� private:, �� �� ���������
������ ��� �������� ����� private: - ��� �����!
���������� - �� ����� ���� � ����������� � ��������� ���������. 
��������� �� ��� ���������� ������ � ������ ��������� � �� ��� �����.
����� ������� ���������� ������, ����� ����� ��������� �������� ���� ������(~) - ~MyClass.
���������� ����������� �����, ����� ������� ������� �� ������� ������. ����� ������� ����� ��� ����� ������ ����� ������� � 
��� ����� ��������� ��� ������������ ������.
*/