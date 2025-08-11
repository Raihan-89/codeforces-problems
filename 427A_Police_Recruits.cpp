#include<iostream>
using namespace std;
int main()
{
    long int i,n,count=0,p=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            p+=a[i];
        else
        {
            if(p>0)
                p+=a[i];
            else
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}