#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
    int dem =0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<='Z'&&s[i]>='A')
        dem++;
    }
    if(s[0]>='A'&&s[0]<='Z')
    {
        return dem;
    }
    else {
    return dem+1;
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

