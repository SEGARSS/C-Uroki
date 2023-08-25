//Вложенные классы с++ пример. Внутренние классы. Зачем нужны. inner class. ООП. Для начинающих #95 - Видео №111.
#include<iostream>
#include<string>
using namespace std;

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


	class Pixel
	{
	public:
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
	setlocale(LC_ALL, "RU");

	Image img;
	img.GetImageInfo();

	Image::Pixel pixel(35, 15, 25);
	cout << pixel.GetInfo() << endl;

	return 0;
}
/*Пример того что клас в классе, и не нарушаеться инкапсуляция при такой записи.*/