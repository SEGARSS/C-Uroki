/*Перегрузка конструкторов класса. 
Что такое перегрузка. 
Как перегрузить конструктор.Урок#79 - Видео 92*/

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

int main()
{
	setlocale(LC_ALL, "ru");

	point a;
	a.Print();

	point b(5, 6);
	b.Print();

	point c(30, false);
	c.Print();

	return 0;
}

/*Перегрузка конструктора. Это создание ещё таковаже конструктора в нутри класса с таким же названием.
К примеру у нас есть в класе поинт point конструктор с параметрами -

point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}
	
Это помогает в случаи если мы не хотим видеть муссор при выводе данных, то мы их введём сами.
Но, если мы хотим по умолчанию чтобы небыло муссора и при этом не нужнно вводить данны?
Мы делаем перегрузку конструктора а именно добавляем ещё конструктор point с такими вот параметрами - 

point()
	{
		x = 0;
		y = 0;
	}

В таклм случаи, вызвав данный конструктор в классе - 

point a;
a.Print();

мы не получим мусор данных, а получим по умолчанию (0) - ну или вместо нуля будет то что мы указали конструктору.

Конструктор, может быть с одинаковым названием, но его тело (условие должно быть разным)
Или иначе компелятор выдаст ошибку.
Ниже пример, одинаковых по названию конструкторов, но у них разная реализация.

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

Количество конструктор не ограниченно программой, но лучше ограничеться логикой, целесообразностью и оптимизацией.
*/