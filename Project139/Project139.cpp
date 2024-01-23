//LIST | STL C++ | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #3 - Видео №158.

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
	setlocale(LC_ALL,"Ru");

	cout << "Изначально было" << endl;
	list<int> myList = {506, 64, 979};

	PrintList(myList);

	myList.push_front(151); // Ставит элемент в начале списка
	myList.push_back(5); // Ставит элемент в конец списка
	
	cout << "Вызываем метод myList.size(), показывает количество элементов в списке - " << myList.size() << endl;
	cout << "Вызываем метод push_front и push_back" << endl;
	cout << "Вывод данных с помощью цикла for" << endl;

	for (auto i = myList.begin(); i != myList.end(); i++) // Один из способов вывода списка на экран.
	{
		cout << *i << endl;
	}

	cout << "--------------------" << endl;
	cout << "Вызываем метод push_front и push_back" << endl;
	cout << "Вывод данных с помощью метода PrintList" << endl;

	PrintList(myList); // Вывод данных с помощью функции.

	cout << "--------------------" << endl;
	cout << "Изначально было" << endl;

	list<int> myList2 = {506, 64, 979, 3, 54};

	PrintList(myList2);

	cout << "Вызывае метода sort" << endl;

	myList2.sort(); // Метод сортировки, выводит данные по порядку от минимального значения к максимальному.

	PrintList(myList2);

	cout << "--------------------" << endl;
	cout << "Изначально было" << endl;

	list<int> myList3 = {506, 64, 979};
	PrintList(myList3);

	cout << "Вызывае метод pop_front и pop_back" << endl;

	myList3.pop_front(); // Удаляет последний элемент из списка.
	myList3.pop_back(); // Удаляет самый первый элемент из списка.

	PrintList(myList3);

	cout << "--------------------" << endl;
	cout << "Изначально было" << endl;
	
	list<int> myList4 = {99, 506, 64, 99, 979, 99, 99, 99};
	PrintList(myList4);

	cout << "Вызывае метода unique" << endl;

	myList4.unique(); //Удаляет последовательные дубликаты в коде

	PrintList(myList4);

	cout << "--------------------" << endl;
	cout << "Изначально было" << endl;
	
	list<int> myList5 = {15, 506, 64, 99, 979, 99};
	PrintList(myList5);

	cout << "Вызывае метода reverse" << endl;

	myList5.reverse(); // Сортирует данные в обратном порядке (сконца)
	PrintList(myList5);

	cout << "--------------------" << endl;
	cout << "Изначально было" << endl;
	
	list<int> myList6 = {33, 58, 55, 44, 33, 22};
	PrintList(myList6);
	cout << "Вызываем метод myList.size(), показывает количество элементов в списке - " << myList6.size() << endl;

	cout << "Вызывае метода clear" << endl;

	myList6.clear(); // Очищает список от всех элементов
	cout << "Вызываем метод myList.size(), показывает количество элементов в списке - " << myList6.size() << endl;
	PrintList(myList6);

	cout << "--------------------" << endl;
	cout << "Изначально было" << endl;

	list<int> myList7 = {36, 46, 56, 76};
	PrintList(myList7);

	cout << "Вызывае метода insert" << endl;

	auto it = myList7.begin();

	myList7.insert(it, 111);// Ставит первым элементом данные (где it(0) номер элемента)

	PrintList(myList7);

	cout << "Вызывае метода advance" << endl;

	advance(it,3); // В какой элемент положить данные.
	myList7.insert(it, 111);

	PrintList(myList7);

	cout << "--------------------" << endl;
	cout << "Изначально было" << endl;

	list<int> myList8 = {11,36, 46, 56, 76};

	PrintList(myList8);

	cout << "Вызывае метода remove" << endl;

	myList8.remove(76);// Удаляемпоследний элемент который указали. (суть в том, что если мы укажем число которого нет, то ничего и не произойдёт)

	PrintList(myList8);

	cout << "--------------------" << endl;
	cout << "Изначально было" << endl;

	list<int> myList9 = {11,36, 46, 56, 76};

	PrintList(myList9);

	cout << "Вызывае метода assign" << endl;

	myList9.assign(3,1336544);//Удаляет прошлый список, создаёт новый. (где 3 - кол. элементов, далее какими данными заполниться)

	PrintList(myList9);

	cout << "--------------------" << endl;
	cout << "Изначально было" << endl;

	list<int> myList10 = {11,36, 46, 56, 76};
	list<int> myList11 = {11, 11, 11, 11};

	PrintList(myList10);

	cout << "Вызывае метода копируем данные листа myList11 в лист myList10, с помощью метода assign" << endl;

	myList10.assign(myList11.begin(), myList11.end() );//Процес копирования

	PrintList(myList10);

	return 0;
}
//-----------------------------------------------------------------------------------------
