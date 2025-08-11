#include<iostream>
using namespace std;
int main()
{
    int i,a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"1"<<endl;
    }
    else
    {
        for(i=1;i<1000;i++)
        {
            a=a*3;
            b=b*2;
            if(a>b)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}