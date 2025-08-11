#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        int arr[n + 1];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            if(i == 0) f -= min(b,(arr[i] * a));
            else f -= min(b,(abs(arr[i] - arr[i-1]) * a));
        }
        if(f > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}