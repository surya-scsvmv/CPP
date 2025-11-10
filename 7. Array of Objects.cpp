#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
public:
    void getData() {
        cout << "Enter ID & Name: ";
        cin >> id >> name;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Employee emp[3];
    for (int i = 0; i < 3; i++)
        emp[i].getData();

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 3; i++)
        emp[i].display();

    return 0;
}
