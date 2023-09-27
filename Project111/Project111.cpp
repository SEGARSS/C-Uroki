//Множественное наследование c++ пример. ООП. Изучение С++ с нуля для начинающих. Урок #109 - Видео 126.

#include<iostream>
#include<string>
using namespace std;

class Car
{
public:
	string str1 = "Поле класса машина!";
	void Drive()
	{
		cout << "Я еду!" << endl;
	}
};

class Airplan
{
public:
	string str2 = "Поле класса самалёт!";
	void Fly()
	{
		cout << "Я лечу!" << endl;
	}
};

class FlyingCar : public Car, public Airplan
{
public:
	
};

int main()
{
	setlocale(LC_ALL,"ru");

	FlyingCar fc;
	fc.Drive();
	fc.Fly();
	
	Car *ptrC = &fc;

	return 0;
}
/*Множественное наследование идёт через запятую - class FlyingCar : public Car, public Airplan
В этом случаии, класс FlyingCar может использовать все методы и функции классов Car и Airplan.*/