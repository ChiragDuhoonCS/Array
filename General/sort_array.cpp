#include <bits/stdc++.h>
using namespace std;

// Void function to sort the array
void sort1(int arr[], int n) {
    sort(arr, arr + n);
}

int main() {
    int arr[] = {23, 56, 89, 7, 54, 87};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the sort function
    sort1(arr, n);

    // Print the sorted array using printf
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}