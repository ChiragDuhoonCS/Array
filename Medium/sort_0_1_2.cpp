#include <bits/stdc++.h>
using namespace std;

void brute() {
    int arr[] = {0, 1, 2, 0, 1, 2,1,2,0,0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort in ascending order
    sort(arr, arr + n);

    // Output the sorted array
    cout << "Sorted array (Ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    brute();
    return 0;
}