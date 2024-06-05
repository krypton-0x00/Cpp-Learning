#include<iostream>
using namespace std;

int main() {
    //heap retruns a address of the allocated memory stored in a pointer

    int* ptr = new int;
    *ptr = 5;
    cout << &ptr << endl; //000000DE7FF4F7D8
    cout << *ptr << endl; //5
    delete ptr;

    //array
    int* arrPtr = new int[5];


    *(arrPtr+0) = 1; //sets index 0 to 1 // 0x001 + 0 = first index ; 0x001+1 = 0x002 (second addr
    //or
    arrPtr[2] = 12;
    cout<<arrPtr[0]; //1
    cout<<arrPtr[2]; //1
    delete []arrPtr;

}