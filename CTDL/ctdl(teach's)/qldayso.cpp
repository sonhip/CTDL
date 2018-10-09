#include <iostream>
#include <stdlib.h>
using namespace std;
#include "mylib.h"
int main()
{
    int a[10000], N = 0;
	do
	{
	    int chon = ThucDon();
	    switch (chon)
	    {
	    case 1:
	        NapDaySoTuFile(a, N);
	        break;
	    case 3:
	        SinhSoGhiRaFile();	        
	        
	        break;
	    case 2:
	        int so;
	        cout<<"Nhap so: ";
	        cin>>so;
	        bool f = false;
	        for(int i = 0; i<N; i++)
	        {
	            if (a[i] == so)
	            {
	                cout<<"Co xuat hien\n";
	                f = true;
	                break;
	            }
	        }
	        if (!f)
	            cout<<"Khong xuat hien\n";
	        break;
	        
	    };
	    if (chon == 0)
	    {
	        break;
	    }
	    
	    cout<<"Nhan phim bat ki de tro ve\n";
	    cin.get();
	    cin.get();
	    system("clear");
	}while(1);
	return 0;
}
