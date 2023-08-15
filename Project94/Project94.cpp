//static ��� ���. ����������� ���� ������. �������������. �������� ����� static. C++ #92
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

	static int Count;

	Apple(int weight, string color)
	{
		this->color = color;
		this->weight = weight;
		Count++;
	}
private:
	int weight;
	string color;

};

int Apple::Count = 0;

int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red");
	Apple apple2(100, "Green");
	Apple apple3(200, "Yellow");

	cout << "===================" << endl;
	cout << apple.Count << endl;
	cout << apple2.Count << endl;
	cout << apple3.Count << endl;
	cout << "===================" << endl;
	cout << "����������� ����� ������" << endl;
	cout << Apple::Count << endl;

	return 0;
}
/*static ��� ����������, ������� ������������ � ������, � ����� ����������� ��� ���� ������� �����������,
���������, � ����� � ���� ���� �� �� ������ ���������� ���������� static.
������, ������� �� ����� �� ��������������, � � ������� ����� ��� ������ �������, ���������� ������ ���
��� ����� ���������, � ������ ��� ������� ������ ��� ����� �������� ���� � ����.
�� ������������� ���������� ����� ���������� � �� ������, ��� �������� ������ ����� �++ �� ������ ���������� static.
���� �����, � �������, �� ����� ��������� ������. ��� � ������ ������ ����� ���� � ����? ���� � �������.
� ����� ��������� �� ��������� ���� ������, �� ��� ����� ������������ ���������� static.
��� �� �������, static ������������� ��� ������������ id. */