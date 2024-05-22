// còn TLE
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string a[100][100];
int n,m,x,y;
bool p;
int h[4]={0,-1,1};
int c[4]={1,1,1};
void loang (int x, int y)
{
    for(int i=0;i<=2;i++)
    {
        int u = x + c[i];
        int v = y + h[i];
        // cout<<u<<" "<<v<<endl;
         //cout<<a[u][v]<< " "<<a[u-1][v]<<endl;
        if(a[u][v]=="E"&& u<n&& v>=1&&v <=m && a[u-1][v]!="R")
        {
           // cout<<u<<"  "<<v<<endl;
            loang(u,v);
        }
        else
            if(u==n && a[u][v]=="E"&& p == false)
            {
                //cout<<u<<"YES"<<v<<endl;
                p= true;
                cout<<"YES";
                return ;
            }

    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    p= false;
    char c;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>c;
            a[i][j]=c;
            if(a[i][j]=="Y")
            {
                x=i;
                y=j;
            }
           // cout<<i<<" "<<j<<" "<<a[i][j]<<endl;

        }
   // cout<<x<<"-"<<y<<endl;
    //cout<<a[2][3]<<endl;
    loang(x,y);
    if(p== false)
    {
        cout<<"NO";
    }
    return 0;
}
