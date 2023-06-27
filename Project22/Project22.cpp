/* Что такое вложенный цикл. Вложенная конструкция. C++ для начинающих. Урок #24. Видео - 31.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	for (int i = 1; i < 5; i++)
	{
		cout << "Сработал 1й цикл for интеграция № " << i << endl;

		for (int j = 1; j < 5; j++)
		{
			cout << "\tсработал 2й цикл for интеграции № " << j << endl;
		}
	}
}