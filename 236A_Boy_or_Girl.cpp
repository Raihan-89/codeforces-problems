#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int i,count=0;
    string str1;
    cin>>str1;
    sort(str1.begin(),str1.end());
    for(i=0;i<str1.size();i++)
    {
        if(str1[i]!=str1[i+1])
           count++;
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}