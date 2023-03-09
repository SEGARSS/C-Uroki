/*Без этого вы не станете программистом! Найти ошибку в коде. Отладка. Как пользоваться отладчиком #23*/

#include<iostream>
using namespace std;

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}

void main()
{
	setlocale(LC_ALL, "ru");

	int a = 5;

	int b = 6;

	int c;

	c = Sum(a, b);

	cout << c << endl;

}