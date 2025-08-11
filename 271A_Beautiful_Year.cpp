#include<iostream>
using namespace std;
int main()
{
    int i,y,a,b,c,d;
    cin>>y;
    for(i=0;i<1000;i++)
    {
        y++;
        a=y/1000;
        b=(y/100)%10;
        c=(y/10)%10;
        d=y%10;
        if((a!=b && a!=c && a!=d)&&(b!=a &&b!=c && b!=d)&&(c!=a && c!=b && c!=d)&&(d!=a && d!=b && d!=c))
        {
            cout<<y<<endl;
            break;
        }
    }
    return 0;
}