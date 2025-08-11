#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,r,g;
    string s;
    cin>>t;
    while(t--){
        cin>>s;r=0;g=0;
        map<char,int> m;
        for(i=0;i<s.size();i++){
            m[s[i]]++;
        }
        map<char,int> :: iterator iter;
        for(iter=m.begin();iter!=m.end();iter++){
            if((*iter).second>=2){
                r++;g++;
            }
            else{
                if(r>g)g++;
                else r++;
            }
        }
        if(r>g)r--;
        cout<<r<<endl;
    }
}