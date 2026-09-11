#include <iostream>
#include <algorithm> // Required for std::sort

int main() {
    int arr[] = {45, 12, 89, 3, 23, 77};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort in ascending order
    std::sort(arr, arr + n);

    // Output the sorted array
    std::cout << "Sorted array (Ascending): ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}