#include <iostream>
using namespace std;
#include "mylib.h"
#include "book.h"
#include "list.h"
#include <stdlib.h>
int main()
{	
	int chon;
	List<Book> tv;
	do
	{
		system("clear");
		chon = ThucDon();
		switch (chon)
		{
		case 1:
			ThemSach(tv);
			break;
		case 2:
			HienThi(tv);
			break;
		case 3:
			LuuFile(tv);
			break;
		case 4:
			MoTuFile(tv);			
			break;
		case 5:
			SuaSach(tv);
			break;
			
		};
		cout<<"Nhan phim bat ki de tiep tuc:";
		cin.ignore();
		cin.get();
	} while (chon !=0);
	return 0;
}
