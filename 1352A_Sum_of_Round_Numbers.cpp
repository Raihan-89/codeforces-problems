#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,t,n,p,q=0,count=0;
    int a[1000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=1;j<=6;j++)
        {
            p=floor(pow(10,j)+.5);
            a[q]=(n%p);
            n-=a[q];
            if(a[q]!=0)
                count++;
            q++;
        }
        cout<<count<<endl;
        for(k=0;k<6;k++)
        {
            if(a[k]!=0)
                cout<<a[k]<<" ";
        }
        cout<<endl;
        q=0;
        count=0;
    }
}