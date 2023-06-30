//Возврат нескольких значений функции через ссылки. Как вернуть несколько значений функции. Урок #52

#include<iostream>
using namespace std;

void foo(int& a, int& b, int& c)
{
	a = 20;
	b *= 2;
	c -= 100;
}

void main()
{
	setlocale(LC_ALL, "ru");
	int a = 0, b = 4, c = 34;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "foo" << "===========" << endl;

	foo(a, b, c);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

}
