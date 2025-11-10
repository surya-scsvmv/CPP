#include <iostream>
using namespace std;

class A {
protected:
    int a;
public:
    void getA() { cout << "Enter A: "; cin >> a; }
};

class B : public A {
protected:
    int b;
public:
    void getB() { cout << "Enter B: "; cin >> b; }
};

class C : public B {
public:
    void display() { cout << "Sum: " << a + b << endl; }
};

int main() {
    C obj;
    obj.getA();
    obj.getB();
    obj.display();
    return 0;
}
