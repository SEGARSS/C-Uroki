//Наследование шаблонных классов. Изучение С++ для начинающих. Урок #127 - Видео № 147.

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
	double x; 
	double y;
	double z;
private:
};
//-------------------------------------------------------------------------------------------
template<class T1>
class TypeSize
{
public:
	TypeSize(T1 value)
	{
		this->value = value;
	}

	void DataTypeSize()
	{
		cout << "value - " << sizeof(value) << endl;
	}
protected:
	T1 value;
};
//-------------------------------------------------------------------------------------------
template<class T1>
class TypeInfo : public TypeSize<T1>
{
public:
	TypeInfo(T1 value):TypeSize<T1>(value) 
	{

	}

	void ShowTypeName()
	{
		cout << "Название типа: " << typeid(this->value).name() << endl;
	}
};
//-------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	int a = 2;
	Point b;

	TypeInfo<int> c(a);
	TypeInfo<Point> v(b);

	c.ShowTypeName();
	c.DataTypeSize();

	cout << endl;

	v.ShowTypeName();
	v.DataTypeSize();


	return 0;
}
//-------------------------------------------------------------------------------------------
/*Особенности наследования шаблонов класса, его ситексис и его метод работы. - В будущем понимать где конкретоно
его применять и для чего.*/