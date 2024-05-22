#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try {
        int result = std::stoi(S);
        std::cout << result << std::endl;
    }
    catch (std::invalid_argument const& e) {
        std::cout << "Bad String" << std::endl;
    }
    catch (std::out_of_range const& e) {
        std::cout << "Bad String" << std::endl;
    }
    return 0;
}
