//forward list stl c++ | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #5 - Видео №162. 

#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	forward_list<int> fl = {131, 94, 494};

	//Добавляем данные в начало метода.
	fl.push_front(1);
	fl.push_front(4);

	forward_list<int>::iterator it = fl.begin();

	it++;

	cout << *it << endl;

	for (auto el : fl)
	{
		cout << el << endl;
	}

	return 0;
}