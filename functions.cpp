#include <iostream>
using namespace std;

void print() {
    cout  << "yash";
}

int sum(int a, int b) {
    return a + b;

}


// min of two numbers
int minOfTwo(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}






// binomial coefficient

int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int ncr(int n , int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);
    return fact_n / (fact_r * fact_nmr);


}

int main(){
    int n = 8 , r = 4;
    cout << ncr(n, r) << endl;

    return 0;

}
