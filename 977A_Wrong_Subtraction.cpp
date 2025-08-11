#include<iostream>
using namespace std;
int main()
{
    long long i , n ,k;
    cin>>n>>k;
    for(i=0;i<k;i++)
    {
        if(n%10!=0)
            n--;
        else
            n=n/10;
    }
    cout<<n<<endl;
    return 0;
}