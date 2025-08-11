#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k,num=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        for(j=0;j<k;j++)
        {
            num++;
            if((num%3==0)||(num%10==3))
            {
                num++;
                if(num%10==3||num%3==0)
                    num++;
            }
        }
        cout<<num<<endl;
        num=0;
    }
}