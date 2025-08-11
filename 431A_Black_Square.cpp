#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,a,b,c,d,sum=0;
    string s;
    cin>>a>>b>>c>>d;
    cin>>s;
    for(i=0;i<s.size();i++){
        if((int)s[i]-48==1) sum+=a;
        else if((int)s[i]-48==2) sum+=b;
        else if((int)s[i]-48==3) sum+=c;
        else sum+=d;
    }
    cout<<sum<<endl;
}