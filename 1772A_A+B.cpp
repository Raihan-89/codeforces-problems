#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        a=s[0]-48;
        b=s[2]-48;
        cout<<a+b<<endl;
        s.clear();
    }
}