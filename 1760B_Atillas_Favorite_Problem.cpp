#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;cin>>s;
        int max=0;
        for(i=0;i<s.size();i++){
            if(max<((int)s[i]-96))
                max=(int)s[i]-96;
        }
        cout<<max<<endl;
    }
}