#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,sum=0;
    string s;
    cin>>s;
    char n='a';
    for(i=0;i<s.size();i++)
    {
        j=n-s[i];
        if(j<0)
            j*=(-1);
        k=26-j;
        if(j>=k)
            sum+=k;
        else
            sum+=j;
        n=s[i];
    }
    cout<<sum<<endl;
}