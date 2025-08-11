#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        char a[3][3];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(a[i][j] == '?'){
                    if(i == 0){
                        if(a[i+1][j] != 'A' && a[i+2][j] != 'A'){
                            cout << "A" << endl;
                            break;
                        }
                        else if(a[i+1][j] != 'B' && a[i+2][j] != 'B'){
                            cout << "B" << endl;
                            break;
                        }
                        else {
                            cout << "C" << endl;
                            break;
                        }
                    }
                    else if(i == 1){
                        if(a[i-1][j] != 'A' && a[i+1][j] != 'A'){
                            cout << "A" << endl;
                            break;
                        }
                        else if(a[i-1][j] != 'B' && a[i+1][j] != 'B'){
                            cout << "B" << endl;
                            break;
                        }
                        else {
                            cout << "C" << endl;
                            break;
                        }
                    }
                    else {
                        if(a[i-1][j] != 'A' && a[i-2][j] != 'A'){
                            cout << "A" << endl;
                            break;
                        }
                        else if(a[i-1][j] != 'B' && a[i-2][j] != 'B'){
                            cout << "B" << endl;
                            break;
                        }
                        else {
                            cout << "C" << endl;
                            break;
                        }
                    }
                }
            }
        }
    }
}