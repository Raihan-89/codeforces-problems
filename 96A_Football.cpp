#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,len=0,count=1;
    char str[100];
    gets(str);
    for(i=0;str[i]!=NULL;i++)
    {
        len++;
    }
    len=i;
    for(j=0;j<len;j++)
    {
        if(str[j]=='0' && str[j+1]=='0' && str[j+2]=='0' && str[j+3]=='0' && str[j+4]=='0' && str[j+5]=='0' && str[j+6]=='0')
            count++;
        else if(str[j]=='1' && str[j+1]=='1' && str[j+2]=='1' && str[j+3]=='1' && str[j+4]=='1' && str[j+5]=='1' && str[j+6]=='1')
            count++;
    }
    if(count>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}