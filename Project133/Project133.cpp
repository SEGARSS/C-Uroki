//Умные указатели. Smart pointers. Изучение С++ для начинающих. Урок #130 - Видео № 150.

#include<iostream>
#include<string>
using namespace std;


//-------------------------------------------------------------------------------------------
template<typename T>
class SmartPointer
{
public:
	SmartPointer(T *ptr)
	{
		this->ptr = ptr;
		cout << "Construktor" << endl;
	}

	~SmartPointer()
	{
		delete ptr;
		cout << "Destructor" << endl;
	}

	T& operator*()
	{
		return *ptr;
	}

private:
	T *ptr;
};
//-------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	SmartPointer<int> pointer = new int(5);

	cout << *pointer << endl;

	*pointer = 135413813;

	cout << *pointer << endl;

	return 0;
}
//-------------------------------------------------------------------------------------------
/*Метод реализации, для автоматического ощищения памяти после её использования.*/