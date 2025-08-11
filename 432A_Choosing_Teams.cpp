#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k,count=0;
    cin>>n>>k;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+k<=5)
            count++;
    }
    cout<<count/3<<endl;
}