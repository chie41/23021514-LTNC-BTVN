#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
      int secondInt;
    double secondDouble;
    string secondString;

    // Read and save an integer, double, and string to your variables
    cin >> secondInt;
    cin >> secondDouble;
    cin.ignore(); // Ignore the newline character
    getline(cin, secondString);

    // Print the sum of both integer variables on a new line
    cout << i + secondInt << endl;

    // Print the sum of the double variables on a new line
    cout << fixed << setprecision(1) << d + secondDouble << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first
    cout << s + secondString << endl;

    return 0;

    return 0;
}
