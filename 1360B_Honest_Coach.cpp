#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int max;
        for(int i = 1; i < n;i++){
            if(i == 1) max = a[i] - a[i-1];
            else if(max > (a[i] - a[i-1])) max = a[i] - a[i-1];
        }
        cout << max << endl;
    }
}