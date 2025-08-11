#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cin>>n;
    int h[n],a[n];
    for(i=0;i<n;i++)
    {
        cin>>h[i]>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(h[i]==a[j])
                count++;
        }
    }
    cout<<count<<endl;
}