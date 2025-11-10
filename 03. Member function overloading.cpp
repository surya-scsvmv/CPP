#include <iostream>
using namespace std;

class PrintData {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double d) {
        cout << "Double: " << d << endl;
    }

    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    PrintData p;
    p.display(10);
    p.display(99.99);
    p.display("Hello World");
    return 0;
}
