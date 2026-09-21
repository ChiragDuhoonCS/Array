#include<bits/stdc++.h>
using namespace std;


//!  BRUTE SOLUTION {SEE AGAIN}   TC == N
int sec(int arr[], int n) {
    sort(arr, arr + n);
    
    int largest = arr[n - 1];
    int second_largest = -1; // Or a suitable default value
    
    // Traverse backwards to find the first element not equal to the largest
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            second_largest = arr[i];
            break;
        }
    }
    
    return second_largest;
}

int main(){
    int arr[] = {1, 2, 3, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = sec(arr, n);
    printf("Second largest: %d\n", result);
    return 0;
}