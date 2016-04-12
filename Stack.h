#include <vector>
#include <algorithm>
#include <iostream>
#include <string>


using namespace std;

template <class T> class Stack
{
private:
	vector<T> elements;

public:
	void push(T const&);	// push element
	void pop();		// pop element
	T Top() const;		// top element in stack
	bool empty() const
	{		// checks if stack is empty
		return element.empty();
	}
	Stack();
	~Stack();
};



template<class T>
void Stack<T>::push(T const& element)
{
	elements.push_back(element); // push in new element in vector, increase container
}

template<class T>
void Stack<T>::pop()
{
	if (elements.empty())
		throw out_of_range("Stack is empty");
	elements.pop_back(); // pop last element in container
}

template<class T>
T Stack<T>::Top() const
{
	if (elements.empty())
		throw out_of_range("Stack is empty");
	return elements.back(); // gives a reference to last element
}

template<class T>
Stack<T>::Stack()
{
}

template<class T>
Stack<T>::~Stack()
{
}