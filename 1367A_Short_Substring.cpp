#include<iostream>
#include<string>
using namespace std;
int main()
{
    long int i,n,j;
    string s,s2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<s.size();j++)
        {
            if(j==0)
                s2+=s[0];
            else if(j!=s.size()-1)
            {
                s2+=s[j];
                j++;
            }
            else
                s2+=s[j];
        }
        cout<<s2<<endl;
        s2.clear();
    }
}