//Перегрузка оператора равенства == и не равно !=. Перегрузка логических операторов сравнения. C++ #84 - Видео 97.

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

/*Операторы равенства - не равенства или (== - !=)
В классе point создали оператор булевой переменной bool;
И сделали ему перегрузку, чтобы можно было проверить и на равеснтво - == и на неравеснтво - !=.
Реализация оператора bool или просто булевой переменной можно написать так - 

bool resul = a == b;
if(a==b)
{
	return true;
}
else
{
	return false
};
Данный вариант записи, нубский) Достаточно просто реализовать
if(a == b);
и всё, потомучто это булеевая переменная, ей ненужно дополнительно чтото указывать,
она и так поймёт если выражение её не совпадёт, вернёт ложь false, если соблюдаеться условие
то вернёт true третьего не данно. Аналогично и с неравенством.*/