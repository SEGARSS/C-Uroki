//vector | ���������� ����������� �������� (stl) | ����� | C++ | #1 - ����� �156.

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	vector<int> myVector;
	myVector.push_back(2);
	myVector.push_back(74);
	myVector.push_back(9);
	myVector.push_back(367);

	cout << "���������� �������� � �������: " << myVector.size() << endl << endl;

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	return 0;
}
/*������� ������ ������� ������ ��������������*/