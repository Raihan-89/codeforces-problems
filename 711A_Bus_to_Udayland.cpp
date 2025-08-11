#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0;
    char s[20000];
    cin>>n;
    for(i=1;i<=(n*5);i++){
        cin>>s[i];
    }
    for(i=1;i<n*5;i++){
        if(i%5!=0)
        if(s[i]=='O'&&s[i+1]=='O'){
            s[i]='+';
            s[i+1]='+';
            count++;
            break;
        }
    }
    if(count>0){
        cout<<"YES"<<endl;
        for(i=1;i<=n*5;i++){
            if(i%5==0){
                cout<<s[i]<<endl;
            }
            else cout<<s[i];
        }
    }
    else cout<<"NO"<<endl;
}