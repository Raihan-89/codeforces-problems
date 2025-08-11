#include<iostream>
using namespace std;
int main()
{
    long int i,n,k,w,sum=0,m;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        m=0;
        m=i*k;
        sum=sum+m;
    }
    if(sum<=n)
        cout<<"0"<<endl;
    else
        cout<<sum-n<<endl;
    return 0;
}