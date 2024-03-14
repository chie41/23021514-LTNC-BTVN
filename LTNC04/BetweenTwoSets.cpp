#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */
std::vector<int>Factors(int num) {
    std::vector<int> factors;
 for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

int getTotalX(vector<int> secondArray, vector<int> firstArray) {
    std::vector<int> firstFactors = {1};
    for (int a : firstArray) {
        std::vector<int> factors = Factors(a);
        firstFactors.insert(firstFactors.end(), factors.begin(), factors.end());
    }
    std::vector<int> secondMultiples;
    for(int b : secondArray) {
        for (int i = 1; i <= 100; i++) {
            secondMultiples.push_back(b * i);
        }
    }
     std::vector<int> result;
    std::sort(firstFactors.begin(), firstFactors.end());
    std::sort(secondMultiples.begin(), secondMultiples.end());
    std::set_intersection(firstFactors.begin(), firstFactors.end(), secondMultiples.begin(), secondMultiples.end(), std::back_inserter(result));
    for (int num : firstFactors) {
        std::cout << num << " ";
    }
    return result.size();

}

int main()
{
  //  ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    cout << total << "\n";

    //fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

