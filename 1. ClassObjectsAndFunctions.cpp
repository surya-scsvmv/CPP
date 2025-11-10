#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;        
    s1.name = "Alice";
    s1.age = 20;
    s1.display();

    Student s2;        
    s2.name = "Bob";
    s2.age = 22;
    s2.display();

    return 0;
}
