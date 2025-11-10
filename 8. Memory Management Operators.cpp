#include <iostream>
using namespace std;

int main() {
    int *p = new int;     
    *p = 25;
    cout << "Value: " << *p << endl;
    delete p;            

    int *arr = new int[5];
    for (int i = 0; i < 5; i++) arr[i] = i + 1;
    cout << "Array: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    delete[] arr;
    return 0;
}
