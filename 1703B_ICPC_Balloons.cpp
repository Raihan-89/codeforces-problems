#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    string s;
    cin>>t;
    while(t--){
        cin>>n;cin>>s;
        set<char> s1;
        for(i=0;i<s.size();i++){
            s1.insert(s[i]);
        }
        cout<<s1.size()*2+(s.size()-s1.size())<<endl;
        s.clear();
        s1.clear();
    }
}