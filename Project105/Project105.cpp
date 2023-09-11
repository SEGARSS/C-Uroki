//Виртуальные методы класса c++. Ключевое слово virtual. Ключевое слово override. ООП. C++ #103 - Видео №120.
#include<iostream>
#include<string>
using namespace std;

class Gun
{
public:
	virtual void Shoot()
	{
		cout << "BANG!" << endl;
	}
};

class SubmachineGun :public Gun
{
public:
	void Shoot() override
	{
		cout << "BANG!" << "BANG!" << "BANG!" << endl;
	}
};

class Bazuka :public Gun
{
public:
	void Shoot() override
	{
		cout << "BADABUM!!!" << endl;
	}
};

class Player
{
public:
	void Shoot(Gun *gun)
	{
		gun->Shoot();
	}
};

int main()
{
	setlocale(LC_ALL,"ru");

	Gun gun;
	SubmachineGun mach;
	Bazuka bazuka;

	Player player;
	player.Shoot(&bazuka);
	

	return 0;
}
/*Присвоем в классе Gun к функции void Shoot() слово virtual, то при наследовании в других класса,
данной функцией мы можем пользоваться, всеголишь изменив её метод с помощью override.
Тобижь по факту она становиться виртуальной функцией и много функциональной.
И создав класс игрока, мы можем менять ему быстро оружию применяв всего одну функцию но меняя её
характе в зависимости от класса.
Если бы мы не применили бы реализация виртуальных функций, кода было бы горазда больше.
Плюс, еслиб бы мы выевили бы косяк в функции oid Shoot() и его бы пришлось бы подправлять,\
то в случаи с виртуальной функцией, достаточно подправить в одном месте, а не в каждойм классе в каждой данной
функцией.*/