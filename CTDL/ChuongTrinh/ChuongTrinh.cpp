#ifndef CHUONGTRINH_H
#define CHUONGTRINH_H
#include <iostream>
#include "mylib.h"
#include <stdlib.h>
using namespace std;
int main()
{
	int chon;
	List<Sach> ds;
	do
	{
		system("clear");
		chon=ThucDon();
		switch(chon)
		{
			case 1:
				ThemSach(ds);
					break;
			case 2:
				//HienThi(ds);
				break;
			case 3:
				LuuFile(ds);
				break;
			case 4:
				//MoTuFile(ds);
				break;
			case 5:
				SuaSach(ds);
				break;
		}
		//char h;
		cout<<"Nhan Phim Bat Ki De Tiep Tuc: ";
		cin.ignore();
		cin.get();
	}while(chon!=0);
	return 0;
}
#endif
