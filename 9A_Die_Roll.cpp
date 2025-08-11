#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,w;
    cin>>l>>w;
    int p=max(l,w);
    p--;
    if((6-p)%2==0){
        if(6-(6-p)==0) cout<<"1/1"<<endl;
        else cout<<(6-p)/2<<"/"<<6/2<<endl;
    }
    else{
        if((6-p)%3==0) cout<<p/3<<"/"<<6/3<<endl;
        else cout<<(6-p)<<"/"<<6<<endl;
    }
}