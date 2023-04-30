//Константные аргументы функции. Константный указатель. Константные параметры. Для начинающих Урок #57
//Копирование динамического массива c++. Скопировать массив с++. С++ Для начинающих. Урок #58
#include<iostream>
#include<string>
#include<ctime>
using namespace std;

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "Ru");

	int size = 10;
	int* firsArray = new int[size];
	int* secondArray = new int[size];

	//Заполняем изначально два созданных динамических масива и выводим на экран.

	FillArray(firsArray, size);
	FillArray(secondArray, size);

	cout << "firsArray = \t";
	ShowArray(firsArray, size);
	cout << "ShowArray = \t";
	ShowArray(secondArray, size);

	//Обезательно очищаем память, для подготовки даннного массива, чтоб залить в него потом скопированные данные.
	delete[] firsArray;

	//Делаем непосредственное копирование второго массива secondArray и ложим его данные в firsArray.
	firsArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		firsArray[i] = secondArray[i];
	}
	cout << "================" << endl;

	//Адреса будут разные у массивов(и это правиль) А данные одинаковые, так как мы именно скопировали их.
	cout << "firsArray = \t";
	ShowArray(firsArray, size);
	cout << "ShowArray = \t";
	ShowArray(secondArray, size);

	
	// Незабываем подчищать памяьб.
	delete[]secondArray;
	delete[]firsArray;

	
}
/*Суть копирования. Перед копированием одного массива в другой, необходимо очисть тот масив, в который мы начнём
копировать данные в другой. Если к примеру мы просто сделаем так - firsArray = secondArray; мы просто получим
один и тотже масив, с одним адресов, и при этом ещё и допустим утечку данных, так как данные с масива firsArray
буду болтаться в оперативной памяти и к ним уже доступ не получим.
Поэтому, после заполнения обоих масиивов, мы удаляем delete[] firsArray; и подготовливаем новый firsArray
чтобы залить (скопировать) туда данные другова массива secondArray.
И после этого подчищаем оба массива.
Если мы посмотрим на результат конечный вывода массивов, мы увидим что адреса на массивы разные в ячейке памяти,
а данные одинаковы, так как скопировали корректно.*/
