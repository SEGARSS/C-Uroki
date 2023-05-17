//�������� ����������. #ifdef #else #endif #if #elif #endif #ifndef ��� ���. C ++ 
//���� #68 - ����� �81.
#include<iostream>
#define DEBUG
using namespace std;

void main()
{
	setlocale(LC_ALL, "RU");
/*������� ������ �� ������� ������ � �����.*/
#ifdef DEBUG
	cout << "������ �����" << endl;
#endif // DEBUG
	for (int i = 0; i < 4; i++)
	{
		cout << i << endl;
	}
#ifdef DEBUG
	cout << "����� �����" << endl;
#endif // DEBUG
	cout << "==========" << endl << endl;

/*������� ������ � ���������� #else.*/
#ifdef DEBUG
	cout << "����� ���������" << endl;
#else
	cout << "����� �� ��������" << endl;
#endif // DEBUG
	cout << "==========" << endl << endl;
	
/*������� #ifndef �� #ifdef � �������� ������ �� ������. ������ ��� ������� ������� �������� ������.*/
#ifndef DEBUG
	cout << "cout 1" << endl;
#else
	cout << "cout 2" << endl;
#endif // DEBUG
}

/*��� ��� ��� ������ ��������� ������ � #ifdef #else #endif ? ��� �������������� ����� ������� ���������������.
��� �������� ������ (����������) - #define DEBUG, ����� ����� ����� �������� � #ifdef #else #endif.
������� �������� �����, ���� ���� #define DEBUG �� ��������������, ��������� #ifdef, ���� ��������������
//#define DEBUG ��������� #else #endif. 
��� ����� �����, ������� ��� ��� ���������� ������ ��� ����������, � ������������ ���, �� �������� ���������� � ����������
�����, ������ �� ����� �������� � ��������� �� ������� ���������, ���� �������� ���������� ������ ������.*/