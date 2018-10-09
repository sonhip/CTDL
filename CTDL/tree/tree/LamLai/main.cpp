#include <iostream>
#include "tree.h"
using namespace std;
int main()
{
	Tree<int> x;
	x.AddChild(15);
	x.AddChild(5);
	x.AddChild(10);
	x.AddChild(4);
	x.AddChild(17);
	x.AddChild(23);
	x.AddChild(55);
	x.PreOrder();
	// x.InOrder();
	// x.PostOrder();
	cout<<x.Search(123)<<endl;
	cout<<x.Search(15)<<endl;
	cout<<x.SearchMax()<<endl;
	// cout<<x.SearchMin()<<endl;
	// x.AddPos(15,8);
	// x.PreOrder();
	cout<<x.DemNode()<<endl;


	return 0;
}