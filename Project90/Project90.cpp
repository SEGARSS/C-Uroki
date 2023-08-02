//Дружественные функции и классы пример. Для чего используются. Как определяются. Для двух классов #88 - Видео №103.

#include<iostream>
#include<string>
using namespace std;

class Test;

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

	friend void ChangeX(point& value, Test& testvalue);
};

class Test
{
	int data = 0;

	friend void ChangeX(point& value, Test &testvalue);
public:
	void PrintD()
	{
		cout << "Тест " << data << endl << endl;
	}
};

void ChangeX(point& value, Test& testvalue) // Дружественная функция.
{
	value.x = -1;
	value.y = +5;
	testvalue.data = 20;
}

int main()
{
	setlocale(LC_ALL, "ru");

	Test test;

	point a(5, 13);
	a.Print();
	ChangeX(a, test);
	a.Print();
	test.PrintD();

	return 0;
}

/*Создали дружественную функцию.
void ChangeX(point& value, Test& testvalue)
И подружили её с классами point и класс Test.
Для того чтобы функцию подружить с классами, необходимо её прописать в нутри классов, причём не важно где, хоть в public: хоть
в private. Тогда функция ссможет пользоваться данными класса, а клас сможет предоставлять ей доступ.
Также стоит заметить одну вещь, в функции пристутствует Сразу и клас point и Test, прописав это как в этом уроке в классе point
вот так - friend void ChangeX(point& value, Test &testvalue); класс не увидит значения класса Test &testvalue, почему?
Потомучто класс тест Test создан ниже клсса point и не видит какие там есть данные чтоб их подтянуть.
И для этого выше созданного класса point мы просто прописываем class Test; и тогда класс point будет понимать что он есть,
и сможет из него брать данные.*/
