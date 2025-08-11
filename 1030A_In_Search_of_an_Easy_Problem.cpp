#include<iostream>
using namespace std;
int main()
{
    int i,j,n,count=0;
    int arr[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]==1)
        {
            count++;
        }
    }
    if(count>0)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

    return 0;
}