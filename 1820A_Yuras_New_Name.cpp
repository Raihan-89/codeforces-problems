#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n,j,count=0;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        count=0;
        for(j=0;j<s.size();j++)
        {
            if(s[j]=='^')
            {
                if(s.size()==1)
                {
                    count++;
                }
                if(s[j+1]=='^')
                {
                    j=j;
                }
                else if(s[j+1]=='_')
                {
                    j=j;
                }
            }
            else if(s[j]=='_')
            {
                if(j==0)
                {
                    count++;
                    if(s[j+1]!='^')
                    {
                        count++;
                    }
                }
                else if(s[j+1]!='^')
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}