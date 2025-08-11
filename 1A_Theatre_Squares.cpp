#include<iostream>
using namespace std;
int main()
{
    long long m,n,a;
    cin>>m>>n>>a;
    if((m==n)&&(n==a))
        cout<<"1"<<endl;
    else
    {
        if(m%a==0)
            m/=a;
        else
            m=(m/a)+1;
        if(n%a==0)
            n/=a;
        else
            n=(n/a)+1;
        cout<<m*n<<endl;
    }
    return 0;
}