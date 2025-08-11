#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a != b && a != c) cout << a << endl;
        else if(a != b && b != c) cout << b << endl;
        else cout << c << endl;
    }
}