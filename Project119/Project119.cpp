//Запись ОБЪЕКТА КЛАССА в файл с++. Чтение объекта из файла c++ Для начинающих. Урок #117 - Видео 135.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void Print()
	{
		cout << "X: " << x << "\tY: "<< y << "\tZ: " << z << endl;
	}

	int x;
	int y;
	int z;
};

int main()
{
	setlocale(LC_ALL,"Ru");

	string path = "myFile.txt";

	Point point(53375,7850,96);

	// Записываем данные в файл
	ofstream fout;
	fout.open(path, ofstream::app);

	if ( !fout.is_open() ) 
		cout << "Ошибка открытия файла! " << endl;
	else
	{
		cout << "Файл открыт! " << endl;
		fout.write( (char*)&point, sizeof(Point) );
	}
	fout.close();

	// Считываем данные с файла
	ifstream fin;
	fin.open(path); 

	if ( !fin.is_open() ) 
		cout << "Ошибка открытия файла! " << endl;
	else
	{
		cout << "Файл открыт! " << endl;
		Point pnt;
		while (fin.read( (char*)&pnt, sizeof(Point) ) )
		{
			pnt.Print();
		}
	}
	fin.close();

	return 0;
}

/*Данным методом, записываем инфу в файл из класса. 
Что интересно, после записи, если открыть файл в ручную, мы увидим крякозябры.
Считать данные из файла, и получить коректные данные мы можем только методом ifstream fin;
По сути можно так шифровать файлы, дынные, которые просто так не прочитаеш.*/