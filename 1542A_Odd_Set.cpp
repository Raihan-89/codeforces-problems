#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,n,a[200];
    cin>>t;
    while(t--){
        cin>>n;
        int count=0,e=0,o=0;
        for(i=0;i<2*n;i++){
            cin>>a[i];
            if(a[i]%2==0) e++;
            else o++;
        }
        if(e==o) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}