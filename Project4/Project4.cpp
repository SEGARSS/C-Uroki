#include<iostream>
using namespace std;

// ��� ������ ����������;

void main()
{
	setlocale(LC_ALL, "Rus");

	/* ���������� ���������, ���������� ����������� � ������� �����,
	����� �� ����� �������� ��� ���� ��� ��� ��������� � ��� �� ������ �������� */
	//const int COUNT_DAYS_IN_WEEK = 7; 
	//cout << COUNT_DAYS_IN_WEEK <<"\n";


	const int COUNT_DAYS_IN_WEEK = 7;
	/* ����� ��� ��������� const char, ������� �� ����� ������� ���������� ������ \n,
	��� ���� � ������� ���������� ������ �� ����� ������, ���� ����� � � TAB ��� TAB ������*/
	const char NEW_LINE = '\n';
	const char TAB = '\t';
	cout << TAB << TAB << COUNT_DAYS_IN_WEEK << NEW_LINE;

	/* ���������. �������� ����� const. C++ ��� ����������. ���� #6 */


}