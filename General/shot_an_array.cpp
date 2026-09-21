#include <bits/stdc++.h>
using namespace std;

int sort1() {
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

int sort2() {
    int arr[] = {23,56,78,34,23,44};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d , ",arr[i]);
    }
    return 0;
}

int main() {
    sort2();
    return 0;
}