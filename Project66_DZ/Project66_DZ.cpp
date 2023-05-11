//strlen c++ реализация. Посчитать количество символов в строке c++ 
//ДЗ#11 - Видео №76.

#include<iostream>
using namespace std;

int strLength1(const char *str)
{
	int counter = 0;
	while (str[counter]!='\0')
	{
		counter++;
	}
	return counter;
}

int strLength2(const char* str2)
{
	int counter = 0;
	while (str2[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "========Пример без указателя==========" << endl;
	const char str[] = {'f','w','w','wf','\0'}; //Указываем в конце терминальный 0, иначе посчёт полуим данных другой.
	cout << strLength1(str) << endl;//Причём стоить заметить - 'wf' - это за один символ идёт!
	cout << "========Пример с указателем==========" << endl;
	const char *str2 = "Прива!";//С указателем терминальный 0 не нужен, так как мы его указали в функции strLength2.
	cout << strLength2(str2) << endl;
	cout << "==================" << endl;
}

