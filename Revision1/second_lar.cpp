#include<bits/stdc++.h>
using namespace std;

int sec(int arr[],int n,int second) {
    sort(arr,arr+n);

    for (int i = n-1; i >= 0; i--)
    {
        if(arr[n-1] != second) {
            second = arr[i];
            break;
        }
    }
    
    printf("%d",second);
    return 0;

}

int main(){
    int arr[] = {1,2,3,7,7,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int second = arr[0];

    sec(arr,n,second);
    return 0;

} 