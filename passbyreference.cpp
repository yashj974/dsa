#include<iostream>
using namespace std;

void changeA(int* ptr){
    *ptr = 20; // changes the value of a to 20
}

int main(){
    int a = 10;
    changeA(&a); // passing a by reference

    cout<< "inside main function: " << a << endl; // prints 20

    return 0;


}