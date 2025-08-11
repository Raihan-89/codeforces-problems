#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0;
    cin>>n;
    for(i=1;i<=9;i++)
    {
        if(n>=100)
        {
            count+=(n/100);
            n=n%100;
        }
        else if(n>=20)
        {
            count+=(n/20);
            n=n%20;
        }
        else if(n>=10)
        {
            count+=(n/10);
            n=n%10;
        }
        else if(n>=5)
        {
            count+=(n/5);
            n=n%5;
        }
        else
        {
            count+=(n/1);
            n=n%1;
        }
        if(n==0)
            break;
    }
    cout<<count<<endl;
}