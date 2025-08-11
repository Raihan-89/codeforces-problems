#include<iostream>
using namespace std;
int main()
{
    long long i,j,n,count1=1;
    long long arr[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<n-1;j++)
    {
        if(arr[j]!=arr[j+1])
        {
            count1++;
        }
    }
    cout<<count1<<endl;
    return 0;
}
