//Двумерные массивы вывод. Заполнение. Двумерный массив циклы. C++ для начинающих. #32 - Видео №42. 

#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	// Размер массива.
	const int ROWS = 5; // ROWS - значит строки стандартно, везде и всегда.
	const int COLS = 8; // COLS - значит колонки, стандартно, везде и всегда.

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) // Цикл заполнения 2х мерного массива случайными числами. 
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++) // Цикл для печати, вывода в терминал
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " "; // Искуственный пробел, что при выводе в терминал было красиво.
		}
		cout << endl;//Переход на новую строку, что при выводе в терминал, была окуратная матрица.
	}
	


}
