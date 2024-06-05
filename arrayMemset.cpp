#include<iostream>
#include<cstring> //for memset

int main() {
	 
	//memset
	const int size = 10;
	int arr[size];

	//Init array with -1
	memset(arr, -1, sizeof(arr));

	//print
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}



}