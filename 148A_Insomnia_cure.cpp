#include<iostream>
using namespace std;
int main()
{
    long int i,k,l,m,n,count=0;
    long int d;
    cin>>k>>l>>m>>n;
    cin>>d;
    for(i=1;i<=d;i++)
    {
        if((i%k==0)||(i%l==0)||(i%m==0)||(i%n==0))
            count++;
    }
    cout<<count<<endl;
}
