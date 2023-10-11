//Что такое интерфейс в ООП. Интерфейс c++ пример. Изучение С++ для начинающих. Урок #113 - Видео 131.

#include<iostream>
#include<string>
using namespace std;

//-----------------------------------------------------
class IBicycle
{
public:
	void virtual TwistTheWheel() = 0;
	void virtual Ride() = 0;
};
//-----------------------------------------------------
class SimpleBicyle: public IBicycle
{
public:
	void TwistTheWheel() override
	{
		cout << "метод TwistTheWheel() SimpleBicyle" << endl;
	}

	void Ride() override
	{
		cout << "метод Ride() SimpleBicyle" << endl;
	}

};
//-----------------------------------------------------
class SportBicycle: public IBicycle
{
public:
	void TwistTheWheel() override
	{
		cout << "метод TwistTheWheel() SportBicycle" << endl;
	}

	void Ride() override
	{
		cout << "метод Ride() SportBicycle" << endl;
	}
};
//-----------------------------------------------------
class Human
{
public:
	void RideOn(IBicycle &bicyle)
	{
		cout << "Крутим руль! " << endl;
		bicyle.TwistTheWheel();
		cout << "Поехали! " << endl;
		bicyle.Ride();
	}
};
//-----------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	SimpleBicyle sb;
	SportBicycle SpB;

	Human h;
	h.RideOn(sb); // Сел на простой велик
	cout << endl << endl;
	h.RideOn(SpB);// Сел на спортивный велик

	return 0;
}
//-----------------------------------------------------
/*Пример использования интерфейса в наследовании класса.*/