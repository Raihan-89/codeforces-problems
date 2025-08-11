#include<iostream>
using namespace std;
int main()
{
    int i,n,x=0;
    cin>>n;
    char s[151];
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s[1]=='+')
        {
            x++;
        }
        else if(s[1]=='-')
        {
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}