//Динамический массив и умные указатели. Изучение С++ для начинающих. Урок #132 - Видео № 152.

#include<iostream>
#include<string>
#include<memory>
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

	int SIZE;
	cin>>SIZE;

	shared_ptr<int[]>ptr(new int[SIZE]{1,8,44,9,2});

	for (int i = 0; i < SIZE; i++)
	{
		ptr[i] = rand() % 10;
		cout << ptr[i] << endl;
	}

	return 0;
}
//-------------------------------------------------------------------------------------------
/*Работа с масивом использая функционал shared_ptr.
Он контролирует, какие мы данные используем.
Если где-то, что-то укажим не то, он нам укажет на это.*/