#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,t,n,max,count;
    int a[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        max=0;count=0;
        for(i=0;i<n;i++){
            if(a[i]==0) count++;
            else if(a[i]==1) count=0;
            if(max<count) max=count;
        }
        cout<<max<<endl;
    }
}