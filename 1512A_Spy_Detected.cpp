#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,pos,num,count;
    int a[105];
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(a[i]==a[j])
                {
                    num=a[i];
                    count++;
                    break;
                }
            }
            if(count>0)
                    break;
        }
        for(i=1;i<=n;i++)
        {
            if(num!=a[i])
            {
                pos=i;
                break;
            }
        }
        cout<<pos<<endl;
    }
}