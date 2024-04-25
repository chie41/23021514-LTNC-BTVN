#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
public:
    void set_age(int age_) { age = age_;}
    void set_standard(int standard_) { standard = standard_;}
    void set_first_name(string first_name_) {first_name_ = first_name;}
    void set_last_name (string last_name_) {last_name = last_name_; }
    int get_age () { return age;}
    string get_last_name() {return last_name;}
    string get_first_name() { return first_name;}
    int get_standard() { return standard;}
private:
int age;
string first_name;
string last_name;
int standard;
};
int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
