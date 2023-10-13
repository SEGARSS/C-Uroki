//Работа с файлами с++. Запись в файл. c++ ofstream. Изучение С++ для начинающих. Урок #115 - Видео 133.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	string path = "myFile.txt"; //Пишем название файла которое будет создано.

	ofstream fout; // Создаём файл(если не укажем путь к файлу а только название, то он будет создан в корне проекта)

	fout.open(path, ofstream::app); // Команда открытия файла (ofstream::app - команда чтоб всё сохранял и не перзатирал данные)

	if ( !fout.is_open() ) //Цикл если файл не запустился
	{
		cout << "Ошибка открытия файла! " << endl;
	}
	else
	{
		for (int i = 0; i < 3; i++) //Счётчик, чтоб несколько раз ввести данные
		{
			cout << "Введите число!" << endl;
			int a;
			cin >> a;
			fout << "\n" << a; // fout заносит(сохраняет) данные в файл.
		}
	}

	fout.close();

	return 0;
}
/*Наглядная работа как рабоать с файлами в языке с++*/