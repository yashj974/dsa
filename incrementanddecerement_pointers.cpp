#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    int a = 10;
    int* ptr = &a; // pointer variable that stores the address of a
    cout<< ptr <<endl; // prints the address of a

    ptr++; // incrementing the pointer to point to the next memory location
    cout<< ptr <<endl; // prints the address of the next memory location
    return 0;


}