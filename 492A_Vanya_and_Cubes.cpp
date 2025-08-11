#include<iostream>
using namespace std;
int main()
{
    int i,n,m,sum=0,count=0;
    cin>>n;
    m=n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
        if(sum<=m)
        {
            m-=sum;
            count++;
        }
        else
            break;
    }
    cout<<count<<endl;
}