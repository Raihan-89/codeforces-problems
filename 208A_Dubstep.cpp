#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string s,s2;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i+=2;
        }
        else
        {
            s2+=s[i];
            if(s[i+1]=='W'&&s[i+2]=='U'&&s[i+3]=='B')
            {
                s2+=' ';
            }
        }
    }
    cout<<s2<<endl;
}