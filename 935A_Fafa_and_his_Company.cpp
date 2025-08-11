#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,n,count=0;
    cin>>n;
    l=n;
    for(i=1;i<n;i++)
    {
        l--;
        if(l%i==0)
            count++;
    }
    cout<<count<<endl;
}