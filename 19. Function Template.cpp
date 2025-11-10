#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Int Sum: " << add(5, 10) << endl;
    cout << "Float Sum: " << add(2.5f, 3.5f) << endl;
    return 0;
}
