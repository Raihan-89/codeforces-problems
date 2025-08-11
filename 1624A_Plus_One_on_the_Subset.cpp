#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,t,n,a[50];
    cin>>t;
    while(t--){
        cin>>n;
        int max=0,min=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i==0){
                max=a[i];
                min=a[i];
            }
            else{
                if(max<a[i]) max=a[i];
                if(min>a[i]) min=a[i];
            }
        }
        cout<<max-min<<endl;
    }
}