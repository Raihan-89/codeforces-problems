#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,p=0,count=1;
    string s,s1;
    cin>>s>>s1;
    for(i=0;i<s1.size();i++){
        if(s[p]==s1[i]){
            p++;count++;
        }
    }
    cout<<count<<endl;
}