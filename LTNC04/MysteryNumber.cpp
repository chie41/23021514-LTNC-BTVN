#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;

map<int,int> mp;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[100000];
    int b[100000];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=1;i<=n+1;i++)
    {
        cin>>b[i];
        if(mp[b[i]]==0)
        {
            cout<<b[i];
        }
        else
        {
            mp[b[i]]--;
        }
    }
    return 0;
}
