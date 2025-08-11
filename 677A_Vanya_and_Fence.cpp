#include<iostream>
using namespace std;
int main()
{
    long long i,j,count1=0,count2=0;
    long long n,h;
    long long arr[1000];
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]<=h)
        {
            count1++;
        }
        if(arr[j]>h)
        {
            count2+=2;
        }
    }
    cout<<count1+count2<<endl;
    return 0;
}