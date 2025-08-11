#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    string s,s1;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]=='-'){
            if(s[i+1]=='.'){
                s1+="1";i++;
            }
            else{
                s1+="2";i++;
            }
        }
        else s1+="0";
    }
    cout<<s1<<endl;
}