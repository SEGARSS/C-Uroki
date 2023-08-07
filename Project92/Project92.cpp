//������������� ����� ������. ���. friend c++ ��� ���. ������� ������. C++ ��� ����������. ����#90 - ����� �105.

#include<iostream>
#include<string>
using namespace std;

class Apple;
class Human;

class Human
{
public:
	void TekeApple(Apple& apple);
	
	void EatApple(Apple& apple)
	{

	}
};

class Apple
{
public:
	Apple(int weight, string color)
	{
		this->color = color;
		this->weight = weight;
	}
private:
	int weight;
	string color;

	friend void Human::TekeApple(Apple& apple);
};

int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red");
	
	Human human;
	human.TekeApple(apple);

	return 0;
}

void Human::TekeApple(Apple& apple)
{
	cout << "TekeApple " << "weight = " << apple.weight << " color = " << apple.color << endl;
}

/*������ ���������� �������������� ������ �������� � ��������� ��������� ����. ����� �� �������� �����, � ����� ����������
��� ���� �� ������������, ���������� �������� ������������� ����� ������� ������.*/