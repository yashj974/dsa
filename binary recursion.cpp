#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(int arr[], int st, int end, int target) {

    if (st > end) {
        return -1;
    }

    int mid = st + (end - st) / 2;

    if (target > arr[mid]) {
        return recBinarySearch(arr, mid + 1, end, target);
    }
    else if (target < arr[mid]) {
        return recBinarySearch(arr, st, mid - 1, target);
    }
    else {
        return mid;
    }
}

int main() {

    int arr1[] = {-1, 0, 3, 4, 5, 9, 12};

    cout << recBinarySearch(arr1, 0, 6, 12) << endl;

    int arr2[] = {-1, 0, 3, 4, 5, 9, 12};

    cout << recBinarySearch(arr2, 0, 6, 0) << endl;

    return 0;
}