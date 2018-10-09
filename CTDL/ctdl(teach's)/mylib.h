#include <fstream>
using namespace std;

int ThucDon()
{
    cout<<"Chuong trinh quan ly so\n";
    cout<<"1. Nap day so tu file\n";
    cout<<"2. Tim 1 so\n";
    cout<<"3. Sinh so ghi ra file\n";
    cout<<"0. Ket thuc\n";
    cout<<"Moi chon chuc nang: ";
    int c;
    cin>>c;
    return c;
}

void NapDaySoTuFile(int a[], int &N)
{
    char fileName[100];
    cout<<"Nhap ten file chua du lieu: ";
    cin.ignore();
    cin.getline(fileName, 100);
    
    ifstream fin(fileName);
    N = 0;
    while (!fin.eof())
    {
        fin>>a[N++];
        cout<<a[N-1];
    }   
    
    fin.close();    
}

void SinhSoGhiRaFile()
{
    char fileName[100];
    cout<<"Nhap ten file chua du lieu: ";
    cin.ignore();
    cin.getline(fileName, 100);
    
    int n;
    cout<<"Ban muon sinh bao nhieu so: ";
    cin>>n;
    
    ofstream fout(fileName);
    for(int i = 0; i < n; i++)
    {
        fout<<(i+1)% 23<<" ";
    }
    fout.close();
}
