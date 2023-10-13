//������ � ������� �++. ������ � ����. c++ ofstream. �������� �++ ��� ����������. ���� #115 - ����� 133.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	string path = "myFile.txt"; //����� �������� ����� ������� ����� �������.

	ofstream fout; // ������ ����(���� �� ������ ���� � ����� � ������ ��������, �� �� ����� ������ � ����� �������)

	fout.open(path, ofstream::app); // ������� �������� ����� (ofstream::app - ������� ���� �� �������� � �� ���������� ������)

	if ( !fout.is_open() ) //���� ���� ���� �� ����������
	{
		cout << "������ �������� �����! " << endl;
	}
	else
	{
		for (int i = 0; i < 3; i++) //�������, ���� ��������� ��� ������ ������
		{
			cout << "������� �����!" << endl;
			int a;
			cin >> a;
			fout << "\n" << a; // fout �������(���������) ������ � ����.
		}
	}

	fout.close();

	return 0;
}
/*��������� ������ ��� ������� � ������� � ����� �++*/