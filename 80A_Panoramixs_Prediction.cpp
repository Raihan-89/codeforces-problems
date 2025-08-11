#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int n, m;
    cin >> n >> m;
    int c = 0;
    for(int i = 2; i < m; i++){
        if(m % i == 0) c++;
    }
    if(c > 0) cout << "NO" << endl;
    else {
        for(int i = n+1; i < m; i++){
            int c = 0;
            for(int j = 2; j < i; j++){
                if(i % j == 0) c++;
            }
            if(c == 0){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
}