//Модификаторы доступа при наследовании. private public protected Спецификаторы доступа. ООП. C++ #99 - Видео №115.
#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	string msgOne = "Сообщение один";
private:

	string msgTwo = "Сообщение два";
protected:
	string msgThree = "Сообщение три";
};

class B : public A
{
public:
	void PrintMsg()
	{
		cout << msgOne << endl;
	}
};

int main()
{
	setlocale(LC_ALL,"ru");

	B b;
	b.PrintMsg();

	return 0;
}
/*Зачастую использвать при наследии модификатор public - class B : public A. Поле protected:, не даёт напрямую пользваться её
функцией, но, даёт пользваться её методом. Своеобразная методика защиты.*/