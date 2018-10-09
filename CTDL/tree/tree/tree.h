#ifndef tree_h
#define tree_h
#include "node.h"
#include <limits.h>
#include <math.h>
template <class T>
class Tree
{
private:
	Node<T> *root;
	void AddChild(T value, Node<T> *root)
	{
		if(value<root->value) // neu phan tu them vao nho hon node goc thi them vao ben trai
		{
			if(root->l != 0)
				AddChild(value, root->l);
			else
			{
				Node<T> *n = new Node<T>;
				n->value = value;
				n->l = 0;
				n->r = 0;
				root->l = n;
			}
		}
		else
		{
			if(value>root->value) // neu phan tu them vao lon hon node goc thi them vao ben trai
			{
				if(root->r != 0)
					AddChild(value,root->r);
				else
				{
					Node<T> *n = new Node<T>;
					n->value = value;
					n->l = 0;
					n->r = 0;
					root->r = n;
				}
			}
		}
	};
	void PreOrder(Node<T> *root) const
	{
		if(root != 0)
		{
			PreOrder(root->l);
			cout<<root->value<<"; ";
			PreOrder(root->r);
		}
	};
	void InOrder(Node<T> *root) const
	{
		if(root != 0)
		{
			cout<<root->value<<"; ";
			InOrder(root->l);
			InOrder(root->r);
		}
	};
	void PostOrder(Node<T> *root) const
	{
		if(root != 0)
		{
			PostOrder(root->r);
			cout<<root->value<<"; ";
			PostOrder(root->l);
		}
	};
	bool Search(T value, Node<T> *root)
	{
		if(root == 0)
			return false;
		if(root->value == value)
			return true;
		if(root->value<value)
			return Search(value,root->r);
		if(root->value>value)
			return Search(value,root->l);	
	};

	void Add(T value1, T value2, Node<T> *root)
	{
		if(root != 0)
		{
			if( Search(value1) )
			{
				if(value1 == root->value)
				{	
					Node<T> *n = new Node<T>;
					n->value = value2;
					n->l = 0;
					n->r = 0;

					if(root->l == 0)
					{
						root->l = n;	
					}
					else
					{
						if(root->r == 0)
						{
							root->r = n;
						}
					}
				}
				else
				{
					Add(value1,value2,root->l);
					Add(value1,value2,root->r);
				}
			}
		}
	};
	int Max = INT_MIN; // gan cho max gia tri nho nhat cua int;
	int SearchMax(Node<T> *root)
	{
		if(root != 0)
		{
			if(Max< root->value)
				Max = root->value;
			SearchMax(root->l);
			SearchMax(root->r);
		}
		return Max;
	};
	int NodeCount(Node<T> *root) // dem so node
	{
        if (root == 0)
        	return 0;
        else
        	return 1 + NodeCount(root->l) + NodeCount(root->r);
    }

    int HeightTree(Node<T> *root) // dem so tang
    {
    	if(root == 0)
    		return 0;
    	else
    		return 1 + max(HeightTree(root->l) , HeightTree(root->r));
    }
    Node<T>* FindMin(Node<T> *root)
    {
    	Node<T> *p = root;
       	while(p->l != 0)
       		p = p->l;
       	return p;	
    };

public:
	Tree()
	{
		root = 0;
	};
	void  AddChild(T value)
	{
		if(root == 0)
		{
			Node<T> *n = new Node<T>;
			n->value = value;
			n->l = 0;
			n->r = 0;
			root = n;
		}
		else
		{
			AddChild(value, root);
		}
	};
	void PreOrder() const
	{
		PreOrder(root);
		cout<<endl;
	};
	void InOrder() const
	{
		InOrder(root);
		cout<<endl;
	};
	void PostOrder() const
	{
		PostOrder(root);
		cout<<endl;
	};
	bool Search(T value)
	{
		return Search(value,root);
	};
	void Add(T value1, T value2)
	{
		Add(value1,value2,root);
	};
	int SearchMax()
	{
		return SearchMax(root);
	};
	int NodeCount()
	{
		return NodeCount(root);
	};
	int HeightTree()
	{
		return HeightTree(root);
	}
};
	
#endif