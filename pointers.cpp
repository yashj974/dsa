#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a; // pointer variable that stores the address of a
   cout<< ptr <<endl; // prints the address of a
   cout<< &a <<endl; // prints the address of a
   cout<< &ptr <<endl; // prints the address of the pointer variable ptr

   return 0;
}