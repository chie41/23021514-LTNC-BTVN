#include <iostream>
#include <string>
using namespace std;

const int N = 4;
char letters[N] = {'a', 'b', 'c', 'd'};
string current = "";

void generateStrings(int n) {
    if (n == 0) {
        cout << current << endl;
    } else {
        for (int i = 0; i < N; i++) {
            current.push_back(letters[i]);
            generateStrings(n - 1);
            current.pop_back();
        }
    }
}

int main() {
    int length = 3; // Độ dài của chuỗi
    generateStrings(length);
    return 0;
}
