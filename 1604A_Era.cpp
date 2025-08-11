#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,t,n,a[100];
    cin>>t;
    while(t--){
        cin>>n;
        int max=0;
        for(i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]>i){
                if(max<(a[i]-i)){
                    max=a[i]-i;
                }
            }
        }
        cout<<max<<endl;
    }
}