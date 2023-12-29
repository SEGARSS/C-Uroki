//vector | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #1 - Видео №156.

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	vector<int> myVector;
	myVector.push_back(2);
	myVector.push_back(74);
	myVector.push_back(9);
	myVector.push_back(367);

	cout << "Количество векторов в массиве: " << myVector.size() << endl << endl;

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	return 0;
}
/*Пропиши методы вектора которы использовались*/