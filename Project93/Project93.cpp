//Дружественные классы. ООП. friend class. friend c++ что это. C++ Для начинающих. Урок #91 - Видео №107.
#include<iostream>
#include<string>
//Привет
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

/**/