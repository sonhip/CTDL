#ifndef list_h
#define list_h

#include "node.h"

template <class T>
class List
{
private:
	Node<T> *head;
public:
	List()
	{
		head = 0;
	};	
	void Add(T v)
	{
		Node<T> *n = new Node<T>;
		n->data = v;
		n->next = 0;
		
		if (head == 0)
			head = n;
		else
		{
			Node<T> *p = head;
			while (p->next != 0)
				p = p->next;
			p->next = n;
		}
	};
	void PrintAll() const
	{
		Node<T> *p = head;
		while (p!= 0)
		{
			cout<<p->data<<" ";
			p= p->next;
		}
	};
	T GetItem(int pos) const
	{
		Node<T> *p = head;
		for(int i = 1; i<pos; i++)
			p=p->next;
		return p->data;
	}
	void Change(int pos, T value)
	{
		Node<T> *p = head;
		for(int i = 1; i<pos; i++)
			p = p->next;
		p->data = value;
	};	
	int Count() const
	{
		int dem = 0;
		Node<T> *p = head;
		while (p!=0)
		{
			dem++;
			p = p->next;
		}
		return dem;
	};
	void Delete(int pos)
	{
		if (pos == 1)
		{
			Node<T> * q = head;
			head = head->next;
			delete q;
		}
		else
		{
			Node<T> * p = head;
			for(int i = 1; i<pos-1; i++)			
				p = p->next;
			Node<T> *q = p->next;	
			p->next = p->next->next;	
			delete q;
		}
	
	
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
};

#endif
