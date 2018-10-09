#include "list.h"
#include "book.h"
#include <fstream>
using namespace std;
int ThucDon()
{
	cout<<"CHUONG TRINH QUAN LY THU VIEN\n";
	cout<<"1. Them sach\n";
	cout<<"2. Hien thi\n";
	cout<<"3. Luu xuong file\n";
	cout<<"4. Mo tu file\n";
	cout<<"0. Thoat\n";
	int chon;
	cout<<"Nhap chuc nang: ";
	cin>>chon;
	return chon;
}

void ThemSach(List<Book> &ds)
{
	char t[100], a[100];
	int y, p;
	cout<<"Nhap ten sach: ";
	cin.ignore();
	cin.getline(t, 100);
	cout<<"Nhap ten tac gia: ";
	cin.getline(a, 100);
	cout<<"Nhap nam xb: ";
	cin>>y;
	cout<<"Nhap so trang: ";
	cin>>p;
	ds.Add(Book(t, a, y,p));
	
}

void LuuFile(List<Book> tv)
{
	ofstream fout("DULIEU.TXT");
	fout<<tv.Count()<<endl;
	for(int i = 1; i<= tv.Count(); i++)
	{
		Book a = tv.GetItem(i);
		fout<<a.GetTenSach()<<endl;
		fout<<a.GetTacGia()<<endl;
		fout<<a.GetNamXB()<<endl;
		fout<<a.GetSoTrang()<<endl;
	}
	fout.close();		
}

void MoTuFile(List<Book> &tv)
{
	ifstream fin("DULIEU.TXT");
	
	int N;
	fin>>N;
	char t[100];
	fin.getline(t, 100);
	
	for(int i = 1; i<=N; i++)
	{
		char a[100];
		int y, p;
		fin.getline(t, 100);
		fin.getline(a, 100);
		fin>>y;
		fin>>p;
		tv.Add(Book(t, a, y, p));
		fin.getline(t, 100);
	}
	fin.close();
};

void HienThi(List<Book> tv)
{
	cout<<"STT\tTen sach\tTac gia\tNam XB\tSo trang\n";
	for(int i = 1; i<= tv.Count(); i++)
	{
		Book a = tv.GetItem(i);
		cout<<i<<"\t";
		cout<<a.GetTenSach()<<"\t";
		cout<<a.GetTacGia()<<"\t";
		cout<<a.GetNamXB()<<"\t";
		cout<<a.GetSoTrang()<<endl;	
	}
}

void SuaSach(List<Book> &tv)
{
	int q;
	cout<<"Ban muon sua quyen so may? :";
	cin>>q;
	
	char t[100], a[100];
	int y, p;
	cout<<"Nhap ten sach: ";
	cin.ignore();
	cin.getline(t, 100);
	cout<<"Nhap ten tac gia: ";
	cin.getline(a, 100);
	cout<<"Nhap nam xb: ";
	cin>>y;
	cout<<"Nhap so trang: ";
	cin>>p;
	
	tv.Change(q, Book(t,a, y, p));
}


























































