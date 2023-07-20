//Перегрузка оператора сложения. Перегрузка операторов пример.C++ Для начинающих. Урок#85 - Видео 100.

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

	

	point a(5, 85);
	point b(3, 32);

	point c = a + b;

	c.Print();

	return 0;
}