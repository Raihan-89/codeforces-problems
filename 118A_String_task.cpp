#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long i,p=0;
    string s;
    char s1[1001];
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    for(i=0;i<s.size();i++)
    {
        if((s[i]!='a')&&(s[i]!='o')&&(s[i]!='y')&&(s[i]!='e')&&(s[i]!='u')&&(s[i]!='i'))
        {
            s1[p]='.';
            p++;
            s1[p]=s[i];
            p++;
            s1[p]='\0';
        }
    }
    for(i=0;s1[i]!='\0';i++)
    {
        if((s1[i]>'a'&&s1[i]<='z')||s1[i]=='.')
            cout<<s1[i];
    }
    return 0;
}
// transform(s.begin(),s.end(),s.begin(),::tolower);
//     for(i=0;i<s.size();i++)
//     {
//         if((s[i]!='a')&&(s[i]!='o')&&(s[i]!='y')&&(s[i]!='e')&&(s[i]!='u')&&(s[i]!='i'))
//         {
//             s1[p]='.';
//             p++;
//             s1[p]=s[i];
//             p++;
//             s1[p]='\0';
//         }
//     }
//     cout<<s1<<endl;