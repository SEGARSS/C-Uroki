//Реализация односвязного списка c++ Часть 1-3 | Урок #133 - Видео №153-155.

#include<iostream>
#include<string>
using namespace std;

//-------------------------------------------------------------------------------------------
template<typename T>
class List
{
public:
	List();
	~List();

	void pop_front();
	void push_back(T data);
	void clear();
	int GetSize() { return Size; }
	T& operator[](const int index);

	void push_front(T data);
	void insert(T value, int index);
	void removeAt(int index);
	void pop_back();

private:

	template<typename T>
	class Node
	{
	public:
		Node *pNext;
		T data;

		Node(T data = T(), Node *pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size;
	Node<T> *head;
};
//-------------------------------------------------------------------------------------------
template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}
//-------------------------------------------------------------------------------------------
template<typename T>
List<T>::~List()
{
	cout << "Вызвался диструктор!" << endl;
	clear();
}
//-------------------------------------------------------------------------------------------
template<typename T>
void List<T>::pop_front()
{
	Node<T> *temp = head;

	head = head->pNext;

	delete temp;

	Size--;
}
//-------------------------------------------------------------------------------------------
template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T> *current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	Size++;
}
template<typename T>
void List<T>::clear()
{
	while(Size)
	{
		pop_front();
	}
}
//-------------------------------------------------------------------------------------------
template<typename T>
T & List<T>::operator[](const int index)
{
	int counter = 0;

	Node<T> *current = this->head;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}
//-------------------------------------------------------------------------------------------
template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	Size++;
}
//-------------------------------------------------------------------------------------------
template<typename T>
void List<T>::insert(T value, int index)
{
	if (index == 0)
	{
		push_front(value);
	}
	else
	{
		Node<T>* previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}

		Node<T> *newNode = new Node<T>(value, previous->pNext);
		previous->pNext = newNode;

		Size++;
	}
	
}
//-------------------------------------------------------------------------------------------
template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T>* previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		///
		Node<T> *toDelete = previous->pNext;

		previous->pNext = toDelete->pNext;

		delete toDelete;

		Size--;
	}
}
//-------------------------------------------------------------------------------------------
template<typename T>
void List<T>::pop_back()
{
	removeAt(Size - 1);
}
//-------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	List<int> lst;
	lst.push_front(5);
	lst.push_front(10);
	lst.push_front(623);

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	lst.insert(99,1); // цифра 1 - это индекс, в какой ячейке индекса положить 99.

	cout << endl << "insert" << endl << endl;

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	lst.removeAt(1); // В какой ячейке индекса удплить данные

	cout << endl << "removeAt" << endl << endl;

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << endl << "pop_back" << endl << endl;

	lst.pop_back(); //удалем последний илимент в списке

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	return 0;
}
//-------------------------------------------------------------------------------------------
/*Сложная реализация. Похожа уже на полность проработанные методы в ООП при реализации проекта.*/