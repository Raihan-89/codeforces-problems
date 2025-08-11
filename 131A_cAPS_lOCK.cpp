#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    long int i;
    long int count1=0,count2=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            count1++;
    }
    if(count1==s.size())
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    else if(s[0]>='a'&&s[0]<='z')
    {
        for(i=1;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                count2++;
        }
        if(count2==(s.size()-1))
        {
            transform(s.begin(),s.end(),s.begin(),::tolower);
            s[0]-=32;
            cout<<s<<endl;
        }
        else
            cout<<s<<endl;
    }
    else
        cout<<s<<endl;
    return 0;
}