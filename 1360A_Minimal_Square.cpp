#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==b) cout<<(a+b)*(a+b)<<endl;
        else{
            if(a>b){
                b*=2;
                cout<<max(a,b)*max(a,b)<<endl;
            }
            else{
                a*=2;
                cout<<max(a,b)*max(a,b)<<endl;
            }
        }
    }
}