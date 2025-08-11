#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,j,n,temp,count;
    int a[55];
    cin>>t;
    while(t--)
    {
        cin>>n;
        temp=0;
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i])>1)
            {
                count++;
                break;
            }
        }
        if(count>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}