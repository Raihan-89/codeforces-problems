#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int s;
        cin >> s;
        int sum=0,a[10],p=0;
        for(int i=9;i>=1;i--){
            sum+=i;
            if(sum<=s){
                a[p]=i;
                p++;
            }
            else sum-=i;
        }
        for(int i=p-1;i>=0;i--){
            cout<<a[i];
        }
        cout<<endl;
    }
}