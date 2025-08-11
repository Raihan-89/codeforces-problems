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
        int sum = 0 , odd = 0, even = 0;
        while(n--){
            int x;
            cin >> x;
            if(x % 2 == 0) even++;
            else odd++;
            sum += x;
        }
        if(sum % 2 != 0) cout << "YES" << endl;
        else if(odd > 0 && even > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}