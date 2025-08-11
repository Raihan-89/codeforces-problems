#include<iostream>
using namespace std;
int main()
{
    long int i,n,a,b,max=0,total=0;
    long int t[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        total-=a;
        total+=b;
        t[i]=total;
    }
    max=t[0];
    for(i=0;i<n;i++)
    {
        if(max<t[i])
            max=t[i];
    }
    cout<<max<<endl;
    return 0;
}