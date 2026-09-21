#include<bits/stdc++.h>
using namespace std;

//!  BRUTE SOLUTION    TC == nlogn + n
int large() {
    int arr[] = {3,2,1,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr,arr+n);

    printf("%d",arr[n-1]);
    return 0;
}


//!  OPTIMISE SOLUTION    TC == less than n

int large2() {
    int arr[] = {3,2,1,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0]; //@ focus here

    for (int i = 1; i < n; i++) //& can take 0 here too but take 1
    {
        if(arr[i] > largest){
            largest = arr[i]; //@here too
            break;
        }

    }
    printf("%d",largest);
    return 0;


    

}
int main() {
    large2();
    return 0;
}
