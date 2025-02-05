#include<iostream>
using namespace std;
int main()
{
    int n;
   n=67;
    int x=n,r=0,s=0,y=1;
    while(x)
    {
        r=x&1;
        s=r*y+s;
        y*=10;
        x>>=1;
    }
    cout<<"binary : "<<s<<endl;
    return 0;
}
