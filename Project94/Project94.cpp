//static что это. —татические пол€ класса. »нициализаци€.  лючевое слово static. C++ #92
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
	cout << "јналогичный метод вывода" << endl;
	cout << Apple::Count << endl;

	return 0;
}
/*static эта переменна€, котора€ объ€вл€етьс€ в классе, и будет действовать дл€ всех методов равнозначна,
одинаково, и будут у всех одни те же данные выводитьс€ переменной static.
“обижь, какойбы мы метод не использовались, и к примеру сразу два метода вызвали, переменна€ статик дл€
них будет одинакова, и данные дл€ каждлго метода она будет выводить одни и теже.
Ќо инициализаци€ переменной стати происходит в не класса, так устроенн ситекс €зыка с++ по данной переменной static.
≈сли проще, к примеру, мы будет разбирать €блоки. „то в каждом €блоке будет одно и тоже? сорт к примеру.
» чтобы посто€нно не указывать сорт €блока, мы тут можем использовать переменную static.
»ли по другому, static используетьс€ дл€ индификатора id. */