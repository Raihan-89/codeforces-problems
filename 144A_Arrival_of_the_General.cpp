#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l=1,f=1,n,a[101],count1=0,count2=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(j=1;j<=n;j++)
    {
        if(a[j]>=a[f])
        {
            if(a[j]==a[f])
            {
                f=f;
            }
            else
            {
                f=j;
            }
        }
    }
    for(k=1;k<=n;k++)
    {
        if(a[k]<=a[l])
        {
            l=k;
        }
    }
    if((a[1]>=a[f])&&(a[n]<=a[l]))
    {
        cout<<"0"<<endl;
    }
    else if(l<f)
    {
        f=f-1;
        n=n-1;
        l=n-l;
        cout<<l+f<<endl;
    }
    else if(l>f)
    {
        f=f-1;
        l=n-l;
        cout<<l+f<<endl;
    }
    return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l=1,f=1,n,a[101];
    cin>>n;
    for(i=1;i<=n;i++)                          //Shortage than above one.It has also submited.
    {
        cin>>a[i];
    }
    for(j=1;j<=n;j++)
    {
        if(a[j]>=a[f])
        {
            if(a[j]==a[f])
                f=f;
            else
                f=j;
        }
    }
    for(k=1;k<=n;k++)
    {
        if(a[k]<=a[l])
            l=k;
    }
    if((a[1]>=a[f])&&(a[n]<=a[l]))
        cout<<"0"<<endl;
    else if(l<f)
        cout<<(f-1)+(n-1-l)<<endl;
    else if(l>f)
        cout<<(f-1)+(n-l)<<endl;
    return 0;
}*/