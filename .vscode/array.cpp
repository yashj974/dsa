#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){ //found the target
            return i;
        }
    }
    return -1;
}

void reverseArray(int arr[],int sz){
    int start = 0;
    int end = sz-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sz = 9;

    reverseArray(arr,sz);
    for(int i=0;i<sz;i++){

        cout << arr[i] << " ";
    }

    return 0;
}
    

    
 
    
    
