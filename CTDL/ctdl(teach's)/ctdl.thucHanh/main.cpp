#include <iostream>
using namespace std;
#include "list.h"
int main()
{
	List<float> ds;
	ds.Add(5.5);
	ds.Add(4.3);
	ds.Add(10);
	ds.Add(100);
	
	//ds.Insert(3, 50);
	//ds.Delete(1);
	//ds.Delete(2, 4);
	
	cout<<"So phan tu la: "<<ds.Count()<<endl;
	
	ds.PrintAll();
	
	return 0;
}
