#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b,count1=0,count2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            count1++;
        else if(b>a)
            count2++;
    }
    if(count1>count2)
        cout<<"Mishka"<<endl;
    else if(count2>count1)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
}