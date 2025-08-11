#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(i%2>0)
        {
            for(j=0;j<m;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else if(i%2==0)
        {
            if(i%4==0)
            {
                for(k=0;k<m;k++)
                {
                    if(k==0)
                        cout<<"#";
                    else
                        cout<<".";
                }
            }
            else
            {
                for(k=0;k<m;k++)
                {
                    if(k==m-1)
                        cout<<"#";
                    else
                        cout<<".";
                }
            }
            cout<<endl;
        }
    }
}