#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    long long n, k;
    cin >> n >> k;
    if(n % 2 == 0){
        if(k <= n / 2) cout << k * 2 - 1 << endl;
        else cout << (k - (n / 2)) * 2 << endl;
    }
    else {
        if(k <= n / 2 + 1) cout << k * 2 - 1 << endl;
        else cout << (k - (n / 2 + 1)) * 2 << endl;
    }
}
// 2nd Way to Solve
// int main(){
//     Bismillah
//     long long n , k;
//     cin >> n >> k;
//     if(n % 2 == 0){
//         if(k <= n / 2){
//             long long c = 1;
//             while(--k){
//                 c += 2;
//             }
//             cout << c << endl;
//         }
//         else {
//             k -= (n / 2);
//             long long c = 2;
//             while(--k){
//                 c += 2;
//             }
//             cout << c << endl;
//         }
//     }
//     else {
//         if(k <= n / 2 + 1){
//             long long c = 1;
//             while(--k){
//                 c += 2;
//             }
//             cout << c << endl;
//         }
//         else {
//             k -= (n / 2 + 1);
//             long long c = 2;
//             while(--k){
//                 c += 2;
//             }
//             cout << c << endl;
//         }
//     }
// }