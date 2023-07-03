//Конструктор копирования. Что это. Пример. Когда вызывается Копирование объектов по умолчанию C++ #82 - Видео 95.

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
		cout << "Объек " << data << " Вызвался конструктор" << endl;
	}

	~MyClass()
	{
		delete[] data;
		cout << "Объек " << data << " Вызвался деструктор" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	


	return 0;
}