//Массив объектов класса. Динамический. Статический. Создание Особенности. ООП C++ Для начинающих #96 - Видео №112.
#include<iostream>
#include<string>
using namespace std;

class Pixel
{
public:
	Pixel()
	{
		r = g = b = 0;
	}

	Pixel(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	}

	string GetInfo()
	{
		return "Pixel: r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
	}

private:
	int r, g, b;
};

class Image
{
public:

	void GetImageInfo()
	{
		for (int i = 0; i < LENGTH; i++)
		{
			cout << "#" << i << " " << pixels[i].GetInfo() << endl;
		}
	}

private:
	static const int LENGTH = 5;

	Pixel pixels[LENGTH]
	{
		Pixel(0,4,64),
		Pixel(4,14,10),
		Pixel(111,4,24),
		Pixel(244,244,14),
		Pixel(111,179,64)
	};
};

int main()
{
	setlocale(LC_ALL, "Ru");

	cout << "Статический Массив" << endl;
	const int LENGTH = 5;

	Pixel arr1[LENGTH]
	{
		Pixel(0,4,64),
		Pixel(4,14,10),
		Pixel(111,4,24),
		Pixel(244,244,14),
		Pixel(111,179,64)
	};
	cout << arr1[0].GetInfo() << endl;
	cout << arr1[1].GetInfo() << endl;
	cout << arr1[2].GetInfo() << endl;
	cout << arr1[3].GetInfo() << endl;
	cout << arr1[4].GetInfo() << endl;
	cout << "======================================================" << endl;
	cout << "Динамический Массив" << endl;

	int LENG = 5;

	Pixel* arr2 = new Pixel[LENG];
	arr2[0] = Pixel(25, 646, 46);
	cout << arr2[0].GetInfo() << endl;

	delete[]arr2;

	return 0;
}
/*Работа с масивами с помощью классов.*/