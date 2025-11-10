#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    void setData(int l, int b); 
    int area() {               
        return length * breadth;
    }
};

void Rectangle::setData(int l, int b) {
    length = l;
    breadth = b;
}

int main() {
    Rectangle r;
    r.setData(10, 5);
    cout << "Area: " << r.area() << endl;
    return 0;
}
