#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num = 0;
        for(int i = 1; i <= n; i++){
            num += abs(i - (n - i + 1));
        }
        cout << num / 2 + 1 << endl;
    }
}