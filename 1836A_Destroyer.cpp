#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,l,q;
    int a[500],b[500];
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            if(a[0]!=0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            l=0;q=0;
            int count2=0;
            for(i=0;i<100;i++){
                int count=0;
                for(j=0;j<n;j++){
                    if(l==a[j]) count++;
                }
                b[q]=count;q++;l++;
            }
            for(i=0;i<q;i++){
                for(j=i;j<q;j++){
                    if(b[i]<b[j]){
                    count2++;break;
                    }
                }
            }
            if(count2>0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}