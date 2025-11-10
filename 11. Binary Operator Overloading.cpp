#include <iostream>
using namespace std;

class Add {
    int a;
public:
    Add(int x) { a = x; }
    Add operator+(Add obj) {
        return Add(a + obj.a);
    }
    void display() { cout << "Sum: " << a << endl; }
};

int main() {
    Add a1(10), a2(20), a3(0);
    a3 = a1 + a2;
    a3.display();
    return 0;
}
