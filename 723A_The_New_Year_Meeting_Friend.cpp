#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[5];
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    for(i=0;i<3;i++)
    {
        if(max<a[i])
            max=a[i];
        else if(min>a[i])
            min=a[i];
    }
    cout<<max-min<<endl;
}