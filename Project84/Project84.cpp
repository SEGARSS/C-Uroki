//Конструктор копирования. Что это. Пример. Когда вызывается Копирование объектов по умолчанию C++ #82 - Видео 95.

#include<iostream>
#include<string>
using namespace std;

class MyClass
{
	
public:

	int* data;

	MyClass(int size)
	{
		this->size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << " Вызвался конструктор" << this << endl;
	}

	MyClass(const MyClass &other)
	{
		this->size = other.size;

		this->data = new int[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << " Вызвался конструктор копирования" << this << endl;
	}

	~MyClass()
	{
		cout << " Вызвался деструктор" << this << endl;
		delete[] data;
	}

private:
	int size;
};

void foo(MyClass value)
{
	cout << "Вызвалась наша функция foo" << endl;
}

MyClass foo2()
{
	cout << "Вызвалась наша функция foo2" << endl;
	MyClass temp(2);
	return temp;
	
}

int main()
{
	setlocale(LC_ALL, "ru");

	//foo2();

	MyClass a(10);

	MyClass b(a);

	//foo(a);


	return 0;
}
/*Данный урок, создание и реализация конструктора копирования, надо будет не раз пересмотреть. И проанализировать.*/