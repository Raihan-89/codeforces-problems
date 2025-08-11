#include<iostream>
using namespace std;
int main()
{
    int i,j,len=0;
    char a[101],b[101];
    cin>>a;
    cin>>b;
    for(i=0;a[i]!=NULL;i++)
    {
        len++;
    }
    len=i;
    for(j=0;j<len;j++)
    {
        if(a[j]==b[j])
        {
            cout<<"0";
        }
        else
            cout<<"1";
    }
    return 0;
}