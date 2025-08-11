#include<iostream>
using namespace std;
int main()
{
    long int i,j,k=1,n,p,q;
    long int a[101],b[101],c[1001],count=0;
    cin>>n;
    cin>>p;
    for(i=0;i<p;i++)
    {
        cin>>a[i];
        c[i]=a[i];
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>b[i];
    }
    for(i=0,j=p;j<(p+q)&&i<q;i++,j++)
    {
        c[j]=b[i];
    }
    for(i=0;i<(p+q);i++)
    {
        for(j=0;j<(p+q);j++)
        {
            if(c[j]==k)
            {
                count++;
                k++;
            }
        }
    }
    if(count==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}