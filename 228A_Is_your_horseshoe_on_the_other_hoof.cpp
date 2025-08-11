#include<iostream>
using namespace std;
int main()
{
    long int i,j,a[10],count=0,m;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    if((a[0]==a[1])&&(a[1]==a[2])&&(a[2]==a[3]))
        cout<<"3"<<endl;
    else
    {
        for(i=0;i<4;i++)
        {
            m=a[i];
            for(j=0;j<4;j++)
            {
                if(i!=j)
                {
                    if(m==a[j])
                        count++;
                }
            }
        }
        if(count>0)
        {
            if(count==6)
                cout<<count/3<<endl;
            else
                cout<<count/2<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}