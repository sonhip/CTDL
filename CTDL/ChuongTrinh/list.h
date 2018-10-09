#include <iostream>
using namespace std;
template <class T>
struct Node
{
	T data;
	Node<T> *next;
};
template <class T>
class List
{
private:
	Node<T> *head;
public:
	List()
	{
		head=0;
	};
	void PushBack(T value)// them vao cuoi danh sach
	{
		Node<T> *n=new Node<T>;
		n->data=value;
		n->next=0;
		if(head==0)
			head=n;
		else
		{
			Node<T> *p=head;
			while(p->next != 0)
			{
				p=p->next;
			}
			p->next=n;
		}

	}

	void PrintAll()const// in tat ca danh sach
	{
		Node<T> *p=head;
		while(p!= 0)
		{
		// cout<<p<<" ";
			cout<<p->data<<" ";
			p=p->next;
		}
		cout<<endl;
	}
	void PushTop(T val)// them vao dau danh sach
	{
		Node <T> *n= new Node<T>;
		Node<T> *p=head;
		head=n;
		n->next=p;
		n->data=val;
	}
	T GetAnItem(int pos)// nhap vao vi tri-> lay gia tri 
	//cua bien tai vi tri do
	{
		// if(pos-1==0)
		// 	return head->data;
		// else
		// {
		// 	Node<T> *n =head;
		// 	for(int i=1;i<pos-1;i++)
		// 	{
		// 		n=n->next;
		// 	}
		// 	return n->data;
		// }
		Node<T> *p = head;
		for(int i = 1; i<pos; i++)
			p=p->next;
		return p->data;
	}
	// void DeleteAnItem(T value)
	// {
	// 	Node<T> *p=head;
	// 	p=p->next;
	// 	if(value==p->data)
	// 	{
	// 		delete p;
	// 		p=p->next;
	// 	}
	// }
	
	void DeleteLast()// xoa phan tu cuoi cung
	{
		Node<T> *p=head;
		while(p->next->next!= 0)
		{
			p=p->next;
		}
		Node<T> *n=p->next;
		p->next=0;
		delete n;
	}
	void DeleteFirst()// xoa phan tu dau tien
	{
		Node<T> *p=head;
		head=head->next;
		delete p;
	}
	/////////////////////////////////////////////////////
	T GetAnFirst()const
	{
		return head->data;
	}
	T GetAnLast()const
	{
		Node<T> *p=head;
		while(p->next !=0)
			p=p->next;
		return p->data;
	}
	void Change(int pos, T val)
	{
		Node<T> *p=head;
		for(int i=1;i<=pos-1;i++)
			p=p->next;
		p->data=val;
	}
	int Count()const
	{
		int dem = 0;
		Node<T> *p = head;
		while (p!=0)
		{
			dem++;
			p = p->next;
		}
		return dem;
	}
};