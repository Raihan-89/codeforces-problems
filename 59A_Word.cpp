#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i , j , k , l , m;
    int len=0 , count1=0 , count2=0;
    char s[100];
    gets(s);
    for(i=0;s[i]!=NULL;i++)
    {
        len++;
    }
    len=i;
    for(j=0;j<=len;j++)
    {
        if(s[j]>='a' && s[j]<='z')
        {
            count1++;
        }
        if(s[j]>='A' && s[j]<='Z')
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        for(k=0;k<=len;k++)
        {
            if(s[k]>='A' && s[k]<='Z')
            {
                s[k]=(s[k]+32);
            }
        }
        cout<<s<<endl;
    }
    else if (count2>count1)
    {
        for(l=0;l<=len;l++)
        {
            if (s[l]>='a' && s[l]<='z')
            {
                s[l]=(s[l]-32);
            }
        }
        cout<<s<<endl;
    }
    else
    {
        for(m=0;m<=len;m++)
        {
            if(s[m]>='A' && s[m]<='Z')
            {
                s[m]=(s[m]+32);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}