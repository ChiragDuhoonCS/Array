#include<bits/stdc++.h>
using namespace std;

//! BEST SOLUTION      TC == n
int left(int arr[],int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) //@ see here
    {
        arr[i-1] = arr[i];
    }
    arr[0] = arr[n-1];
    arr[n-1] = temp;

    return 0;
}

int main() {
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    left(arr,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d , " , arr[i]);
    }
    
}