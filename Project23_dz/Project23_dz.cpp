/*�������� ���������, ������� ������� �� ����� ������������� �������� *. 
������ � ������ ������� �������������.*/

#include <iostream>
using namespace std;

void main() 
{
    setlocale(LC_ALL, "ru");
    int a, b;

    cout << "������� ������ ��������������: ", cin >> a;
    
    cout << "������� ������ ��������������: ", cin >> b;
    
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    
}