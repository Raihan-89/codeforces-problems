#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,count=0;
    string s,S1,s1,s2,s3,s4,s5;
    cin>>s>>s1>>s2>>s3>>s4>>s5;
    S1=s1+s2+s3+s4+s5;
    for(i=0;i<S1.size();i++){
        if((s[0]==S1[i])||(s[1]==S1[i])){
            count++;break;
        }
    }
    if(count>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}