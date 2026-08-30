#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while (decNum >0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += rem * pow;
        pow *= 10;  
    }
    return ans;
}

int main (){
    int decimal = 10;
    cout << decToBinary(decimal) << endl;
    
    
        
        while (binNum > 0){
            int rem = binNum % 10;
            ans += rem * pow;

            binNum /= 10;
            pow *= 2;
        
            
        }
        return ans;

    }

    int main() {
        int binary = 1010;
        cout << binToDec(binary) << endl;
        return 0;
    }
}
