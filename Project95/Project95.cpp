//id generator. Генератор уникальных идентификаторов с использованием static переменной Начинающим #93 - Видео №109.
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

public:

	static int Count;

	Apple(int weight, string color)
	{
		this->color = color;
		this->weight = weight;
		Count++;
		id = Count;
	}

	int GetId()
	{
		return id;
	}

private:
	int weight;
	string color;
	int id;
};

int Apple::Count = 0;

int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red");
	Apple apple2(100, "Green");
	Apple apple3(200, "Yellow");

	cout << apple.GetId() << endl;
	cout << apple2.GetId() << endl;
	cout << apple3.GetId() << endl;

	return 0;
}