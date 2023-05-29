//Что такое геттеры и сеттеры для класса. Методы get и set. Инкапсуляция это. Пример. C++ 
//Урок #76 - Видео №89
#include<iostream>
#include<string>
using namespace std;

class Human
{
public:
	int age;
	int weight;
	string name;
	void main()
	{
		cout << "Имя " << name << "\nВес " << weight << "\nВозраст " << age << endl << endl;
	}
};

class point
{

private:
	int x;
	int y;
public:

	int GetY()
	{
		return y;
	}
	void SetY(int valueY)
	{
		y = valueY*2;
	}

	int GetX()
	{
		return x;
	}
	void SetX(int valueX)
	{
		x = valueX;
	}
	
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Ru");

	point a;
	a.SetY(4);
	a.SetX(5);
	a.Print();
	int result = a.GetX();
	int result2 = a.GetY();
	cout << result2 << endl;
	cout << result << endl;

	return 0;
}
/*Это примера записи Инкапсуляции. Тобижь, мы не можем напрямую в данном случаи работать с переменными Х и У,
так как они у нас прописанны в private:. Но мы можем с ними работать через гетеры и сетеры, где гет - показать,
сет установить или так - Get и Set. При написание, соблюдаем правила обращения, тоесть если хотим обращаться к переменной Х,
то прописываем GetX а при установки прописываем SetX.*/