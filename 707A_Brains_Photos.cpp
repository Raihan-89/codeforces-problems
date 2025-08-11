#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,count1=0;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]== 'C'||a[i][j]=='M'||a[i][j]=='Y')
                count1++;
        }
    }
    if(count1>0)
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;
}