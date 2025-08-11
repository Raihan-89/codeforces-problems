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
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'D') cout << "U";
            else if(s[i] == 'U') cout << "D";
            else cout << s[i];
        }
        cout << endl;
    }
}