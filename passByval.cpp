#include <iostream>

void incrementByValue(int num) {
    num++;
    std::cout << "Inside function (by value): " << num << std::endl;
}

int main() {
    int a = 5;
    incrementByValue(a);
    std::cout << "After function call (by value): " << a << std::endl; //5
    return 0;
}
// Explanation
// The function incrementByValue takes an integer parameter by value.
// Inside the function, the local copy of the argument is incremented.
// The original value of a in the main function remains unchanged.
