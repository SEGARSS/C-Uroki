//Указатели символьные строки и функции. Строки и указатели в c++. C ++ Для начинающих.
//Урок #63 - Видео №75.

#include<iostream>
using namespace std;

void foo(const char *str)
{
	cout << strlen(str) << endl;
}

void main()
{
	setlocale(LC_ALL, "RU");
	//Пример строчного написания массива.
	const char *strArr[] = {"Hello","World","PRINT"};
	for (int i = 0; i < 3; i++)
	{
		cout << strArr[i] << endl;
	}
	cout << "=====================" << endl;
	//Пример также строчного масива, написания его через указатель (*).
	const char *str = "Hello""World""PRINT";
	for (int i = 0; i < 15; i++)
	{
		cout << str[i] << endl;
	}
	cout << "=====================" << endl;
	foo(str); //Данная функция, с помощью strlen подсчитывает количество хранящихся символов.
}

