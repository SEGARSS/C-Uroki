#include<iostream>
using namespace std;

/*
      ����������� ����������� ������ if
      ������� if - else if
*/
/*

void main()
{
    setlocale(LC_ALL, "ru");

    /*

    if (����������� ��� ���������)
    {
        �������� 1;
    }



    // ���������� bool - ����� ��������� ��� �������� � ���� (true � false)
  /*
    bool isRain = true; // ������� � ���������� ��� ��� �����, ������. � �� ������ �����


    if (isRain)
    {
        cout << "��� �����, ��� ����� ����!" << endl;
    }
    else
    {
        cout << "����� ���, ��� �� �����!" << endl;
    }



    int a;
    cout << "������� ����� ";
    cin >> a;


    if (a > 5)
    {
        cout << "���� ����� ������ ���� ����� 5-��" << endl;
    }
    else if (a==5) /* �������� �������, ����� ���������� ������� � 5����,
        ������ ���� ����� ����� 5, �� ��� ����� � ��� �������.*/
        /*
            {
                cout << "���� ����� ����� 5-��" << endl;
            }
            else
            {
                cout << "���� ����� ������ 5-��" << endl;
            }
        }
         */
         // �������� ��������� ������� ��������� ����� �� ��������.

void main()
{
    setlocale(LC_ALL, "ru");
    cout << "������� ����� ";
    int che;
    cin >> che;

    if (che % 2 == 0) /*���� � ������ ������� ������ ����� (%) ��������� ���� (/), ����� ������� �� ���������.
        ��� ������ ����� ��������, ���� ����������� � ��������. �����, � ������ �������, ����� � ������� ��������
        (che % 2).
        */
    {
        cout << "������� ����� - " << che << " ׸����" << endl;
    }
    else
    {
        cout << "�������� ����� - " << che << " �� ������" << endl;
    }
}
