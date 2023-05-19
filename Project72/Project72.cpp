//argc argv c++ что это. Параметры функции main argc argv. Аргументы main. C ++ 
//Урок #70 - Видео №83

#include<iostream>
using namespace std;

void main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	system("pause");
}
/*Если мы хотим в наши параметры программы чтото передать, и выводить это, причём не важно что, мы можем
использовать вот эту запись - void main(int argc, char* argv[]). Она расшифровываеться так - argc будет
указываться количсество элементов, а char* argv[] принимать эти все элементы и показывать нам их.*/