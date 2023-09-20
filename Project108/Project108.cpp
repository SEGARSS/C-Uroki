//Чисто виртуальный деструктор c++. Наследование. Полиморфизм. virtual. override. Для начинающих #106 - Видео 123.

#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	A()
	{
		
	}
	virtual ~A()
	{
		
	}
};

A::~A() {};

class B: public A
{
public:
	B()
	{
		
	}
	~B() override
	{
		
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	A *bptr = new B;
	delete bptr;

	return 0;
}
/*Чтобы диструктор стал полность виртуальным, мы добавляем запись A::~A() {}; 
Мы больше не имеем возможность пользоваться классам (А), так как мы его полность сделали виртуальным.*/