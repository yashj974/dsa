#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *p = &a;
    int**q = &p;

   
    cout << *q << endl; // prints the value of a (5)
    cout << p << endl; // prints the address of a
    cout << &a << endl; // prints the address of a

}