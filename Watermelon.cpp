#include<iostream>

using namespace std;

int main()
{
    int i,w,count=0;
    cin>>w;
    for(i=2;i<w;i++)
    {
        if(w%i==0)
        {
            if((w/i)%2==0)
            {
                count++;
            }
        }
    }
    if(count>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}