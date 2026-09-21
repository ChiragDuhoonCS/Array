#include<bits/stdc++.h>
using namespace std;


//!  BRUTE SOLUTION {SEE AGAIN}   TC == nLogn + n
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

//!  BETTER SOLUTION      TC == 2N
int sec2(int arr[],int n) {
    int largest = arr[n - 1];
    int second_largest = -1;

    for (int i = 0; i < n; i++)
    {
    
       if(arr[i] > largest) {
        second_largest = largest; //! previous digit of largest goes into largeat when we found more largest
        largest = arr[i];
       }
       else if(arr[i] > second_largest && arr[i] != largest) {
        second_largest = arr[i];
       }
    }
    return second_largest;

}


int main(){
    int arr[] = {1, 2, 3, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = sec2(arr, n);
    printf("Second largest: %d\n", result);
    return 0;
}