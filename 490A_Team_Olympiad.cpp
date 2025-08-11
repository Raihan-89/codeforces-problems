#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0,count2=0,count3=0,sum,total=0,q=0,r=0,s=0;
    cin>>n;
    int a[n+1];
    int b[5001];
    int c[5001];
    int d[5001];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            count++;
        else if(a[i]==2)
            count2++;
        else if(a[i]==3)
            count3++;
    }
    sum=count+count2+count3;
    for(i=0;i<sum;i++)
    {
        if(count!=0&&count2!=0&&count3!=0)
        {
            count--;
            count2--;
            count3--;
            total++;
        }
    }
    cout<<total<<endl;
    for(i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            b[q]=i;
            q++;
        }
        else if(a[i]==2)
        {
            c[r]=i;
            r++;
        }
        else if(a[i]==3)
        {
            d[s]=i;
            s++;
        }
    }
    for(i=0;i<total;i++)
    {
        cout<<b[i]<<" "<<c[i]<<" "<<d[i]<<endl;
    }
}