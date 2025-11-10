#include <iostream>
using namespace std;

class B; 
class A {
    int x;
public:
    A() { x = 10; }
    friend void show(A, B);
};

class B {
    int y;
public:
    B() { y = 20; }
    friend void show(A, B);
};

void show(A a, B b) {
    cout << "Sum = " << a.x + b.y << endl;
}

int main() {
    A a;
    B b;
    show(a, b);
    return 0;
}
