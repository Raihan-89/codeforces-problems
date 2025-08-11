#include<iostream>
using namespace std;
int main()
{
    int i,j,t,n,x,y;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y>>n;
        if(n%x!=y)
        {
            if(n%x>y)
            cout<<n-(n%x-y)<<endl;
            else
                cout<<(n-x)+(y-(n%x))<<endl;
        }
        else
            cout<<n<<endl;
    }
}