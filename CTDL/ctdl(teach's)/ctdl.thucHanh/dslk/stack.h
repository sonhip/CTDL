
#ifndef stack_h
#define stack_h

#include "node.h"

template <class T>

class Stack
{
private:
	Node<T> *top;
public:
	Stack()
	{
		top = 0;
	};
	void Push(T val)
	{
		Node<T> *n = new Node<T>;
		n->data = val;
		n->next = top;
		top = n;
	};
	T Pop()
	{
		T t = top->data;
		Node<T> *q = top;
		top = top->next;
		delete q;
		return t;
	};
	bool IsEmpty() const
	{
		return top == 0;
	};
	void PrintAll() const
	{
		Node<T> *p = top;
		while (p!= 0)
		{
			cout<<p->data<<" ";
			p= p->next;
		}
	};
};
#endif











