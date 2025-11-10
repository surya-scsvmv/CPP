#include <iostream>
using namespace std;

class Base {
protected:
    int a;
public:
    void getA() { cout << "Enter A: "; cin >> a; }
};

class Derived : public Base {
    int b;
public:
    void getB() { cout << "Enter B: "; cin >> b; }
    void display() { cout << "Sum: " << a + b << endl; }
};

int main() {
    Derived d;
    d.getA();
    d.getB();
    d.display();
    return 0;
}
