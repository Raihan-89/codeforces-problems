#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,len=0;
    string str1,str2;
    cin>>str1;
    cin>>str2;
    for(i=0;str1[i]!=NULL;i++)
    {
        len++;
    }
    len=i;
    for(i=0;i<len;i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
            str1[i]+=32;
        if(str2[i]>='A' && str2[i]<='Z')
            str2[i]+=32;
    }
    if(str1==str2)
        cout<<"0"<<endl;
    else if(str1>str2)
        cout<<"1"<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}