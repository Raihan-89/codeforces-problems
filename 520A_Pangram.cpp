#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int i,j,n,count=0;
    char ch='a';
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[j]==ch)
            {
                count++;
                ch=ch+1;
                break;
            }
        }
    }
    if(count==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}