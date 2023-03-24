/*
«аполнить массив случайными числами –азмер массива 10 и случайные числа до 20.
» чтобы числа не повтор€лись.
*/

#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	srand(time(NULL));
	int const SIZE = 10; 
	int arr[SIZE];
	bool alreadyThere;

	for (int i = 0; i < SIZE; ) 
	{
		alreadyThere = false;
		int newRanomValue = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRanomValue)
			{
				alreadyThere = true;
				break;
			}
		}
		if (!alreadyThere)
		{
			arr[i] = newRanomValue;
			i++;
		}
	}
	for (int i = 0; i < SIZE; i++) // выводить на терминал данные
	{
		cout << arr[i] << endl;
	}
}
//Ќа выходных, пересмотри! + сделать след домашку.!