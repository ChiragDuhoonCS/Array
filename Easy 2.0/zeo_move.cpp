#include<bits/stdc++.h>
using namespace std;

int zero(int arr[],int n){
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        arr[i-1] = arr[i]; 
    }
    
    return 0;

}


int main() {
    int arr[]= {1,0,2,3,2,0,0,4,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    zero(arr,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d , " , arr[i]);
    }
    
}