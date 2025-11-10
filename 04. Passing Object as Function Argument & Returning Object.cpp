#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void setData(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c2) {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(5, 4);
    c2.setData(2, 3);

    c3 = c1.add(c2);  

    cout << "Result: ";
    c3.display();
    return 0;
}
