#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    long int i,count=0;
    string s,s2;
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            s2+=s[i];
    }
    sort(s2.begin(),s2.end());
    for(i=0;i<s2.size();i++)
    {
        if(s2[i]==s2[i+1])
            i=i;
        else
            count++;
    }
    cout<<count<<endl;
}