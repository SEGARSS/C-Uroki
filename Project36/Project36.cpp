//Передача массива в функцию. Как передать массив в функцию. C++ для начинающих. Урок #35.

#include<iostream>
using namespace std;

/*Для справки, уточнение. void ничиго не возвращает. Но, к массивам это не относиться.
Тоесть, именно при работе с массивом, void вернёт, покажет значения.*/

void FillArray(int arr[], const int SIZE)//FillArray - Заполняет массив.
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
 	}
}

void PrintArray(int arr[], const int SIZE) //PrintArray - выводит на печать ( в терминал заполненный массив)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}

void main()
{
	setlocale(LC_ALL, "Ru");

	const int SIZE = 10; //SIZE - Размер.
	int arr[SIZE];
	//Тким образом, мы с помощью созданных фукций, сразу заполнели масив и вывели его в терминал.
	FillArray(arr, SIZE); // Заполнил масив.
	PrintArray(arr, SIZE);/* Вывел данные заполненого массива в терминал, так как в теле функции
	есть строчка кода - cout << arr[i] << endl;*/
}