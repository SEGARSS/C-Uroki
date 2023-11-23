//Шаблоны классов с++ примеры. Обобщенные классы. Изучение С++ для начинающих. Урок #126 - Видео № 145.

//-------------------------------------------------------------------------------------------
#include<iostream>
#include<string>
using namespace std;
//-------------------------------------------------------------------------------------------
class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	int x; 
	int y;
	double z;
private:
};
//-------------------------------------------------------------------------------------------
template<typename T1, typename T2>
class MyClass
{
public:
	MyClass(T1 value, T2 value2)
	{
		this->value = value;
		this->value2 = value2;
	}

	void DataTypeSize()
	{
		cout << "value - " << sizeof(value) << endl;
		cout << "value2 - " << sizeof(value2) << endl;
	}
private:
	T1 value;
	T2 value2;
};
//-------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	int a = 5;
	int g = 6;
	double b = 5.3698;
	double l = 8.1498;
	int q = 9;

	Point y;
	Point p;
	Point w;


	// Делаем вывод данных, где покажет сколько весит тип данных в байтах.

	MyClass<int, int> c(a,g); //Целое значение
	c.DataTypeSize();

	MyClass<double, double> z(b,l);//Дробное значение
	z.DataTypeSize(); 
	 
	MyClass<Point, Point> k(y,p);//Клас со всеми своими значениями(Сколько целиком весь класс занимает объём памяти)
	k.DataTypeSize();

	MyClass<int, Point> h(q,w);//Можно указывать обсолютно разные типы данных, только их нужно объявить.
	h.DataTypeSize();

	return 0;
}
//-------------------------------------------------------------------------------------------
/*Шаблон реализации использовании класса.
Чтобы осуществить данную реализация, сверху класса необходимо прописывать template и в итогде template<typename T1, typename T2>
Но можно и вот так template<class T1, class T2>, разницы по функционалу обсолютно никакой, а также можно и третий Т3 добавить,
если это надо и не противоречит логике программы и её потребностям.*/