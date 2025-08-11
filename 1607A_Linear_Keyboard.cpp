#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j;
    string s,s1;
    cin>>t;
    while(t--){
        cin>>s1;cin>>s;
        int a=0,b=0,max=0;
        for(i=0;i<s.size()-1;i++){
            for(j=0;j<s1.size();j++){
                if(s[i]==s1[j]) a=j;
                if(s[i+1]==s1[j])b=j;
            }
            if(a>=b) max+=(a-b);
            else max+=(b-a);
        }
        cout<<max<<endl;
    }
}