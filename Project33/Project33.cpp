//ƒвумерные массивы вывод. «аполнение. ƒвумерный массив циклы. C++ дл€ начинающих. #32

#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	// –азмер массива.
	const int ROWS = 5; // ROWS - значит строки стандартно, везде и всегда.
	const int COLS = 8; // COLS - значит колонки, стандартно, везде и всегда.

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) // ÷икл заполнени€ 2х мерного массива случайными числами. 
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++) // ÷икл дл€ печати
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " "; // »скуственный пробел, что при выводе в терминал было красиво.
		}
		cout << endl;//ѕереход на новую строку, что при выводе в терминал, была окуратна€ матрица.
	}
	


}