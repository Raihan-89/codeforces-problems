#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int n;
    cin >> n;
    string s, s2;
    cin >> s >> s2;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cout << min((abs(((int) s[i] - 48) - ((int) s2[i] - 48))),(9 - ((int) s2[i] - 48) + ((int) s[i] - 48) + 2)) << endl;
        sum += min((abs(((int) s[i] - 48) - ((int) s2[i] - 48))),(9 - ((int) s2[i] - 48) + ((int) s[i] - 48) + 2));
    }
    cout << endl;
    cout << sum << endl;
}
//incomplete