//sizeof ��� ���. sizeof c++ ������. ������ ���������� ��������� �������. sizeof array. ���� #28. - ����� 36.

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	//������� ���� ������, ������� ��� �������� ���� � ������.
	//char = 1
	//int = 4
	//double = 8

	/*���� �� ����� ������� cout << sizeof(int) << endl; �� ������� ���������� � ���������� ���, � � �������.
	������ ���������� int = 4. � ������� ������ ���������� double = 8 , ��� ��� ������ ���������� ������ ���
	� ���� ������� ����� � �� �������. �����, ����� �������� ��� ��� - int a; � ����� cout <<sizeof(a) << endl;
	�� ������� ����� ��������� � 4�����. ����� ������, � ������� sizeof �� ����� ��������� ��� ������, �������
	��������� ���� ��� �� ��� ���� ��������.*/

	/*������ ���� ��� sizeof ������������ ������, � ������ ����������, ������� �� ��� ���� �������� �������� ������.
	� ������� ������� int arr[]{ 5,68,135,1684,11 }; ����� ��� ��������� ������� cout << sizeof(arr) << endl; �
	�������� 20. ������ 20 ? ����� 5 ��������� �� 4 �����.*/

	/*��� ����������� ������ �������? 
	int arr[]{ 5,68,135,1684,11 };
	cout << sizeof(arr)/sizeof(int) << endl;
	� ������� 5. ������? ��������� sizeof(arr) ���������� ������� ���� �������� ��� �������� ������ ��������� � ���,
	� ��� ������� �� sizeof(int) �� �������� ���������� ��������� ������� �� ��� ������� ����� �������, �������� �������
	�������.*/
	
	/*������ ������ - for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) � ������ �������� 
	sizeof(arr)/sizeof(arr[0], ��� ����������� ������ ������, ���� �� �������� ������ � ������, � ��������� ����� ������ � �����,
	�� ����� ������ ��� ����������.
	���� � ������� ������� ��� 
	for (int i = 0; i < 5; i++) ��� 5 ���������� ��������� � ������.
	{
		cout << arr[i] << endl;
	}
	�� ������ �� ������� ������ � ������� ������ � 5�� ��������� �������.
	�� � ������� ��� ������ int arr[]{ 5,68,135,1684,11 };
	� �� �������� � ����� ���� ������, � ������� �������� 6� ������� - int arr[]{ 5,68,135,1684,11,69 };
	� ����� ������ ���� ������� ��� ���������� � �������� 6, ���� � ��������� � ����� 6.
	for (int i = 0; i < 6; i++) ��� 5 ���������� ��������� � ������.
	{
		cout << arr[i] << endl;
	}
	� ���� � ��� ����� ������? � ����� ������ �������� � �����?
	��� ���� � ���� � �� ��������, ����� ����������� sizeof(arr)/sizeof(arr[0]); � ����� � ����� �����, � ����� �� �����
	������� ��������� �� ������� � ������ � �����, �� ����� ������ ���������� ��������� (���������) � ����.
	�����, ��� ������, ����� �������� ��� ��� � ������� � int �� double(double arr[]{ 5,68,135,1684,11 };)
	� � ��� �� �������� ������������ ��������� sizeof(arr)/sizeof(arr[0].
	���� ��� ������������� ������.*/

	int arr[]{ 5,68.3,135,1684,11,52,69 };

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	
	cout << "����� ������� � ������: - " << sizeof(arr) << endl; 
	cout << "������ ������� �� ���������� ���������: -  " << sizeof(arr) / sizeof(int) << endl;

}