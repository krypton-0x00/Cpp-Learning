#include <iostream>

void incrementByReference(int &num) {
    num++;
    std::cout << "Inside function (by reference): " << num << std::endl;
}

int main() {
    int a = 5;
    incrementByReference(a);
    std::cout << "After function call (by reference): " << a << std::endl; // output: 6
    return 0;
}
