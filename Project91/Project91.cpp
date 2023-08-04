//Определение методов вне класса. Вынести функцию в из класса. Вынести описание метода вне класса. #89 - Видео №104.

#include<iostream>
#include<string>
using namespace std;

class MyClass
{
public:
	MyClass();
	~MyClass();

	void PrintMessage(); // Метод.
	

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void MyClass::PrintMessage() //Реализация метода, который находиться в классе.
{
	cout << "Hello!" << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a;
	a.PrintMessage();

	return 0;
}

/*Реализовать метод можно как в нутри класса, а можно просто указать в классе что есть такой метод а реализацию самого метода
прописать с наружи класса. 
Это можно использовать для удобства, если сам клас уже сложный, много строчный и для остальных удобных реализаций.*/