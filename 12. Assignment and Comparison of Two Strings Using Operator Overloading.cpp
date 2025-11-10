#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char str[50];
public:
    void getData() {
        cout << "Enter string: ";
        cin >> str;
    }

    void operator=(MyString &s) {
        strcpy(str, s.str);
    }

    bool operator==(MyString &s) {
        return strcmp(str, s.str) == 0;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1, s2;
    s1.getData();
    s2.getData();

    if (s1 == s2)
        cout << "Strings are equal\n";
    else
        cout << "Strings are not equal\n";

    MyString s3;
    s3 = s1;
    cout << "Copied String: ";
    s3.display();
    return 0;
}
