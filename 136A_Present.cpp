#include<iostream>
using namespace std;
int main()
{
    long long i,j,k,temp=0,n;
    long long arr1[100],arr2[100];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr1[i];
    }
    for(j=1;j<=n;j++)
    {
        temp=arr1[j];
        arr2[temp]=j;
    }
    for(k=1;k<=n;k++)
    {
        cout<<arr2[k]<<" ";
    }
    return 0;
}