#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x % 3 > 0) {
            if((x/3+1)+(x/3*2) == x) cout << x / 3 + 1 << " " << x / 3 << endl;
            else cout << x / 3 << " " << x / 3 + 1 << endl;
        }
        else cout << x/3 << " " << x/3 << endl;
    }
}