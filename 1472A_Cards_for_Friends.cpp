#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        int w, h, n;
        cin >> w >> h >> n;
        int c = 0;
        while(w % 2 == 0){
            w /= 2;
            c++;
        }
        while(h % 2 == 0){
            h /= 2;
            c++;
        }
        if(pow(2,c) >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}