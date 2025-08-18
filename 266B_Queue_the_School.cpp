#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
int main(){
    Bismillah
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    if(n == 1){
        cout << s << endl;
    }else{
        while(t--){
            for(int i = 0; i < s.size() - 1; i++){
                if(s[i] == 'B' && s[i + 1] == 'G'){
                    swap(s[i], s[i+1]);
                    i++;
                }
            }
        }
        cout << s << endl;
    }
}