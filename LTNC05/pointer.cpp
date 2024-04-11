#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
    // Complete this function
    int tong =*a + *b;
    int hieu =abs(*a-*b);
    *a = tong;
    *b =hieu;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
