#include<iostream>
using namespace std;
int main()
{
    long int t,a,b,count,rm;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else{
            rm=a%b;
            count=b-rm;
            cout<<count<<endl;
        }
    }
}