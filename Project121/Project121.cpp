//Потоковый ввод вывод в файл c++. Перегрузка операторов. Изучение С++ для начинающих. Урок #119 - Видео № 137.

#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
using namespace std;

//-------------------------------------------------------------------------------------------
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

private:
	int x;
	int y;
	int z;

	/*Сделали дуржественные методы, чтобы они имели доступ к приватным полям, но лучше такие метода
	избегать, чтобь не нарушить принцип действия инкапсуляции*/
	friend ostream &operator <<(ostream &os, const Point &point); 
	friend istream &operator >>(istream &is, Point &point);

};
//-------------------------------------------------------------------------------------------
ostream &operator <<(ostream &os, const Point &point) //Метод перегрузки ввода.
{
	os << point.x << " " << point.y << " " << point.z;
	return os;
}
//-------------------------------------------------------------------------------------------
istream &operator >>(istream &is, Point &point) //Метод перегрузки вывода.
{
	is >> point.x >> point.y >> point.z;
	return is;
}
//-------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"Ru");

	//Point point(2,16,116);
	//cout << point;

	string path = "myFile.txt";

	fstream fs;
	fs.open(path,fstream::in | fstream::out | fstream::app);

	if ( !fs.is_open() ) 
		cout << "Ошибка открытия файла! " << endl;
	else
	{
		cout << "Фаил открыт! " << endl;
		//fs << point << "\n";

		while (true)
		{
			Point p;
			fs >> p;

			if ( fs.eof() )
			{
				break;
			}

			cout << p << endl;
		}
	}
	fs.close();

	return 0;
}
//-------------------------------------------------------------------------------------------
/*Новые методы реализации перегрузки операторов ввода вывода (<<, >>) для работы с файлами.*/