#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "The length of the array is: " << size << std::endl;

    return 0;
}
// Explanation
// sizeof(arr): This gives the total size of the array in bytes.
// sizeof(arr[0]): This gives the size of a single element in the array in bytes.
// sizeof(arr) / sizeof(arr[0]): Dividing the total size by the size of one element gives the number of elements in the array.
