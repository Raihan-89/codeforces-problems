#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j;
    char s1;
    string s;
    cin>>s;
    for(i=0;i<s.size();i=i+2)
    {
        for(j=i+2;j<s.size();j=j+2)
        {
            if(s[i]>s[j])
            {
                s1=s[i];
                s[i]=s[j];
                s[j]=s1;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}