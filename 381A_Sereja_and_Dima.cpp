#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[1001],s=0,d=0,p,q;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    p=1;
    q=n;
    for(i=1;i<=n;i++)
    {
        if(i%2>0)
        {
            if(a[p]>a[q])
            {
                s+=a[p];
                p++;
            }
            else
            {
                s+=a[q];
                q--;
            }
        }
        else 
        {
            if(a[p]>a[q])
            {
                d+=a[p];
                p++;
            }
            else
            {
                d+=a[q];
                q--;
            }
        }
    }
    cout<<s<<" "<<d<<endl;
}