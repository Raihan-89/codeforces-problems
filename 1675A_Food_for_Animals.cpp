#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>x>>y;
        if(a<x) c-=(abs(a-x));
        if(b<y) c-=(abs(b-y));
        if(c>=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}