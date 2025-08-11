#include<iostream>
using namespace std;
int main()
{
    int i,t,a,b,c,d,count;
    cin>>t;
    for(i=0;i<t;i++)
    {
        count=0;
        cin>>a>>b>>c>>d;
        if(b>a)
            count++;
        if(c>a)
            count++;
        if(d>a)
            count++;
        cout<<count<<endl;
    }
}