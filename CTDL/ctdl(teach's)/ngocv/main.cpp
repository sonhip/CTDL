#include <iostream>
using namespace std;
#include "list.h"
#include "dathuc.h"

int main()
{
    DaThuc p(4);
    p.Print(); //x^4+x^3+x^2+x+1
    
    p.SetHeSo(2, 5);
    
    p.Print();//x^4+x^3+5x^2+x+1
    
    p.SetHeSo(3, 0);
    
    p.Print(); //x^4+5x^2+x+1
    
    p.SetHeSo(1, -4);
    p.Print(); //x^4+5x^2-4x+1    
    
    
    cout<<p.Cal(2); //In ra 29
    
    p = p*2;
    p.Print();//2x^4+10x^2-8x+2
    
    DaThuc q;
    q.Print();//0
    return 0;
}
