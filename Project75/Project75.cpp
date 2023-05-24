//Что такое класс. Что такое объект класса. Экземпляр класса это. Класс ООП это. 
//Урок #73 - №86

#include<iostream>
#include<string>
using namespace std;

class Human
{
public: // Модификатор доступа.
	int age;
	int weight;
	string dost;
	string name;
};

class Point
{
public:

	int x;
	int y;
	int z;
};



int main()
{
	Human firstHuman;
	firstHuman.age = 30;
	firstHuman.name = "Ryabkov Sergey Olegovich";
	firstHuman.weight = 100;
	cout << firstHuman.age << endl;
	cout << firstHuman.name << endl;
	cout << firstHuman.weight << endl<< endl;

	cout << "========================== " << endl << endl;

	Human secondHuman;
	secondHuman.age = 34;
	secondHuman.name = "Ryabkov Sergey Olegovich";
	secondHuman.dost = "Stal PROGRAMISTOM";
	cout << secondHuman.age << endl << secondHuman.name << endl << secondHuman.dost << endl << endl;

	cout << "========================== " << endl << endl;

	Point a;
	a.x = 1;
	a.y = 4;
	a.z = 3;

	cout << a.x << endl;
	cout << a.y << endl;
	cout << a.z << endl;

	return 0;
}
/*Итак, представим что это class Human наша кофимолка, и внутри неё и есть те процессы, свойства которые нас 
не интересуют, но мы знаем что это работает и мы это используем, а тоесть пишем Human firstHuman; а далее firstHuman.
где после точки мы можем выбрать, хоть имя, хоть возраст и так далее. Как в кофе машины, в тело уже заложенно её
свойства, а мы уже только засываем зёрна, нажимаем кнопку и получаем кофе, а тут данные.
На примере класса class Point, как можно по оси трёхмерного пространства находить точку x,y,z. 
Это пригодиться при разработке игр.*/
/*В сравнении массива. Лучше рабоать с классами, и удобней чем с массивом. Пример, при написании и создании
class Human а потом в его теле указать все интересующие нас параметры, к примеру имя, возрас, курс и так далее, то
потом, прописывая Human firstHuman а далее firstHuman. то после точки, мы понимаем что нам нужно, имя или возрас
или ещё чтото. А в случаи еслиб это был масив, двухмерный к примеру, то пришлось бы орентироваться по индексу,
например firstHuman[1][2] - и мы должны были бы помнить или смотреть, а что конкретно в этой ячеки масива у нас
храниться, это не удобно.*/