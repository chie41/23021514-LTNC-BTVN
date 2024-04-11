#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    for (int t = 0; t < q; t++) {
        int Y;
        cin >> Y;

        int* lb = lower_bound(arr, arr + n, Y);

        if (lb != arr + n && *lb == Y) {
            cout << "Yes " << (lb - arr + 1) << endl;
        } else {
            cout << "No " << (lb - arr + 1) << endl;
        }
    }

    return 0;
}

