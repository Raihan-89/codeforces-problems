#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,n,p;
    double b=0,total=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        b=(double)p/100;
        total+=b;
    }
    total=(total/n)*100;
    cout<<showpoint;
    cout<<setprecision(14);
    cout<<total<<endl;
    return 0;
}