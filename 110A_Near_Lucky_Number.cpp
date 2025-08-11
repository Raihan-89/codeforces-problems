#include<iostream>
using namespace std;
int main()
{
    long long n , r ;
    int count=0;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        if(r==7 || r==4)
        {
            count++;
        }
        n/=10;
    }
    if(count==4 || count==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}