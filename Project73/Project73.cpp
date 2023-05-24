//int main или void main. int main vs void main c++. C ++ Для начинающих. 
//Урок #71 - Видео 84

#include<iostream>
using namespace std;

/*Данный вариант записи удобен для показа данных, которые хочешь указать, без лишней мешуры.*/
void main1(int argc, char* argv[])
{
	setlocale(LC_ALL, "Ru"); 

}
/*А это стандарт языков с++, чтобы функция main всегда возвращала значение. Названия main1 и main2 указал просто
чтоб не конфликтовали одинаковые названия.*/
int main2(int argc, char* argv[])
{
	setlocale(LC_ALL, "Ru");
	return 0;
}