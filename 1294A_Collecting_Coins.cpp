#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,a,b,c,max;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        if(a==b&&b==c)
        {
            if(n%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            max=a;
            if(max<b)
            {
                max=b;
                if(max<c)
                    max=c;
            }
            else if(max<c)
                max=c;
            n-=(max-a);
            n-=(max-b);
            n-=(max-c);
            if(n==0)
                cout<<"YES"<<endl;
            else if(n>0&&n%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}