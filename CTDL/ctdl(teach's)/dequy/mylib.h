int GiaiThua(int N)
{
    if (N == 1)
        return 1;
        
    return N*GiaiThua(N-1);
    
    /*int tich = 1;
    for(int i = 2; i<=N; i++)
        tich = tich * i;
    return tich;*/
}

void Hello()
{
    cout<<"Hello\n";
    Hello();
}

int Fibo(int N)
{
    if (N <= 2)
        return 1;
    return Fibo(N-2) + Fibo(N-1);
}

void ThapHaNoi(int N, char c1, char c2, char c3)
{
    if (N == 1)
    {
        cout<<c1<<" -- > "<<c3<<endl;
    }    
    else
    {
        ThapHaNoi(N-1, c1, c3, c2);
        ThapHaNoi(1, c1, c2, c3);
        ThapHaNoi(N-1, c2, c1, c3);
    }


}

void InBanCo(char bc[][100], int N)
{
    for(int i = 1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
            cout<<bc[i-1][j-1]<<" ";
        cout<<endl;
    }
    cout<<"------------------------------------";
}
bool XepDuocHau(int x, int y, char bc[][100], int N)
{
    for(int j = 1; j<y; j++)
        if (bc[x-1][j-1] == 'H')
            return false;
    for(int i = x-1, j=y-1; i>=1, j>=1; i--, j--)
    {
        if (bc[i-1][j-1] == 'H')
            return false;
    }
    for(int i = x+1, j=y-1; i<=N, j>=1; i++, j--)
    {
        if (bc[i-1][j-1] == 'H')
            return false;
    }
    return true;
}
void XepHau(int c, char bc[][100], int N)
{
    if (c > N)
    {
        InBanCo(bc, N);
    }
    else
    {
        for(int i = 1; i<=N; i++)
        {
            if (XepDuocHau(i, c, bc, N))
            {
                bc[i-1][c-1] = 'H';
                XepHau(c+1, bc, N);
                bc[i-1][c-1] = '-';    
            }
        }
    }
}


















