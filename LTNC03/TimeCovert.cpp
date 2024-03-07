#include<bits/stdc++.h>
using namespace std;
string s;
int n,a;
int main()
{
    cin>>s;
    n=s.size()-1;
    if (s[n-1]=='A')
    {
        a=(s[0]-48)*10+s[1]-48;
        if (a==12)
        {
            s[0]='0';
            s[1]='0';
        }
        s.erase(n-1,2);
        cout<<s;
    }
    else
        if(s[n-1]=='P')
    {
        a=(s[0]-48)*10+s[1]-48;
        if(a<12)
        {
            a=a+12;
        }
        cout<<a;
        for(int i=2;i<=n-2;i++)
            cout<<s[i];
    }
}

