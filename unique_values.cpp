#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 values: " << "\n";

    // Input loop to fill the array
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Outer loop to check for duplicates and print unique values
    for (int i = 0; i < 5; i++) {
        bool isDuplicate = false;
        
        // Inner loop to check if arr[i] has appeared before in the array
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true; // Mark as duplicate
                break;
            }
        }

        // If the current element is not a duplicate, print it
        if (!isDuplicate) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
