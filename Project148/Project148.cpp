//typedef c++ ��� ��� | �������� �++ ��� ����������. ���� #138 - ����� �167. 

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
/*�������� ����� typedef, ������ ��� ����������. �� ������ ����� ������������ ������������ ���, � ������ using namespace std;
� ���� �� ��� �� ���������� �� �������� ��������������, ������ - std::vector<int> myVector; ��� std::vector<float> vvvsdad;
��� � ����������� typedef, ������ - typedef std::vector<int> int_vector; � ����� ����� ������ ���� ������ - std::vector<int> myVector;
��� ������ ���������� int_vector myVector;*/