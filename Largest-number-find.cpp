#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size 
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // array

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0]; 

    // Loop to find the maximum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the largest element
    cout << "The largest number is: " << max << endl;
    
    return 0;
}
