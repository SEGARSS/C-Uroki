//������������ � ��� ������. ��� ����� ������������. ��� ���� ����� ������������ �������. ���. C++ #98 - ����� �114.
#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
	string nameses = " ������ ";
public:
	string name;
	string GetNameses()
	{
		return nameses;
	}

	void SetNameses(string nameses)
	{
		this->nameses = nameses;
	}
};

class Student : public Human 
{
public:
	string group;
	void Learn()
	{
		cout << " � �����! " << endl;
	}
};

class Zaoch : public Student
{
public:
	void Learn()
	{
		cout << " � ����� ������! " << endl;
	}
};

class Professor : public Human
{
public:
	string subject;
};

int main()
{
	setlocale(LC_ALL, "Ru");
	cout << "===�������===" << endl;
	Student st;
	st.name = " ������ ";
	st.Learn();
	cout << st.name << endl;
	cout << "===���������===" << endl;
	Professor ps;
	ps.name = " ������ ";
	cout << ps.name << endl;
	cout << "===������� �������===" << endl;
	Zaoch zao;
	zao.Learn();
	cout << "=============== ���������� ������������ ����� ������� ����" << endl;

	st.GetNameses();
	st.SetNameses(" ���� ");
	cout << st.GetNameses() << endl;

	return 0;
}

/*������������ �������. ������ ���� Human � ��� ��������� ���� string name; � ������ public:, �� ����� ��� ������������
��������� �������. � �� ��� ��������� ������ ������� ��� ����� ������� - class Student : public Human � �����������
������� ��� ������ � ����������(������) � ��������, � ����� �������, ������ ������� ������������ ���� Human, �����
������������ ����� name.
����� ��������������� ����� nameses � ������ Human, ������ ���� ��� � ������ private, �� ������� ������ � ������,
����� � ������ ������ ����� ������������ ������, �������������� ����� Human.
��� ���� �������. 
����������� Get, �� ������ ������� ����, �� �� �������� � �� ������.
� ����� �������� ������ � ������� � ���� nameses ����� ��������� Set, � ����� �� ����� �������� ������ � nameses
��� ������ SetNameses.*/