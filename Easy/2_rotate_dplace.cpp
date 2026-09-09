#include<bits/stdc++.h>
using namespace std;

void function1() {
    int t;
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp[t];

    for (int i = 0; i < t; i++)
    {
         int temp[t] = arr[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        arr[n-1] = arr[n];
    }
    
    for (int i = 0; i < t; i++)
    {
        arr[t-1] = int temp[t];
    }
    

    
}