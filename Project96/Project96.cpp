//Статические методы класса зачем нужны. Модификатор static. Как влияет. ООП. Для начинающих. Урок #94 - Видео 110.
#include<iostream>
#include<string>
using namespace std;

class Apple
{

public:

	

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

	static int GetCount()
	{
		return Count;
	}

	static void ChangeColor(Apple& apple, string color)
	{
		apple.color = color;
	}

private:
	int weight;
	string color;
	int id;
	static int Count;
};

int Apple::Count = 0;

int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red");

	apple.ChangeColor(apple, "Green");
	cout << "! ↨ Павнозначные записи друг другу ↨ !" << endl;
	Apple::ChangeColor(apple, "Green");

	Apple apple2(100, "Green");
	Apple apple3(200, "Yellow");

	cout << "======================================================" << endl;
	cout << apple.GetId() << endl;
	cout << apple2.GetId() << endl;
	cout << apple3.GetId() << endl;

	cout << "======================================================" << endl;
	cout << apple3.GetCount() << endl;
	cout << "! ↨ Павнозначные записи друг другу ↨ !" << endl;
	cout << Apple::GetCount() << endl;

	return 0;
}