#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,t,n,l;
    long long a[200000];
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        l=-1;
        sort(a,a+n);
        for(i=0;i<n-2;i++){
            if(a[i]==a[i+1]&&a[i+1]==a[i+2]){
                l=a[i];
                break;
            }
        }
        cout<<l<<endl;
    }
}
