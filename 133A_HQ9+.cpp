#include<iostream>
using namespace std;
int main()
{
    int i,j,len=0,count=0;
    char s[101];
    gets(s);
    for(i=0;s[i]!=NULL;i++)
    {
        len++;
    }
    len=i;
    for(j=0;j<len;j++)
    {
        if(s[j]=='H' || s[j]=='Q' || s[j]=='9')
        {
            count++;
        }
    }
    if(count>0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}