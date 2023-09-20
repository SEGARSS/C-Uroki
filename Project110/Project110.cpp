//c++ вызов виртуального метода базового класса. ООП. Изучение с++ с нуля. Для начинающих. Урок #108 - Видео 125.

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

	BraketsMsg m("Прива");

	Printer p;
	p.Print(&m);

	return 0;
}
/*К примеру, у нас много одинаковаых методов, в разных классах. 
И хоти вызвать определённый метод, у определённого класса, как это сделать?
Просто, перед методом, указывам из какова именно класса надо получить данные и свойства, тоесть
вот так - Msg::GetMsg. 
А если мы хотим получить просто метод GetMsg, автом мы его получим только из базового класса,
а та как мы хотим получить из базового класса метод, применив к нему и метод из класса BraketsMsg,
то и указываем в классе - в методе Msg::GetMsg, чтобы применить и то и другое по сути, или просто,
что вот тод метод, тащи от туда.*/