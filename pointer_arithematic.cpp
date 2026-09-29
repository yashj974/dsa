#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    int*ptr2 = arr;
    int*ptr1 = ptr2 + 2;

    cout<< *ptr1 <<endl; // prints the value at the address ptr1 is pointing to, which is 3
    cout<< ptr1 <<endl; 
    cout<< ptr2 <<endl; 
    return 0;
}