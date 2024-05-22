#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string,string> mp;
    int t;
    cin>>t;
    while(t--)
    {
        string name,number;
        cin>>name;
        cin>>number;
        mp[name]=number;

    }
    string name;
    while (cin>>name)
    {
        if(mp.find(name) == mp.end())
        {
            cout<<"Not found"<<endl;
        }
        else
        {
            cout<<name<<"="<<mp[name]<<endl;
        }
    }


    return 0;
}
