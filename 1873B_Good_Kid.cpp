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
        int max, index = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i == 0) max = a[i];
            else {
                if(max > a[i]) {
                    max = a[i];
                    index = i;
                }
            }
        }
        a[index] += 1;
        int total = 1;
        for(auto it: a){
            total *= it;
        }
        cout << total << endl;
    }
}