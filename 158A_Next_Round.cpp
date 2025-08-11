#include<iostream>
using namespace std;
int main()
{
    int i,n,k,count=0;
    int a[100];
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>=a[k])
        {
            if(a[i]>0)
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}