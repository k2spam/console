#include <iostream>
using namespace std;

class Stack
{
private:
	int size = 0;
	int* pInt = new int[size];

public:
	/*~Stack()
	{
		delete pInt;
	}*/
	void Push(int val)
	{
		size += 1;
		*(pInt + size - 1) = val;
	}

	int Pop()
	{
		return size> 0 ? *(pInt + size - 1) : 0;
	}
};

int main()
{
	Stack* arr = new Stack;
	
	arr->Push(11);
	cout << "First push \t" << arr->Pop() << '\n';
	
	arr->Push(22);
	cout << "Second push \t" << arr->Pop() << '\n';

	arr->Push(33);
	cout << "Third push \t" << arr->Pop() << '\n';

	delete arr;
}