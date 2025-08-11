#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,k,t,n,count=0;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        cin>>s;
        for(j=0;j<s.size();j++)
        {
            if(s[j]==s[j+1])
                j=j;
            else
            {
                for(k=j+1;k<s.size();k++)
                {
                    if(s[j]==s[k])
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        if(count>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        s.clear();
        count=0;
    }
}