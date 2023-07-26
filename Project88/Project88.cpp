//Перегрузка инкремента и декремента. Постфиксного и префиксного. ООП перегрузка операторов. C++ #86 - Видео 101.

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

	point& operator ++(int value) // Инкремент
	{
		point temp(*this);
		this->x++;
		this->y++;
		return temp;
	}

	point& operator ++ () // Дикремент
	{
		//Записи реализации разные, но они вывод делают одинаковый. Просто для понимания как можно написать данный код.
		this->x++;
		this->y += 1;

		return *this;
	}

	point& operator --(int value) // Инкремент
	{
		point temp(*this);
		this->x--;
		this->y--;
		return temp;
	}

	point& operator -- () // Дикремент
	{
		//Записи реализации разные, но они вывод делают одинаковый. Просто для понимания как можно написать данный код.
		this->x--;
		this->y -= 1;

		return *this;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	point a(1, 1);

	point b = ++a;

	a.Print();

	point c(1, 1);

	point v = --c;

	c.Print();

	return 0;
}