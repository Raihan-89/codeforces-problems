#include<iostream>
using namespace std;
int main()
{
    int i,n,count1=0,count2=0;
    char s[1000000];
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            count1++;
        if(s[i]=='D')
            count2++;
    }
    if(count1>count2)
        cout<<"Anton"<<endl;
    else if(count2>count1)
        cout<<"Danik"<<endl;
    else if(count1==count2)
        cout<<"Friendship"<<endl;
    return 0;
}