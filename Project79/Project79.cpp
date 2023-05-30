//������������ ��� ������. private ������. ��� ����� ������������. C++ ��� ����������.
//����#77 - ����� �90
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

int main()
{
	setlocale(LC_ALL, "ru");

	CoffeeGrinder a;
	a.Start();
	return 0;
}
/*�� ������� ���� ������. ���� �������� �����, ������� ��������������� � �������������. - a.Start();
�� �� ����� �������� �� ������ �������, ����� ��� ������� �� �����, ���� ������ ��������� ���� �� ���������� � ����.
����� �������� �� ��������� � class CoffeeGrinder ������ private: - bool CheckVoltage() � �������, ��� ���� �����  true
�� ���������� ���� � �� ������ ������� ViiyyyYYUU!(������ �� �������, ���������� ����, ����� ����)
� ���� �������� ����� false - ��� ����������, �� ������� NEMA TRRR! NEMA TRRR! ������, ��� ����������,
������� ���� ������ �� �����.
������� ������ ����, ��� ������������ �������� ������ �������� �������� ����������, ��� �������� � ����� �����������
� � �������������� ������������ ������ ������ � ������ �����. ������ ������������ � ����� ����.*/