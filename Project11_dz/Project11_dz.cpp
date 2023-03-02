//Написать программу калькулятор с помощью switch.

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int che1, che2, selection;
	cout << "Введите два числа: " << endl;
	cout << "Введите первое число - ";
	cin >> che1;
	cout << "Введите второе число - ";
	cin >> che2;
	cout << "Выбирите операцию с числами" << endl <<
		"1. Сложение" << endl <<
		"2. Вычитание" << endl <<
		"3. Умножение" << endl <<
		"4. Деление" << endl;
	cin >> selection;


	switch (selection)
	{
	case 1:
		cout << "При сложении сумма чисел = " << che1 + che2;
		break;
	case 2:
		cout << "При вычитании сумма чисел = " << che1 - che2;
		break;
	case 3:
		cout << "При умножении сумма чисел = " << che1 * che2;
		break;
	case 4:
		cout << "При делении сумма чисел = " << (double)che1 / che2;
		/* Если хотим вывод - результат вывести в другой форме,
		к примеру не в цело а в дробнойб в данной строке выше пример.
		Если мы изначально поробуем объявить double вместо int, то всё перестанет рабоать. */
		break;
	default:
		cout << "Пункт под таким номером отсутствует!";
		break;
	}
}