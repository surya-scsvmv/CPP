#include <iostream>
namespace CSE {
    void show() {
        std::cout << "Hello from CSE namespace!" << std::endl;
    }
}
int main() {
    CSE::show();
    return 0;
}
