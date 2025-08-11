#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    int sum2 = 0;
    for(int i = 1; i < n; i++){
        sum2 += a[i];
    }
    int sum = a[0], c = 1;
    int i = 1;
    while(sum <= sum2){
        sum += a[i];
        sum2 -= a[i];
        c++; i++;
    }
    cout << c << endl;
}