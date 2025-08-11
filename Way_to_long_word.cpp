#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i , j , n , len=0;
    char str[100];
    cin>>n;
    for(i=0;i<=n;i++)
    {
        gets(str);
        for(j=0;str[j]!=NULL;j++)
        {
            len++;
        }
        len=j;
        if(len>10)
        {
            cout<<str[0]<<(len-2)<<str[len-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
    return 0;
}