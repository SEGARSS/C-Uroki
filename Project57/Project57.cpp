//��� ����� null pointer. null c++ ��� ���. nullptr c++ ��� ���. nullptr c++11. ���� #54
#include<iostream>
#include<string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ru");

	int *pa = new int;
	*pa = 10;
	cout << *pa << endl;
	cout << "===========" << endl;
	delete pa;
	pa = nullptr;
	cout << pa << endl;
	cout << "===========" << endl;
	delete pa;
	cout << pa << endl;
	cout << "===========" << endl;
}
/*��� - pa = 0; pa = NULL; pa = nullptr; - �� ���� ���������, � ������ ��� ����, ����� ����� ������� ��������� -
delete pa; �� ������ �� ������ �������� ��������(����������� ������). ��, ����� ����� ������������� ������ pa = nullptr;
nullptr - ��� ����� ����������� ������, � ��� �������� ���������� ������.
� ����� ������, �� ����� ������ ������ ������ ������� pa = nullptr; � ����� ���� delete pa; ��� ������� � ������
������, � �� ��� �� ������ �� �� �����������. �������, ����������� ������� �������� ��������� ����� delete � ���
����� ��������� � ��������� nullptr.*/