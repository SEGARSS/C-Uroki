//argc argv c++ ��� ���. ��������� ������� main argc argv. ��������� main. C ++ 
//���� #70 - ����� �83

#include<iostream>
using namespace std;

void main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	system("pause");
}
/*���� �� ����� � ���� ��������� ��������� ����� ��������, � �������� ���, ������ �� ����� ���, �� �����
������������ ��� ��� ������ - void main(int argc, char* argv[]). ��� ����������������� ��� - argc �����
����������� ����������� ���������, � char* argv[] ��������� ��� ��� �������� � ���������� ��� ��.*/