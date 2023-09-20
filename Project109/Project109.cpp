﻿//Делегирующие конструкторы c++. Вызов конструктора из конструктора. ООП. С++ Для начинающих. #107 - Видео 124.

#include<iostream>
#include<string>
using namespace std;

class Human
{
public:

	Human(string Name)
	{
		this->Name = Name;
		this->Age = 0;
		this->Weight = 0;
	}

	Human(string Name, int Age) :Human(Name)
	{
		this->Age = Age;
	}

	Human(string Name, int Age, int Weight) :Human(Name,Age)
	{
		this->Weight = Weight;
	}

	string Name;
	int Age;
	int Weight;

private:

};

int main()
{
	setlocale(LC_ALL, "ru");

	Human h("Аристарх");

	return 0;
}
/*В чём приимущество делегирования работы конструктора.
Мы создали конструктор Human, и в других записях подобвляли ему раздачу работы.
Human(string Name, int Age) :Human(Name) - вот сдесь к примеру, 
мы ему дали возможно делигировать задачу имению другому конструтору.
Что самое главное дают такие делигации.
Пишем Human h("Аристарх"); мы просто указали имя, и он его запишет. Потомучто есть конструктор с одинм таким условием :Human(Name)
А еслиб мы бы оставили один кострутор, к примеру с тремя параметрами, то при его абъявление, пришлось бы все 3 параметра указывать,
имя, возраст, вес, а если мы этой информации не знаем и у нас есть только имя которое только и ввести надо? Вот в этом и 
приимущество записи кода выше, где конструктор делегирует свои полномочия, и при его вызове, не нужно все записи в носить в базу,
а только те что захотим ну или которые якобы имеються.*/