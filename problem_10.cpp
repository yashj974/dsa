//Selection sort 
//Find the smallest element and put it at the beginning.

#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {

            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);

        // Show array after each pass
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }

        cout << endl;
    }

    return 0;
}