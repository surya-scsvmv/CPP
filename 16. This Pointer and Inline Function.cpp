#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int x) { this->x = x; } 
    inline void show() { cout << "Value: " << x << endl; } 
};

int main() {
    Number n(10);
    n.show();
    return 0;
}
