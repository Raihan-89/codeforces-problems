#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        if(n==5)
        {
            if(s[0]=='T'&&s[1]=='i'&&s[2]=='m'&&s[3]=='r'&&s[4]=='u')
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}