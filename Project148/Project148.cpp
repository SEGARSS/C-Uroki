//typedef c++ что это | Изучение С++ для начинающих. Урок #138 - Видео №167. 

#include<iostream>
#include<vector>

typedef std::vector<int> int_vector;
typedef std::vector<float> float_vector;

int main()
{
	setlocale(LC_ALL,"ru");

	std::vector<int> myVector;

	int_vector myVector2;

	std::vector<float> vvvsdad;

	float_vector vvsdad2;

	return 0;
}
/*Ключевое слово typedef, пример его реализован. Не всегда нужно использовать пространство имён, к пример using namespace std;
и если мы его не используем то название увеличиваеться, пример - std::vector<int> myVector; или std::vector<float> vvvsdad;
тут и пригодиться typedef, пример - typedef std::vector<int> int_vector; и после этого вместо этой записи - std::vector<int> myVector;
уже теперь используем int_vector myVector;*/