#include<iostream>
#include<stdio.h>
#define MAX 1000
using namespace std;
int main()
{
    char str[MAX];
    gets(str);
    if(str[0]>='A' && str[0]<='Z')
    {
        cout<<str<<endl;
    }
    else if(str[0]>='a' && str[0]<='z')
    {
        str[0]=str[0]-32;
        cout<<str<<endl;
    }
    else
    {
        cout<<str<<endl;
    }
    return 0;
}