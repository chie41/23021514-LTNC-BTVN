#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long n,a[1000000];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    cout<<a[i]<< " ";
    return 0;
}

