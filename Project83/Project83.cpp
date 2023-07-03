//Ключевое слово this в ООП. Что означает. Что это такое. Для чего нужен this указатель C++ #81 Видео - 94.

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

	point a;
	a.SetY(5);
	a.Print();


	return 0;
}

/*Ключевое слово this. Он по умолчанию, неявно указан в классах.
Пример его реализации, почему тут мы его вызвали.
Напишем стандартный класс ниже, где он не нужен.
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
тут подмечаем, что если мы вызываем такую запись
int main()
{
	setlocale(LC_ALL, "ru");

	point a;
	a.SetY(5);
	a.Print();


	return 0;
}
Мы увидем в компеляторе что игрику присвоилась 5.
Но, напишем тепероь клас point по другому.
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
Мы в конструкторе поинт изменили данные записи с SetY(int valueY) на SetY(int y), и при вызове
{
	setlocale(LC_ALL, "ru");

	point a;
	a.SetY(5);
	a.Print();


	return 0;
}
мы получим 0, хотя указали в переменой a.SetY(5);
Потомучто, компелятор по умолчанию прыгает на y = 0;
Чтобы это обойти, прописываем в классе this.y = y;
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
И при запросе компелятора, мы увидим присвоенную 5 переменной y.
С добавление ключевого слова this он как ссылка указывает, что именно возьми даннеые для переменной именно там,
где мы его прописали в конструкторе, тобижь -
void SetY(int y)
	{
		this.y = y;
	}
*/
