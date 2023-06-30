//Арифметика указателей. Указатели и массивы. Массив это указатель. C++ для начинающих. Урок #47

#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	/*Примеры вывода данных с помощью указателей. Хотя по сути, сам массив и есть указатель.*/
	const int SIZE = 5;
	int arr[SIZE]{ 4,65,79,1,9 };

	cout << arr << endl << 
		*arr << endl << 
		*(arr + 1) << endl << 
		*(arr + 2) << endl << 
		*(arr + 3) << endl << 
		*(arr + 4) << endl;
	cout << "===============================" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "===============================" << endl;

	int *pArr = arr;

	cout <<"arr\t" << arr << endl;
	cout << "pArr\t" << pArr << endl;
	cout << "===============================" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << pArr[i] << endl;
	}
	cout << "===============================" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << (arr+i) << endl;
	}

	cout << "===============================" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(arr + i) << endl;
	}
}
