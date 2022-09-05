#include <iostream>
using namespace std;

template<class T>
class Stack
{
private: 
	int size = 0;
	T* pArray = new T[size];

public:
	void Push(T val)
	{
		size += 1;
		*(pArray + size - 1) = val;
	}

	T Pop()
	{
		return *(pArray + size - 1);
	}
};

int main()
{
	Stack<int>* intArray = new Stack<int>;
	intArray->Push(11);
	cout << "Int Array \t" << intArray->Pop() << '\n';
	delete intArray;

	Stack<float>* floatArray = new Stack<float>;
	floatArray->Push(1.1f);
	floatArray->Push(2.2f);
	cout << "Float Array \t" << floatArray->Pop() << '\n';
	delete floatArray;

	Stack<double>* doubleArray = new Stack<double>;
	doubleArray->Push(.11);
	doubleArray->Push(.22);
	doubleArray->Push(.33);
	cout << "Double Array \t" << doubleArray->Pop() << '\n';
	delete doubleArray;
}