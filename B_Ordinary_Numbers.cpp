#include<bits/stdc++.h>
using namespace std;
#define BismillahirRahmanirRahim ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    BismillahirRahmanirRahim
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string num=to_string(n);
        int count=0;
        for(int j=0;j<num.size()-1;j++){
                if(num[j]!=num[j+1]){
                    count++;break;
                }
        }
        if(count==0){
            int count1=0;
           while(n!=0){
                if((n/10)>=1){
                    count1+=9;
                    n/=10;
                }
                else{
                    count1+=(n%10);
                    break;
                }
            }
            cout << count1 << "\n";
        }
        else{
            int count2=0;
            while(n!=0){
                if((n/10)>=1){
                    count2+=9;
                    n/=10;
                }
                else{
                    count2+=((n%10)-1);
                    break;
                }
            }
            cout << count2 << "\n";
        }
    }
}
//Not Complete
