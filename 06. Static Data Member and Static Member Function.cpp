#include <iostream>
using namespace std;

class Student {
    int roll;
    static int count; 
public:
    void getData(int r) {
        roll = r;
        count++;
    }
    void showData() {
        cout << "Roll: " << roll << endl;
    }
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};
int Student::count = 0;

int main() {
    Student s1, s2, s3;
    s1.getData(101);
    s2.getData(102);
    s3.getData(103);
    Student::showCount();
    return 0;
}
