#include<bits/stdc++.h>
using namespace std;

//> FINDING SECOND LARGEST



//> ||||| BRUTE SOLUTION ||||||||
void brutesort(int arr[], int n) {
    sort(arr,arr + n);
}



 //$ |||||  BETTER SOLUTION |||||||||
void function1() {
    int sl[] = {1,2,4,7,7,5};

    int largest, second_largest;
    largest = sl[0];
    second_largest = -1;

    int n = sizeof(sl) / sizeof(sl[0]);

    for (int i = 0; i < n; i++)
    {
       if(sl[i] > largest) {
        second_largest = largest; //! previous digit of largest goes into largeat when we found more largest
        largest = sl[i];
       }
       else if(sl[i] > second_largest && sl[i] != largest) {
        second_largest = sl[i];
       }
    }
    printf("%d", second_largest);
    
    //$ time complexity of 2n  and space is 1
}


//FOR BETTER SOLUTION
/*int main() {
    function1();
    return 0;
}*/


int main() {
    int arr[] = {3,8,34,56,98,40};
    int n = sizeof(arr) / sizeof(arr[0]);

    brutesort(arr,n);

    printf("Here is Second Number: %d", arr[n-2]);


}