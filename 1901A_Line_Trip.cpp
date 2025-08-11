#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int d = 0, p = 0, max = 0;
        while(n--){
            int a;
            cin >> a;
            d = abs(p-a);
            if(max < d) max = d;
            p = a;
        }
        if(max < 2*abs(x-p)) cout << 2*abs(x-p) << endl;
        else cout << max << endl;
    }
}