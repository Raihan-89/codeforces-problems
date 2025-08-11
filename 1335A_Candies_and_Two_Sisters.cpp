#include<iostream>
using namespace std;
int main()
{
    long int i,t,n,ans;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        ans=0;
        if(n%2==0)
        {
            ans=(n/2)-1;
            cout<<ans<<endl;
        }
        else
        {
            ans=n/2;
            cout<<ans<<endl;
        }
    }
}