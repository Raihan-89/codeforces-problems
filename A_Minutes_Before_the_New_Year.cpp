#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        int h , m;
        cin >> h >> m;
        int time = (h*60)+m;
        cout << 1440-time << "\n";
    }
}