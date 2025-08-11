#include<iostream>
using namespace std;
int main()
{
    int i,n,max,min,count=0;
    int a[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            count++;
        }
        else if(min>a[i])
        {
            min=a[i];
            count++;
        }
    }
    cout<<count<<endl;
}