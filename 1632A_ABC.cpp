#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
       if(n>2 || s=="00" || s=="11")
            cout<<"NO"<<endl;
       else
            cout<<"YES"<<endl;
    }
}