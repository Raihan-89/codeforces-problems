#include<iostream>
using namespace std;
int main()
{
    int i, j,n,temp=0;
    cin>>n;
    temp=n;
    if(n==1)
    {
        cout<<"I hate it";
    }
    else if(n%2==0)
    {
        for(i=1;i<=temp;i++)
        {
            if(n%2==0)
            {
                cout<<"I hate ";
                n--;
            }
            else if(n%2==1)
            {
                cout<<"I love ";
                n--;
            }
            if(i!=temp)
            {
                cout<<"that ";
            }
            else
            {
                cout<<"it";
            }
        }
    }
    else if(n%2==1)
    {
        for(i=1;i<=temp;i++)
        {
            if(n%2==0)
            {
                cout<<"I love ";
                n--;
            }
            else if(n%2==1)
            {
                cout<<"I hate ";
                n--;
            }
            if(i!=temp)
            {
                cout<<"that ";
            }
            else
            {
                cout<<"it";
            }
        }
    }
    return 0;
}