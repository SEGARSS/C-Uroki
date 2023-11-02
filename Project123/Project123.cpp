//Не могу написать программу! Что делать! Как начать писать код! - Видео № 139.

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");
	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}

	int value;
	cout << "Введите число для проверки: - ";
	cin >> value;
	bool result = false;

	for (int i = 0; i < SIZE; i++)
	{
		if(value == arr[i])
		{
			result = true;
			break;
		}
	}

	if (result)
	{
		cout << "Число - " << value << " есть в массиве" << endl;
	}
	else
	{
		cout << "Такова числа нет в массиве!" << endl;
	}
	return 0;
}
/*Это практика, как вообще начать писать код, когда поставлена задача.
Любую задачу, хоть маленьку хоть большую, раздробить на мелкие под задачи и начать её реализовывать*/