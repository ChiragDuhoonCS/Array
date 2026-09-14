#include<bits/stdc++.h>
using namespace std;

void left_rotate(int arr[],int n) {
    
    int temp = arr[0];

    for (int i = 0; i < n-1; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp; 
}

int main() {
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    left_rotate(arr,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d , " , arr[i]);
    }
    
}