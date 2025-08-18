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
        int max_num = 0, arr1[n], arr2[n];
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i < n; i++){
            cin >> arr2[i];
        }
        for(int i = 0; i < n; i++){
            if(arr1[i] > arr2[i]){
                max_num += (arr1[i] - arr2[i]);
            }
        }
        cout << max_num + 1 << endl;
    }
}