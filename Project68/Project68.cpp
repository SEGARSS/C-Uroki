//Указатель на функцию в качестве параметра. Передача функции в качестве параметра. С++ 
//Урок #65 - Видео №78

#include<iostream>
#include<string>
using namespace std;

int foo1(int a)
{
	return a - 1;
}
int foo2(int a)
{
	return a * 2;
}

//Функции ниже созданы для реализации примера необходимости приминения указателя.

string GetDataFromBD()
{
	return "Data From BD";
}

string GetDataFromWebServer()
{
	return "Data From WebServer";
}

string GetDataAstral()
{
	return "Data Astral";
}

void ShowInfo(string(*foo)())
{
	cout << foo() << endl;
}

void main()
{
	setlocale(LC_ALL, "ru");

	ShowInfo(GetDataAstral);

	int(*fooPoint)(int a);
	fooPoint = foo2;
	cout << fooPoint(5)  << endl;
}

/*Примеру записи, если мы не указываем даннеые для функции, одним словом, оставляем скобки () - пустыми
	void(*fooPoint)();


	fooPoint = foo1;
	fooPoint();
	cout << "=========" << endl << endl;
Если же уже хотим с данными и с обработкой данных то другой пример - 
	int(*fooPoint)(int a);
	fooPoint = foo2;
	cout << fooPoint(5)  << endl;
при условии, что и в функциях мы добавили int - int foo1(int a).

Почему лучше рабоать с указателями?
К примеру создали мы 2 функции
string GetDataFromBD
string GetDataFromWebServer
Без указателей, мы будем прописывать в функции ShowInfo алгоритм работы, который будет их вызывать,
к примеру через if и else - где либо string GetDataFromBD а если нет то string GetDataFromWebServer,
с двумя функциями это сработает, а если будет третья функция? Опять создавать? можно, но зачем?
Вот у нас 3 функции 
string GetDataFromBD()
string GetDataFromWebServer()
string GetDataAstral()
создаём то что их будет принимать 
void ShowInfo(string(*foo)())
{
	cout << foo() << endl;
}
Такой записью, не важно сколько будет созданно функци, функция void ShowInfo(string(*foo)()) примет
их все, благодаря всего лиш указателю.*/