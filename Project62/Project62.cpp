//������ � �++. ���� ����������. ��� ����� ������ � �++. char c++ ������. �++ ��� ����������. ���� #60

#include<iostream>
#include<ctime>
#include<string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	char symbol = 'q';
	cout << symbol << endl;
	//char string[255] = "������ ������!";
	//cout << string << endl;
	char string[] = { '�','�','�','�','�','�','\0'};
	cout << "���������� �������� � �����:  " << string << " �����: " << strlen(string)  << endl;
}

/*���������� char, ����� ������� � ���� ������ ���� ������, �����, ��������, ���������, �������� � ��� �����.
���� ���������� ������� ������ ������ �� ��������, �� ��� ��������� ������ ����� - char string[]. ��� �����
������� ��� ���������� ��������� ������, ��� �������� ������ � �� ��� ����� ������������ �� ������ ���� ��� �� 
��� ���� �������. ��� ������� ��� - char string[] = "������" ��� char string[] = { '�','�','�','�','�','�','\0'};
������� ����� ������� ��� ������������ ����, ������� ���� ��������� � ��������.
� ������� ������� ����� ������ - char string[] = { '�','�','�','�','�','�'}; ��� ���������� ������������� ����,
�� ������� �� ������ �� ��� �������, �� � ������������� ������� ���� �������� ������� ��� �������.
� ����� �� �������� ��������������� �� ��� ��� ����������, � ����� �� ������ ������� '\0' - � ������ ��� � 
��������. ���� �� �� ������� ������ 0 ��� ����� - \, �� �� ������ ������� �������������� ������ 0 � ����� �������
� ��� �� ����� ��������� ������������ ����.
�����, �� ����� ��������� ���������� ����������� �������� � ��� ��� ���� �����, ������ ����� �������.
���������� ����� � ������� ������� strlen. ��������� �� �� ������ ����� ���������� ���������� ������ �������.
��� ������� ���� � ������ ������� ����� ������, �� ��������� ����� ������ - strlen(string) �� ������ ��� ���
��������� 6 ��������, ��� ������� ��� �� ��������� ������������ ����, � ��������� ������ ��� ���� 
������� �������� ������.*/