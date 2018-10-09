#include <iostream>
#include "mylib.h"
using namespace std;
int main()
{
	List<int> l;
	l.PushBack(10);
	l.PushBack(20);
	l.PushBack(30);
	l.PushBack(40);
	l.PushBack(50);
	// l.PushTop(60);
	l.PrintAll();
	cout<<l.Count()<<endl;
}
// template <class T>
// struct Node
// {
// 	T data;
// 	Node<T> *next;
// };
// template <class T>
// class List
// {
// private:
// 	Node<T> *head;
// public:
// 	List()
// 	{
// 		head=0;
// 	};
// 	void PushBack(T value)
// 	{
// 		Node<T> *n=new Node<T>;
// 		n->data=value;
// 		n->next=0;
// 		if(head==0)
// 			head=n;
// 		else
// 		{
// 			Node<T> *p=head;
// 			while(p->next != 0)
// 			{
// 				p=p->next;
// 			}
// 			p->next=n;
// 		}

// 	}

// 	void PrintAll()const
// 	{
// 		Node<T> *p=head;
// 		while(p != 0)
// 		{
// 			cout<<p->data<<" ";
// 			p=p->next;
// 		}
// 		cout<<endl;
// 	}