#include<iostream>

//passing array to function
int add(int arr[],int size){ //always pass the size of the array to the function
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
        std::cout<<sum+arr[i]<<std::endl;
    }
    return sum;
    
}
int main(){
    //zero intialization
    int arr[5]={0}; // 0 0 0 0 0
    int arr1[5]={-1}; // -1 0 0 0 0 -> 1st value is -1 rest will be 0;
    int arr2[5]={};//garbage values -> random values -234234 , 234234,-123123123,1,12342
}