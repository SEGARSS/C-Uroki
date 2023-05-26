//Методы класса. Что такое методы в программировании. Вызов метода класса. Функции. 
//C++ Урок #74 - Видео №87

#include<iostream>
#include<string>
using namespace std;

class Human
{
public:

	int age;
	int weight;
	string name;

	void Print()
	{
		cout << "Имя " << name << "\nВес " << weight << "\nВозраст " << age << endl << endl;
	}
};

class Point
{
public:

	int x;
	int y;
	int z;

};

int main()
{
	setlocale(LC_ALL, "ru");
	Human firstHuman;
	firstHuman.age = 30;
	firstHuman.name = "Ryabkov Sergey";
	firstHuman.weight = 85;
	firstHuman.Print();


	return 0;
}

/*Тут по сути научили выводить инфу сразу всю в терминал об том объекте которого указали.
Тоесть, указав всё об Human firstHuman; вес, возрас имя, мы до этого чтоб вывести в терминал, в теле прописывали
cout, но приходилось всё прописывать, вес возрас и так далее. И тут мы сделали удобней, мы в самом классе - class Human
в его теле добавили это - cout << "Имя " << name << "\nВес " << weight << "\nВозраст " << age << endl << endl;
и можем теперь спокойно вызывать его в теле цикла, к примеру firstHuman.Print(); и нам выведет данные,
которые мы прописали и указали.*/