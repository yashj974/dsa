// Binary search
#include<iostream>
using namespace std;

int main(){
    int n, target;
    cin>>n;

    int arr[100];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cin>>target;

    int left = 0, right = n-1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target){
            cout << "Element found at index: " << mid;
            return 0;
        }else if(arr[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    cout << "Element not found";
    return 0;
}