/*
Циклы.
Цикл do while.Что это.Что делает.Пример.Синтаксис.Урок #15.
*/

#include<iostream>
using namespace std;

//Цикл do while

void main()
{
	setlocale(LC_ALL, "ru");

	int a = 0;

	do
	{
		cout << "Переменная а = " << a << endl;
		a++;
	} while (a < 10);
	{
		cout << "Переменная а = " << a << endl;
		a++;
	}
}