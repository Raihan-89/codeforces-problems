#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,k,c=0;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        k+=i*5;
        if(k>240) break;
        else c++;
    }
    cout<<c<<endl;
}