//���������� ���������� ������. ���. ���������� ��������� ������������. C++ ��� ����������. ����#83 - ����� 96.

#include<iostream>
#include<string>
using namespace std;

class MyClass
{

public:

	int* data;

	MyClass(int size)
	{
		this->size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "�������� ����������� " << this << endl;
	}

	MyClass(const MyClass& other)
	{
		this->size = other.size;

		this->data = new int[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << "�������� ����������� ����������� " << this << endl;
	}

	MyClass & operator = (const MyClass &other)
	{
		cout << "�������� �������� = " << this << endl;

		this->size = other.size;

		if (this->data != nullptr)
		{
			delete[] this->data;
		}

		this->data = new int[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}

		return *this;
		
	}

	~MyClass()
	{
		cout << "�������� ���������� " << this << endl;
		delete[] data;
	}

private:
	int size;
};

void foo(MyClass value)
{
	cout << "��������� ���� ������� foo " << endl;
}

MyClass foo2()
{
	cout << "��������� ���� ������� foo2 " << endl;
	MyClass temp(2);
	return temp;

}

int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a(10);

	MyClass b(2);

	MyClass c(5);

	c = a = b;  


	return 0;
}

/*������ ����������� � �����������!*/