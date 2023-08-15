//Дружественные классы. ООП. friend class. friend c++ что это. C++ Для начинающих. Урок #91 - Видео №107.
#include<iostream>
#include<string>

using namespace std;

class Apple;
class Human;

class Human
{
public:
	void TekeApple(Apple& apple);

	void EatApple(Apple& apple)
	{

	}
};

class Apple
{
	friend Human;
public:
	Apple(int weight, string color)
	{
		this->color = color;
		this->weight = weight;
	}
private:
	int weight;
	string color;

};

void Human::TekeApple(Apple& apple)
{
	cout << "TekeApple " << "weight = " << apple.weight << " color = " << apple.color << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(100, "Red");

	Human human;

	human.TekeApple(apple);

	return 0;
}

/*Чтобы подружить классы, достаточно внутри класса (к примеру) Apple, прописать в любом месте строчку friend Human;
Таким образом мы подружили эти классы, и не придёться прописывать отдельно дружественные методы этих классов для их
использование.
Но, в крайних случаях только нужно прибегать к таким методам, так как нарушаеться принцип инкапсуляции, и открываеться доступ
к тем данным, у которых не должна быть возможность их изменить.
Так же, стоит отметить, почему удобно обращать к данным по ссылке (&).
При обращении к данным по ссылке, мы их не копируем а сразу используем их, это экономит место и память.*/