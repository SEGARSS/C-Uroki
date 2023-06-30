//Изменить размер массива. Удалить. Добавить элемент в массив. Увеличение массива. с++ Урок #59

#include<iostream>
#include<string>
#include<ctime>
using namespace std;

void FillArray(int* const arr, const int size) // Заполняет массив данными.
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size) // выводит данные в терминал массива.
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
} 

void push_back(int*& arr, int& size, const int value) // Добавляет элемент массива. ( в конец)
{
	int* newArray = new int[size+1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[size] = value;
	size++;
	delete[] arr;
	arr = newArray;
} 

void pop_vack(int*& arr, int& size) // Удалем элемент в массиве. (в конце)
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	delete[] arr;
	arr = newArray;
}

void push_back_nach(int*& arr, int& size, const int value) // Добавляет элемент массива. (в начало)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i + 1] = arr[i];
	}
	newArray[0] = value;
	++size;
	delete[] arr;
	arr = newArray;
}

void pop_vack_nach(int*& arr, int& size) // Удалем элемент в массиве. (в начале)
{
	
	int* newArray = new int[size-1];
	for (int i = 1; i < size; i++)
	{
		newArray[i-1] = arr[i];
	}
	size--;
	delete[] arr;
	arr = newArray;
}


void main()
{
	setlocale(LC_ALL, "ru");
	int size = 5;
	int *arr = new int[size];
	FillArray(arr, size);
	ShowArray(arr, size);
	push_back(arr, size, 111);
	ShowArray(arr, size);
	pop_vack(arr, size);
	ShowArray(arr, size);
	push_back_nach(arr,size,111);
	ShowArray(arr, size);
	pop_vack_nach(arr, size);
	ShowArray(arr, size);
	delete[] arr;

}

/*Доделай.  Чтобы удалить элемент по середине и добавить.*/
