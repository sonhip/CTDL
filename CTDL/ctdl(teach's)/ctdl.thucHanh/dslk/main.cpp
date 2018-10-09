#include <iostream>
using namespace std;
#include <string.h>

#include "list.h"
#include "date.h"
#include "stack.h"
int main()
{	
	// char a[100] = "48*23*-";
	
	// Stack<int> s;
	// for(int i = 0; i< strlen(a); i++)
	// {
	// 	if (a[i] >= '0' && a[i] <= '9')
	// 		s.Push(a[i] - '0');
	// 	else
	// 	{
	// 		int s2 = s.Pop();
	// 		int s1 = s.Pop();
	// 		if (a[i] == '+')
	// 			s.Push(s1+s2);
	// 		if (a[i] == '-')
	// 			s.Push(s1-s2);
	// 		if (a[i] == '*')
	// 			s.Push(s1*s2);
	// 		if (a[i] == '/')
	// 			s.Push(s1/s2);
				
	// 	}		
	// }	
	// int kq = s.Pop();
	// cout<<"Ket qua la: "<<kq<<endl;
	Stack<int> l;
	l.Push(1);
	l.Push(2);
	l.Push(3);
	l.Push(4);
	
	l.PrintAll();
	l.Pop();

	return 0;
}
