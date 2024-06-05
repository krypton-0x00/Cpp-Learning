#include<iostream>
using namespace std;

int main() {
    int* p; //pointer to int (bad)
    int* ptr = 0; //pointer to int )

    int num = 5;
    int *ptrToNum = &num;//pointer to int location

    char ch = 'a';
    char* ptrToCh = &ch;


    cout <<"&num:"<< & num << endl;
    cout <<"ptr: "<< ptrToNum << endl;
    cout <<"&ptr:"<< &ptrToNum << endl;
    cout <<"*ptr:" << *ptrToNum << endl;

   /*
   &num:000000F369AFF8D4
    ptr: 000000F369AFF8D4
    &ptr:000000F369AFF8F8
    *ptr:5
    */
}