#include <iostream>
#include <string>

int main() {
    std::string strArray[3] = {"Hello", "World", "!"};

    for (const auto& str : strArray) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
