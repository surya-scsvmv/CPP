#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a) { x = a; }
    void operator++() { x++; }
    void display() { cout << "Value: " << x << endl; }
};

int main() {
    Number n(5);
    ++n; 
    n.display();
    return 0;
}
