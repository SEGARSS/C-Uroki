//c++ ����� ������������ ������ �������� ������. ���. �������� �++ � ����. ��� ����������. ���� #108 - ����� 125.

#include<iostream>
#include<string>
using namespace std;

class Msg
{
public:
	Msg(string msg)
	{
		this->msg = msg;
	}
	
	virtual string GetMsg()
	{
		return msg;
	}

private:
	string msg;
};


class BraketsMsg : public Msg
{
public:
	BraketsMsg(string msg) :Msg(msg)
	{
	}
	string GetMsg() override
	{
		return "[" + Msg::GetMsg() + "]";
	}
};


class Printer
{
public:
	void Print(Msg *msg)
	{
		cout << msg->GetMsg() << endl;
	}
};


int main()
{
	setlocale(LC_ALL,"ru");

	BraketsMsg m("�����");

	Printer p;
	p.Print(&m);

	return 0;
}
/*� �������, � ��� ����� ����������� �������, � ������ �������. 
� ���� ������� ����������� �����, � ������������ ������, ��� ��� �������?
������, ����� �������, �������� �� ������ ������ ������ ���� �������� ������ � ��������, ������
��� ��� - Msg::GetMsg. 
� ���� �� ����� �������� ������ ����� GetMsg, ����� �� ��� ������� ������ �� �������� ������,
� �� ��� �� ����� �������� �� �������� ������ �����, �������� � ���� � ����� �� ������ BraketsMsg,
�� � ��������� � ������ - � ������ Msg::GetMsg, ����� ��������� � �� � ������ �� ����, ��� ������,
��� ��� ��� �����, ���� �� ����.*/