#include<iostream>
using namespace std;
int main()
{
    long long i,j,len1=0,len2=0;
    long long count1=0;
    char s1[101];
    char s2[101];
    gets(s1);
    gets(s2);
    for(i=0;s1[i]!=NULL;i++);
    {
        len1++;
    }
    len1=i;
    len2=i;
    for(j=0;s1[j]!=NULL;j++)
    {
        if(s1[j]==s2[len1-1])
        {
            count1++;
        }
        len1--;
    }
    if(count1==len2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}