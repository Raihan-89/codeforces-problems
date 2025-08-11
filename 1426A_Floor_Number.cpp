#include<iostream>
using namespace std;
int main()
{
    int i,t,n,x,count=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n<=2)
            cout<<count<<endl;
        else
        {
            n-=2;
            if(n%x>0)
                cout<<n/x+2<<endl;
            else
                cout<<n/x+1<<endl;
        }
    }
}