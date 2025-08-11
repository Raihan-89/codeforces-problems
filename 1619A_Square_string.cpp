#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n;
    string s,s1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s.size()%2==0)
        {
            s1=s.substr(s.size()/2,s.size());
            if((s1+s1)==s)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            s1.clear();
            s.clear();
        }
        else
        {
            cout<<"NO"<<endl;
            s.clear();
        }
    }
}