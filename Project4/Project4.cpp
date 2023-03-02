#include<iostream>
using namespace std;

// тип данных переменна€;

void main()
{
	setlocale(LC_ALL, "Rus");

	/* ќбъ€вление константы, желательно прописывать с большой буквы,
	чтобы мы точно понимали дл€ себ€ что это константа и она не должна мен€тьс€ */
	//const int COUNT_DAYS_IN_WEEK = 7; 
	//cout << COUNT_DAYS_IN_WEEK <<"\n";


	const int COUNT_DAYS_IN_WEEK = 7;
	/* Ќовый вид константы const char, которой мы можем указать посто€нный символ \n,
	что даст в будущем посто€нный отступ на новую строку, тоже самое и с TAB где TAB отступ*/
	const char NEW_LINE = '\n';
	const char TAB = '\t';
	cout << TAB << TAB << COUNT_DAYS_IN_WEEK << NEW_LINE;

	/*  онстанты.  лючевое слово const. C++ дл€ начинающих. ”рок #6 */


}