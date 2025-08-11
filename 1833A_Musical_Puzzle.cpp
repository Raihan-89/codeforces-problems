#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n;
    string s,s1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        set<string>s2;
        for(i=0;i<s.size();i++){
            s1+=s[i];
            s1+=s[i+1];
            s2.insert(s1);
            s1.clear();
        }
        cout<<s2.size()-1<<endl;
        s.clear();
        s2.clear();
    }
}