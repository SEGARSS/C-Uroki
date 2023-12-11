//auto_ptr | unique_ptr | shared_ptr | Умные указатели. Изучение С++ для начинающих. Урок #131 - Видео № 151.

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

	shared_ptr<int> sp1(new int(5));

	shared_ptr<int> sp2(sp1);

	return 0;
}
//-------------------------------------------------------------------------------------------
/*Использовать чаще всего умный указатель shared_ptr.
Остальные указатели, могут содержать только одни данные.
Тоесть shared_ptr, данные остануться в sp1 и в sp2.
Вслучаи использования остальных умных указателей, в sp2 буду данные
а в sp1 нет.*/