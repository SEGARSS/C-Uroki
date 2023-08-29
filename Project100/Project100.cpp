//Наследование в ООП пример. Что такое наследование. Для чего нужно наследование классов. ООП. C++ #98 - Видео №114.
#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
	string nameses = " Пупкин ";
public:
	string name;
	string GetNameses()
	{
		return nameses;
	}

	void SetNameses(string nameses)
	{
		this->nameses = nameses;
	}
};

class Student : public Human 
{
public:
	string group;
	void Learn()
	{
		cout << " Я учусь! " << endl;
	}
};

class Zaoch : public Student
{
public:
	void Learn()
	{
		cout << " Я учусь заочно! " << endl;
	}
};

class Professor : public Human
{
public:
	string subject;
};

int main()
{
	setlocale(LC_ALL, "Ru");
	cout << "===Студент===" << endl;
	Student st;
	st.name = " Сергей ";
	st.Learn();
	cout << st.name << endl;
	cout << "===ПРофессор===" << endl;
	Professor ps;
	ps.name = " Андрей ";
	cout << ps.name << endl;
	cout << "===Студент Заочник===" << endl;
	Zaoch zao;
	zao.Learn();
	cout << "=============== Реализация наследования через прайвет поля" << endl;

	st.GetNameses();
	st.SetNameses(" Айёша ");
	cout << st.GetNameses() << endl;

	return 0;
}

/*Наследование классов. Создав клас Human и внём прописали поле string name; в секции public:, мы можем это унаследовать
остальным классам. И мы это наследуем классу студент вот такой записью - class Student : public Human и аналогичным
образом это делаем и профессору(классу) и заочнику, и таким образом, классы которые унаследовали клас Human, могут
пользоваться полем name.
Чтобы воспользоваться полем nameses в классе Human, данное поле там в секции private, мы создали гэторы и сэторы,
чтобы и приват полями могли пользоваться классы, унаследовавшие класс Human.
Для меня заметка. 
Использовам Get, мы сможем вызвать поле, но не поменять в нём данные.
А чтобы изменить данные к примеру в поле nameses нужно применить Set, и тогда мы можем поменять данные в nameses
при вызове SetNameses.*/