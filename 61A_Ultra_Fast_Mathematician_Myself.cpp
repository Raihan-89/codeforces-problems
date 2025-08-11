#include<iostream>
using namespace std;
int main()
{
    long long i,j,k,len=0;
    char a[101],b[101];
    long long c[101];
    cin>>a;
    cin>>b;
    for(i=0;a[i]!=NULL;i++)
    {
        len++;
    }
    len=i;
    for(j=0;j<len;j++)
    {
        if((a[j]=='1'&&b[j]=='1')||(a[j]=='0'&&b[j]=='0'))
            c[j]=0;
        if((a[j]=='0'&&b[j]=='1')||(a[j]=='1'&&b[j]=='0'))
            c[j]=1;
    }
    for(k=0;k<len;k++)
    {
        cout<<c[k];
    }
    return 0;
}