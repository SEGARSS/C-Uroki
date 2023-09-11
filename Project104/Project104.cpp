//Вызов конструктора базового класса из конструктора класса-наследника. Наследование. ООП C++ #102 - Видео №118.
#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	A()
	{
		msg = "Пустое сообщение";
	}

	A(string msg)
	{
		this->msg = msg;
	}

	A(string msg, int a)
	{
		this->msg = msg;
	}

	void PrintMsg()
	{
		cout << msg << endl;
	}

private:
	string msg;
};

class B : public A
{
public:
	B():A("Наше новое сообщение")
	{
		
	}
};

int main()
{
	setlocale(LC_ALL,"ru");

	B b;
	b.PrintMsg();

	return 0;
}
/*Вот такой запись B():A() можно вызвать конструктор по умолчанию. Или, если хотим другой, а у нас их там 4, один из
которых по умолчанию, то мы в скобках A() пишем ту условие, которые были созданы в конструкторе.*/