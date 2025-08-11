#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,t,n,a[40];
    cin>>t;
    while(t--){
        cin>>n;
        int odd=0,even=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i%2!=a[i]%2){
                if(a[i]%2==0) even++;
                else odd++;
            }
        }
        if(even==odd) cout<<even<<endl;
        else cout<<"-1"<<endl;
    }
}