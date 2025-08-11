#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,total;
    cin>>t;
    while(t--)
    {
        cin>>x;
        total=0;
        total=(10*(x%10));
        if(x/10==0)
        {
            total-=9;
            cout<<total<<endl;
        }
        else if(x/10<=9)
        {
            total-=7;
            cout<<total<<endl;
        }
        else if(x/100<=9)
        {
            total-=4;
            cout<<total<<endl;
        }
        else if(x/1000<=9)
            cout<<total<<endl;
    }
}