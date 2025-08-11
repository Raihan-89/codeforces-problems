#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,count,total;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        count=0;
        sort(s.begin(),s.end());
        for(i=0;i<s.size();i++){
            if(s[i]!=s[i+1]){
                count++;
                if(count>(s.size()/2)){
                    total=s.size()/2;
                    break;
                }
                else total=count;
            }
        }
        cout<<total<<endl;
        s.clear();
    }
}