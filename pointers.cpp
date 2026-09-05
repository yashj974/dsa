#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a; // pointer variable that stores the address of a
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << ptr << endl;

    return 0;
}