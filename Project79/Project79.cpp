//Инкапсуляция ООП пример. private методы. Что такое инкапсуляция. C++ Для начинающих.
//Урок#77 - Видео №90
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
		cout << "Имя " << name << "\nВес " << weight << "\nВозраст " << age << endl << endl;
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
/*На примере кофе машины. Есть кнопочка старт, которая взаимодействует с пользователем. - a.Start();
Но мы также заложили во внутрь функцию, чтобы при нажатии на старт, кофе машина проверила есть ли напряжение в сети.
Даную проверку мы поместили в class CoffeeGrinder раздел private: - bool CheckVoltage() и указали, что если будет  true
то напряжение есть и мы увидим надмись ViiyyyYYUU!(Тобижь всё отлично, напряжение есть, пошёл пуск)
а если проверка вышла false - нет напряжения, то получим NEMA TRRR! NEMA TRRR! тобижь, нет напряжения,
машинка свою работу не начнёт.
ПРимеру вобщем того, что пользователю отдельно ненадо нажимать проверку напряжения, это заложено в нутри функционала
и в заимождействие пользователь делает только с кнпкой старт. Пример Инкапсуляции в таком виде.*/