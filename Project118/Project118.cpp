//Работа с файлами с++. Чтение из файла с++ ifstream. Изучение С++ для начинающих. Урок #116 - Видео 134.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	string path = "myFile.txt"; 

	ofstream fout; 

	fout.open(path, ofstream::app); 

	/*if ( !fout.is_open() ) // Метод записи данных в файл
	{
		cout << "Ошибка открытия файла! " << endl;
	}
	else
	{
		for (int i = 0; i < 3; i++) 
		{
			cout << "Введите число!" << endl;
			string pis;
			cin >> pis;
			fout << "\n" << pis; 
		}
	}*/

	fout.close();

	ifstream fin; // Команда считывания файла 
	fin.open(path); // Вывод на консоль

	if ( !fin.is_open() ) // Вывод на консоль
	{
		cout << "Ошибка открытия файла! " << endl;
	}
	else
	{
		cout << "Файл открыт! " << endl;

		/*char ch;
		while ( fin.get(ch) ) // Метод считывания файла по симольно
		{
			cout << ch;
		}*/

		string str;
		while ( !fin.eof() ) // Метод считывание файла по строчно
		{
			str = " ";
			getline(fin, str);
			cout << str << endl;
		}
	}
	fin.close();

	return 0;
}
/*В данном примере, по мимо того как записываем данные в файл, но и теперь их считываем из файла.
Можем считывать по символьно - while ( fin.get(ch) ) а можем по строчно while ( !fin.eof() )*/