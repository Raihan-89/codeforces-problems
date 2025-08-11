#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,count;
    string s,s1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        cin>>s1;
        count=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                if(s1[i]!='R')
                    count++;
            }
            else if(s1[i]=='R')
            {
                if(s[i]!='R')
                    count++;
            }
        }
        if(count>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}