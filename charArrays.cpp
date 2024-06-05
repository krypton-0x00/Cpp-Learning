#include <iostream>
#include <cstring>

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    // Copying
    strcpy(str1, str2); // str1 now contains "World"

    // Concatenation
    strcat(str1, "!!"); // str1 now contains "World!!"

    // Comparison
    if (strcmp(str1, str2) == 0) {
        std::cout << "str1 and str2 are equal." << std::endl;
    } else {
        std::cout << "str1 and str2 are not equal." << std::endl;
    }

    return 0;
}
//char str[6] = "Hello";  // Correct size
//char str[5] = "Hello";  // Incorrect, missing space for '\0'

