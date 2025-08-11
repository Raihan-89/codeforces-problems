#include<iostream>
using namespace std;
int main()
{
    int p , v , t , n , i , count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>v>>t;
        if(p==1 && v==1 && t==1)
        {
            count++;
        }
        else if((p==1 && v==1) && t==0 )
        {
            count++;
        }
        else if((p==1 && t==1)&&v==0)
        {
            count++;
        }
        else if(p==0 && (v==1 && t==1))
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<count<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}