//Итераторы STL | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #2 - Видео №159.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	vector<int> myVector = {8, 9, 44, 422, 676, 78};

	vector<int>::iterator it;

	it = myVector.begin(); // Показывает 1 элемент.
	cout << "Смотрим первы элемент итеротара" << endl;
	cout << *it << endl;

	it++; // Здвигаем и перемещаемся по итератору и смотрим уже второй элемент
	cout << "Смотрим второй элемент итеротара" << endl;
	cout << *it << endl;

	/*Принцип действия таков, что мы не запрос делаем такой запись на 4й элемент - it+=4; - мы сдвигаемся на 4 элемента в итераторе,
	чтобы посмотреть данне. До этого вот этой записью it = myVector.begin(); видим 1й элемент, затем здвигаемся на один элемент - it++;
	а потом двигаем интератор на 4ре элемента - it+=4; и в итоге получаем данные шестого элемента в интераторе.*/
	it+=4; // Сдвигаемся на 4 элемента и получаем данные
	cout << "Смотрим шестой элемент итеротара" << endl;
	cout << *it << endl;

	/*Мы можем сдвигать как в перёд по элементам так и назад*/
	it--; // Сдвигаемся на 1 элемента назад
	cout << "Смотрим пятый элемент итеротара" << endl;
	cout << *it << endl;

	cout << "--------------------------------" << endl;
	cout << "Посмотрим все элементы итератора с помощью цикла for" << endl;
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}

	cout << "--------------------------------" << endl;
	cout << "Если мы не хотим, чтобы случайным или специальным образом менялись данные в итераторе, то мы применяем константу" << endl;
	/*Вместо iterator прописали const_iterator, но при этом стоит отметить, что надо тогда менять и выводы этих элементов интератора,
	тоесть написать вместо myVector.begin() - myVector.сbegin(), и тоже самое myVector.end() - myVector.сend().
	Если оставить записи myVector.begin() и myVector.end() мы всёровно увидем константные данные, но чтобы не путоться и понимать сразу,
	какие там данные, лучше прописать сразу.*/
	for (vector<int>::const_iterator i = myVector.cbegin(); i != myVector.cend(); i++)
	{
		cout << *i << endl;
	}

	cout << "--------------------------------" << endl;
	cout << "Посмотрим элементы с конца инкримента" << endl;
	/*И опять стоит подчеркнуть, прописали reverse_iterator, значит и myVector.rbegin() - myVector.rend(), везде добавили r ,буковку*/
	for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++)
	{
		cout << *i << endl;
	}

	cout << "--------------------------------" << endl;
	cout << "Двигаем элементы с помощью advance" << endl;
	vector<int> myVector1 = {8, 9, 44, 422, 676, 78};
	vector<int>::iterator it1 = myVector1.begin();
	advance(it1, 3);//Где it1 какой итератор, а вторым числом какой элемент.
	cout << *it1 << endl;

	cout << "--------------------------------" << endl;
	cout << "Меням элементы с помощью insert" << endl;
	vector<int> myVector3 = {8, 9, 44, 422, 676, 78};
	vector<int>::iterator i3 = myVector3.begin();

	cout << endl;
	cout << " было " << endl;
	cout << endl;
	
	for (vector<int>::iterator i3 = myVector3.begin(); i3 != myVector3.end(); i3++)
	{
		cout << *i3 << endl;
	}

	/*insert добавляет элемент туда куда нам нужна и какой нам нужно. В данном случаи begin как первый элемент и мы указали поместить
	999 в первый элемент. Еслиб после begin было бы it3++, то 999 стало бы на второй элемент.
	Также с помощью advance мы можем точно указать с помощью insert куда нам положить элемент, еслиб к примеру advance(it1, 5), то 999
	былабы после 676.*/
	cout << endl;
	cout << " insert " << endl;
	cout << endl;
	vector<int>::iterator it3 = myVector3.begin();
	myVector3.insert(it3, 999);
	cout << " стало " << endl;
	cout << endl;

	for (vector<int>::iterator it3  = myVector3.begin(); it3 != myVector3.end(); it3++)
	{
		cout << *it3 << endl;
	}

	cout << endl;
	cout << " вызываем erase " << endl;
	cout << endl;
	cout << " стало " << endl;
	vector<int>::iterator it4 = myVector3.begin();
	myVector3.erase(it4);//Удали самый первый элемент, тоесть 999. Или любой другой какой бы там не был.
	/*По сути вся таже логика как и с insert. Мы также можем удалять и с помощь it4++ и advance, указав всё что нужно.
	Также он работает по принципу удалить не один элемент а диапазон - myVector3.erase(it4,it4+3) - такой записью удалили бы
	все элемент от нуля по 3.*/

	for (vector<int>::iterator it3  = myVector3.begin(); it3 != myVector3.end(); it3++)
	{
		cout << *it3 << endl;
	}

	return 0;
}