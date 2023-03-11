/*Íàïèñàòü ïðîãðàììó, êîòîðàÿ âûâîäèò íà ýêðàí ïðÿìîóãîëüíèê ñèìâîëîì *. Âûñîòà è øèðèíà çàäà¸òñÿ ïîëüçîâàòåëåì.*/

#include <iostream>
using namespace std;

void main() 
{
    setlocale(LC_ALL, "ru");
    int a, b;

    cout << "Ââåäèòå âûñîòó ïðÿìîóãîëüíèêà:";
    cin >> a;

    cout << "Ââåäèòå øèðèíó ïðÿìîóãîëüíèêà:";
    cin >> b;

    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
//Допилил
