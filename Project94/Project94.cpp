//static что это. Статические поля класса. Инициализация. Ключевое слово static. C++ #92 - Видео №108.
#include<iostream>
#include<string>
using namespace std;

class Apple;
class Human;

class Human
{
public:
	void TekeApple(Apple& apple);

	void EatApple(Apple& apple)
	{

	}
};

class Apple
{
	
public:

	static int Count;

	Apple(int weight, string color)
	{
		this->color = color;
		this->weight = weight;
		Count++;
	}
private:
	int weight;
	string color;

};

int Apple::Count = 0;

int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red");
	Apple apple2(100, "Green");
	Apple apple3(200, "Yellow");

	cout << "===================" << endl;
	cout << apple.Count << endl;
	cout << apple2.Count << endl;
	cout << apple3.Count << endl;
	cout << "===================" << endl;
	cout << "Аналогичный метод вывода" << endl;
	cout << Apple::Count << endl;

	return 0;
}
/*static эта переменная, которая объявляеться в классе, и будет действовать для всех методов равнозначна,
одинаково, и будут у всех одни те же данные выводиться переменной static.
Тобижь, какойбы мы метод не использовались, и к примеру сразу два метода вызвали, переменная статик для
них будет одинакова, и данные для каждлго метода она будет выводить одни и теже.
Но инициализация переменной стати происходит в не класса, так устроенн ситекс языка с++ по данной переменной static.
Если проще, к примеру, мы будет разбирать яблоки. Что в каждом яблоке будет одно и тоже? сорт к примеру.
И чтобы постоянно не указывать сорт яблока, мы тут можем использовать переменную static.
Или по другому, static используеться для индификатора id. */