#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,r,c,count=0;
    int a[6][6];
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                r=i;
                c=j;
            }
        }
    }
    for(i=1;i<=5;i++)
    {
        if(r<3)
        {
            r++;
            count++;
        }
        else if(r>3)
        {
            r--;
            count++;
        }
        if(c<3)
        {
            c++;
            count++;
        }
        else if(c>3)
        {
            c--;
            count++;
        }
        if(r==3 && c==3)
            break;
    }
    cout<<count<<endl;
}