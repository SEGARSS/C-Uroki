//Абстрактный класс с++ пример. Чисто виртуальная функция. virtual. override. Полиморфизм ООП C++ #104 - Видео №120.
#include<iostream>
#include<string>
using namespace std;

class Weapon
{
public:
	virtual void Shoot() = 0;
	void Foo()
	{
		cout << "Foo()" << endl;
	}
};

class Gun : public Weapon
{
public:
	virtual void Shoot() override
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

class Bazuka :public Weapon
{
public:
	void Shoot() override
	{
		cout << "BADABUM!!!" << endl;
	}
};

class Knife :public Weapon
{
public:
	void Shoot() override
	{
		cout << "CHIK CHIK" << endl;
	}
};

class Player
{
public:
	void Shoot(Weapon *weapon)
	{
		weapon->Shoot();
	}
};

int main()
{
	setlocale(LC_ALL,"ru");

	Gun gun;
	SubmachineGun mach;
	Bazuka baz;
	Knife chil;

	Player player;
	player.Shoot(&baz);
	player.Shoot(&gun);
	player.Shoot(&mach);
	player.Shoot(&chil);
	chil.Foo();


	return 0;
}
/*Пример полиморфизма, когда все классы использую один метод одну функцию Shoot благодаря наследованию, вируальной функции Shoot
и абстрактному класс Weapon.
Упрощает написание кода, его реализацию и исправление.*/