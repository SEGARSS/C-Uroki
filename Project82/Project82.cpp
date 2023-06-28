/*Деструктор что это. Зачем нужен деструктор класса в ООП. Деструктор с параметрами. Перегрузка. #80 Видео - 93.*/

#include<iostream>
#include<string>
using namespace std;

class Human
{
public:
	int are;
	int witch;
	string name;
};

class CoffeeGrinder
{
private:
	bool CheckVoltage()
	{
		return true;
	}

public:
	void start()
	{
		bool VoltageIsNormal = CheckVoltage();
		if (VoltageIsNormal == true)
		{
			cout << "ViiyyyYYUU" << endl;
		}
		else
		{
			cout << "NEMA TRR! NEMA TRRR!" << endl;
		}
	}
};

class point
{
	int x;
	int y;

public:
	point()
	{
		x = 0;
		y = 0;
	}
	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}
	point(int valueX, bool bal)
	{
		x = valueX;
		if (bal)
		{
			y = 1;
		}
		else
		{
			y = -7;
		}
	}
	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}
};

class MyClass
{
	int* data;

public:
	MyClass(int size)
	{
		data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Объек " << data << " Вызвался конструктор" << endl;
	}

	~MyClass()
	{
		delete[] data;
		cout << "Объек " << data << " Вызвался деструктор" << endl;
	}
};

void foo()
{
	cout << "Foo начал работу" << endl;
	MyClass a(1);
	cout << "Foo конец выполнения" << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	foo();
	cout << endl;

	MyClass a(1);

	MyClass b(2);

	MyClass c(3);

	return 0;
}

/*Замечания. Все данные которые прописываються в классе, ели мы не указали категорию public: ну или private:, то по умолчанию
всегда без указания будет private: - это важно!
Деструктор - не может быть с параметрами и принимать параметры. 
Создаёться он без параметров всегда с пустым значением и не как иначе.
Чтобы создать Деструктор класса, нужно перед названием написать знак тильду(~) - ~MyClass.
Диструктор вызываеться тогда, когда функция выходит за границы работы. Учень удобный метод для чисты памяти после масивов и 
при любых действиях для освобождения памяти.
*/