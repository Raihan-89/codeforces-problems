#include<iostream>
using namespace std;
int main()
{
    int i,n,total=0,max=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(max<a[i])
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        total+=(max-a[i]);
    }
    cout<<total<<endl;
}