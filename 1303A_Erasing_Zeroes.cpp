#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a[101],p,count;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        p=0;
        count=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                a[p]=i;
                p++;
            }
        }
        for(i=0;i<p-1;i++)
        {
            if(a[i+1]-a[i]>1)
                count+=(a[i+1]-a[i]-1);
        }
        cout<<count<<endl;
    }
}