#include <iostream>
#include "list.h"
#include "Sach.h"
#include <fstream>
using namespace std;
int ThucDon()
{
	int a;
	cout<<"\t\t\tThu Vien Quan Ly Sach\t\t\t"<<endl;
	cout<<"1.Them Sach"<<endl;
	cout<<"2.Hien Thi Sach"<<endl;
	cout<<"3.Luu Sach Xuong File"<<endl;
	cout<<"4.Doc Sach Tu Mot File Da Co"<<endl;
	cout<<"5.Sua Sach"<<endl;
	cout<<"6.Xuat HTML"<<endl;
	cout<<"7.Ket Thuc"<<endl;
	cout<<endl;
	cout<<"Moi Ban Chon Chuc Nang: ";cin>>a;
	return a;
}
void ThemSach(List<Sach> &ds)
{
	char t[100],a[100];
	int x,y;
	cout<<"Nhap Ten Sach: ";
	cin.ignore();
	cin.getline(t, 100);
	cout<<"Nhap Ten Tac Gia: ";
	cin.ignore();
	cin.getline(a, 100);
	cout<<"Nhap Nam Xuat Ban: ";cin>>x;
	cout<<"Nhap So Trang: ";cin>>y;
	ds.PushBack(Sach(t,a,x,y));
	cout<<endl;
};
void SuaSach(List<Sach> &ds)
{	
	int s;
	cout<<"Ban Muon Sua Quyen May: ";
	cin>>s;
	cout<<"Nhap Thong Tin Ban Muon Sua:"<<endl;
	char t[100],a[100];
	int x,y;
	cout<<"Nhap Ten Sach Sua: ";
	cin.ignore();
	cin.getline(t, 100);
	cout<<"Nhap Ten Tac Gia Sua: ";
	cin.ignore();
	cin.getline(a, 100);
	cout<<"Nhap Nam Xuat Ban Sua: ";cin>>x;
	cout<<"Nhap So Trang Sua: ";cin>>y;
	ds.Change(s, Sach(t,a,x,y));
	cout<<endl;	
}
// void LuuFile(List<Sach> ds)
// {
// 	ofstream fout("DuLieu.txt");
// 	fout<<ds.Count()<<endl;
// 	for(int i=1;i<=ds.Count();i++)
// 	{
// 		Sach a = ds.GetAnItem(i);
// 		fout<<a.GetTenSach()<<endl;
// 		fout<<a.GetTenTg()<<endl;
// 		fout<<a.GetNxb()<<endl;
// 		fout<<a.GetSoTrang()<<endl;
// 	}
// 	fout.close();
// }
void LuuFile(List<Sach> ds)
{
	ofstream fout("DULIEU.TXT");
	fout<<ds.Count()<<endl;
	for(int i = 1; i<= ds.Count(); i++)
	{
		Sach a = ds.GetAnItem(i);
		fout<<a.GetTenSach()<<endl;
		fout<<a.GetTenTg()<<endl;
		fout<<a.GetNxb()<<endl;
		fout<<a.GetSoTrang()<<endl;
	}
	fout.close();		
}