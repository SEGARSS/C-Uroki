//Итераторы stl c++ | prefix vs postfix | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #4 - Видео №160. 

#include<iostream>
#include<list>
#include<vector>
#include<string>
using namespace std;

//-----------------------------------------------------------------------------------------
template <typename T>
void PrintList(const list<T> &lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
}
//-----------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	list<int>::iterator it;

	it++;
	++it;

	int a = 5;

	cout << a++ << endl;

	return 0;
}
/*Данный урок об оптимизации кода и его ускорения. Чаще всего использую ++a нежели чем а++, это ускорит работу кода.*/