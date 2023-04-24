//„то такое null pointer. null c++ что это. nullptr c++ что это. nullptr c++11. ”рок #54
#include<iostream>
#include<string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ru");

	int *pa = new int;
	*pa = 10;
	cout << *pa << endl;
	cout << "===========" << endl;
	delete pa;
	pa = nullptr;
	cout << pa << endl;
	cout << "===========" << endl;
	delete pa;
	cout << pa << endl;
	cout << "===========" << endl;
}
/* од - pa = 0; pa = NULL; pa = nullptr; - по сути одинаковы, и служат дл€ того, чтобы после очистки указател€ -
delete pa; мы больше не смогли повторно затереть(воизбежани€ ошибки). Ќо, более лучше ииспользовать запись pa = nullptr;
nullptr - уже более современна€ запись, и она избегает большиства ошибок.
» такой момент, не вкоем случаи нельз€ писать сначала pa = nullptr; а потом ниже delete pa; это приведЄт к утечке
пам€ти, и мы уже не сможем до неЄ достучатьс€. ѕоэтому, обезательно сначала затираем указатель кодом delete а уже
потом примен€ем к указателю nullptr.*/