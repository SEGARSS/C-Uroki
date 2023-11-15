//Свой класс exception c++. Создание собственного класса исключений. С++ для начинающих. Урок #123 - Видео № 142. 

#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
using namespace std;


//-------------------------------------------------------------------------------------------
class MyException :public exception
{
public:
	MyException(const char *msg, int dataState):exception(msg)
	{
		this->dataState = dataState;
	}

	int GetDataState()
	{
		return dataState;
	}

private:
	int dataState;
};
//-------------------------------------------------------------------------------------------
void Foo(int value)
{
	if (value < 0)
	{
		throw exception("Число меньше 0 !");
	}

	if (value == 1)
	{
		throw MyException("Число = 1 !!!", value);
	}
	
	cout << "Переманная = " << value << endl;
}
//-------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	try
	{
		Foo(-1);
	}
	catch (MyException &ex)
	{
		cout << "Блок 1 Мы поймали " << ex.what() << endl;
		cout << "Состояние данных  " << ex.GetDataState() << endl;
	}
	catch (exception &ex)
	{
		cout << "Блок 1 Мы поймали " << ex.what() << endl;
	}
	
	return 0;
}
//-------------------------------------------------------------------------------------------
/*Логика данного урока в том что кэч MyException и exception равно ценный.
И тот кто прописан первый, тот и поймает исключения.
А сут ьв том, что если нам нужно поймать узконаправленное исключение, то первым нужно прописывать именно кэч MyException,
потомучто он именно детально в нашем примере покажет и укажет исключение.
А если поставить(прописать) кэч exception первым, то он покажет всё подрят, и кэч MyException уже не покажет свою информацию.*/