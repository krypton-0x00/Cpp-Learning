#include<iostream>

using namespace std;
int main(){
    int a = 10;
    int arr[9] = { 0,0,0,1,1,0,1,1,0 };
    for (int i = 0; i < 9; i++) {
        if (arr[i] == 0) {
            arr[i] = 1;
        }
        else {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << ",";
    }
    //1, 1, 1, 0, 0, 1, 0, 0, 1,
	
}