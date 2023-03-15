/*Написать программу, которая выводит на экран прямоугольник символом *. 
Высота и ширина задаётся пользователем.*/

#include <iostream>
using namespace std;

void main() 
{
    setlocale(LC_ALL, "ru");
    int a, b;

    cout << "Введите высоту прямоугольника: ", cin >> a;
    
    cout << "Введите ширину прямоугольника: ", cin >> b;
    
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    
}