//Что такое агрегация и композиция. Отношения между классами и объектами. ООП. C++ Для начинающих #97 - Видео №113.
#include<iostream>
#include<string>
using namespace std;

class Cap
{
public:
	string GetColor()
	{
		return color;
	}

private:
	string color = "Red ";
};

class Model
{
public:
	void InspectModel()
	{
		cout << "Кепка " << cap.GetColor() << "цвета" << endl;
	}
private:
	Cap cap;
};

class Human
{

public:
	void Think()
	{
		brain.Think();
	}

	void InspectTheCap()
	{
		cout << "Моя кепка " << cap.GetColor() << "цвета" << endl;
	}

private:

	class Brain
	{

	public:

		void Think()
		{
			cout << "Я думаю! " << endl;
		}
	};
	Brain brain;
	Cap cap;
};

int main()
{
	setlocale(LC_ALL, "Ru");

	Human human;
	human.Think(); 
	human.InspectTheCap();
	
	Model m;
	m.InspectModel();

	return 0;
}

/*Примеры реализации и необходимости привязки одних классов к другим.*/