#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,min,a,b,e;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=k*l;
    a=a/nl;
    b=c*d;
    e=p/np;
    min=a;
    if(min>b)
    {
        min=b;
        if(min>e)
            min=e;
    }
    else if(min>e)
        min=e;
    cout<<min/n<<endl;
}