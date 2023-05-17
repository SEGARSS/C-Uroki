//Условная компиляция. #ifdef #else #endif #if #elif #endif #ifndef что это. C ++ 
//Урок #68 - Видео №81.
#include<iostream>
#define DEBUG
using namespace std;

void main()
{
	setlocale(LC_ALL, "RU");
/*Вариант записи на примере работы с кодом.*/
#ifdef DEBUG
	cout << "Начало цикла" << endl;
#endif // DEBUG
	for (int i = 0; i < 4; i++)
	{
		cout << i << endl;
	}
#ifdef DEBUG
	cout << "Конец цикла" << endl;
#endif // DEBUG
	cout << "==========" << endl << endl;

/*Вариант записи с добавление #else.*/
#ifdef DEBUG
	cout << "Дэбаг опеределён" << endl;
#else
	cout << "Дэбаг НЕ определён" << endl;
#endif // DEBUG
	cout << "==========" << endl << endl;
	
/*Отличие #ifndef от #ifdef с точность работы на оборот. Просто как вариант другова принципа записи.*/
#ifndef DEBUG
	cout << "cout 1" << endl;
#else
	cout << "cout 2" << endl;
#endif // DEBUG
}

/*Что даёт нам данная процедура работы с #ifdef #else #endif ? это коментирование более тонкого програмирования.
При создание класса (библиотеки) - #define DEBUG, после этого можно работать с #ifdef #else #endif.
Принцип действия такой, если клас #define DEBUG не закоментирован, сработает #ifdef, если закоментирован
//#define DEBUG сработает #else #endif. 
Это может помоч, вслучаи где вам необходимо видеть что происходит, а пользователю нет, но примеров реализации и приминения
много, дальше всё нужно смотреть и приминять на рабочем материале, чтоб осознать значимость данных команд.*/