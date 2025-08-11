#include<iostream>
using namespace std;
int main()
{
    long int i,j,k,l=0,n,t,m,p;
    char s[101],s1[101],ch;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>s[j];
        }
        for(k=0;k<n;k++)
        {
            for(p=k+1;p<n;p++)
            {
                if(s[k]==s[p])
                {
                    s1[l]=s[k];
                    l++;
                    k=p;
                    break;
                }
            }
        }
        for(m=0;m<l;m++)
        {
            if(s1[m]>='a' && s1[m]<='z')
                cout<<s1[m];
        }
        cout<<endl;
        s1[0]='\0';
        l=0;
    }
    return 0;
}