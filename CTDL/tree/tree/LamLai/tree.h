#ifndef tree_h
#define tree_h
#include <iostream>
#include "node.h"
using namespace std;
template <class T>
class Tree
{
private:
	Node<T> *root;
	void AddChild(T value, Node<T> *root)
	{
		if(root->value>value)
		{
			if(root->l==0)
			{
				Node<T> *n=new Node<T>;
				n->value=value;
				n->l=0;
				n->r=0;
				root->l=n;
			}
			else
				AddChild(value,root->l);
		}
		if(root->value<value)
		{
			if(root->r==0)
			{
				Node<T> *n=new Node<T>;
				n->value=value;
				n->r=0;
				n->l=0;
				root->r=n;
			}
			else
				AddChild(value, root->r);
		}
	}
	void PreOrder(Node<T> *root)const
	{
		if(root!=0)
		{
			PreOrder(root->l);
			cout<<root->value<<" ";
			PreOrder(root->r);
		}
	}
	bool Search(T value, Node<T> *root)const
	{
		if(root->value==value)
			return true;
		else
			return false;
		if(value<root->value)
			 return Search(value,root->l);
		else
			return Search(value,root->r);
	}
	T SearchMax(Node<T> *root)const
	{
		if(root!=0)
		{
			while(root->r!=0)
				root=root->r;
		}
		return root->value;
	}
	int DemNode(Node<T> *root)const
	{
		if(root==0)
			return 0;
		else
			return 1+max(DemNode(root->l),DemNode(root->r));
	}

public:
	Tree()
	{
		root=0;
	}
	void AddChild(T value)
	{
		if(root==0)
		{
			Node<T> *n=new Node<T>;
			n->value=value;
			n->r=0;
			n->l=0;
			root=n;
		}
		else
			AddChild(value,root);
	}
	void PreOrder()const
	{
		PreOrder(root);
		cout<<endl;
	}
	bool Search(T value)const
	{
		Search(value,root);
	}
	T SearchMax()const
	{
		SearchMax(root);
	}
	int DemNode()const
	{
		DemNode(root);
	}
};






























































// template <class T>
// class Tree
// {
// private:
// 	Node<T> *root;
// 	void AddChild(T value, Node<T> *root)
// 	{
// 		if(value<root->value)
// 		{
// 			if(root->l!=0)
// 				AddChild(value,root->l);
			
// 			else
// 			{
// 				Node<T> *n=new Node<T>;
// 				n->value=value;
// 				n->l=0;
// 				n->r=0;
// 				root->l=n;
// 			}
				
// 		}
// 		if(value>root->value)
// 		{
// 			if(root->r!=0)
// 				AddChild(value,root->r);
// 			else
// 			{
// 				Node<T> *n=new Node<T>;
// 				n->value=value;
// 				n->l=0;
// 				n->r=0;
// 				root->r=n;
				
// 			}
// 		}
// 	}
// 	void PreOrder(Node<T> *root)const
// 	{
// 		if(root!=0)
// 		{
// 			PreOrder(root->l);
// 			cout<<root->value<<" ";
// 			PreOrder(root->r);
// 		}
// 	}
// 	void InOrder(Node<T> *root)const
// 	{
// 		if(root!=0)
// 		{
			
// 			cout<<root->value<<" ";
// 			InOrder(root->l);
// 			InOrder(root->r);
// 		}
// 	}
// 	void PostOrder(Node<T> *root)const
// 	{
// 		if(root!=0)
// 		{
// 			PostOrder(root->r);
// 			cout<<root->value<<" ";
// 			PostOrder(root->l);
// 		}
// 	}
// 	bool Search(T value, Node<T> *root)
// 	{
// 		if(root==0)
// 			return false;
// 		if(root->value==value)
// 			return true;
// 		if(value<root->value)
// 			return Search(value,root->r);
// 		else
// 			return Search(value,root->l);
// 	}
// 	T SearchMax(Node<T> *root)const
// 	{
// 		if (root==0)
// 			return 0;
// 		else
// 		{
// 			while(root->r!=0)
// 				root=root->r;
// 		}
// 		return root->value;
// 	}
// 	T SearchMin(Node<T> *root)const
// 	{
// 		if (root==0)
// 			return 0;
// 		else
// 		{
// 			while(root->l!=0)
// 				root=root->l;
// 		}
// 		return root->value;
// 	}
// 	void AddPos(T value1,T value2, Node<T> *root)
// 	{
// 		if(root!=0)
// 		{
// 			if(Search(value1)==true)
// 			{
// 				if(value1==root->value)
// 				{
// 					Node<T> *n=new Node<T>;
// 					n->value=value2;
// 					n->l=0;
// 					n->r=0;
// 					if(root->l==0)
// 						root->l=n;
// 					if(root->r==0)
// 						root->r=n;
// 				}
// 			}
// 			else
// 			{
// 				AddPos(value1,value2,root->l);
// 				AddPos(value1,value2,root->r);
// 			}
// 		}
// 	}

	
// public:
// 	Tree()
// 	{
// 		root=0;
// 	}
// 	void AddChild(T value)
// 	{
// 		if(root==0)
// 		{
// 			Node<T> *n=new Node<T>;
// 			n->value=value;
// 			n->r=0;
// 			n->l=0;
// 			root=n;
// 		}
// 		else
// 			AddChild(value,root);
// 	}
// 	void PreOrder()const
// 	{
// 		PreOrder(root);
// 		cout<<endl;
// 	}
// 	void InOrder()const
// 	{
// 		InOrder(root);
// 		cout<<endl;
// 	}
// 	void PostOrder()const
// 	{
// 		PostOrder(root);
// 		cout<<endl;
// 	}
// 	bool Search(T value)
// 	{
// 		return Search(value,root);
// 	}
// 	T SearchMax()const
// 	{
// 		return SearchMax(root);
// 	}
// 	T SearchMin()const
// 	{
// 		return SearchMin(root);
// 	}
// 	void AddPos(T value1,T value2)
// 	{
// 		AddPos(value1,value2, root);
// 	}

// };

#endif