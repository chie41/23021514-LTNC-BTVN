#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int Q;
    cin >> Q;

    map<string , int> scores;
    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            int Y;
            string name;
            cin >> name >> Y;
            scores[name] += Y;
        } else if (type == 2) {
            string name;
            cin >> name;
            scores[name] =0;
        } else if (type == 3) {
            string name;
            cin >> name;
            cout<<scores[name]<<endl;
        }
    }

    return 0;
}




