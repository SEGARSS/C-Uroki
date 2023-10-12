//Виртуальное наследование c++. Ромбовидное наследование c++. Изучение С++ для начинающих. Урок #114 - Видео 132.

#include<iostream>
#include<string>
using namespace std;

//-----------------------------------------------------
class Component
{
public:
	Component(string companyName)
	{
		cout << "конструктор Component " << endl;
		this->companyName = companyName;
	}
	string companyName;
	//int ver;

};
//-----------------------------------------------------
class GPU: public Component
{
public:
	GPU(string companyName) :Component(companyName)
	{
		cout << "конструктор GPU " << endl;
	}

};
//-----------------------------------------------------
class Memory: public Component
{
public:
	Memory(string companyName) :Component(companyName)
	{
		cout << "конструктор Memory " << endl;
	}
};
//-----------------------------------------------------
class GraphicCard :public GPU, public Memory
{
public:
	GraphicCard(string GPUCompanyName, string MemoryCompanyName) : GPU(GPUCompanyName), Memory(MemoryCompanyName)
	{
		cout << "конструктор GraphicCard " << endl;
	}
};
//-----------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	GraphicCard gc("ADM", "Samsung");

	return 0;
}
//-----------------------------------------------------
/*Прорабоать повторно*/